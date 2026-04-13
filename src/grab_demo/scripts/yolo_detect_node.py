#!/usr/bin/env python3
"""
YOLO 目标检测节点
功能：
  1. 订阅 RGB + 深度图像
  2. 使用 YOLOv8 检测物体
  3. 用深度值 + 相机内参计算物体的 3D 坐标（相机系）
  4. 发布 TF 变换: camera_color_optical_frame -> yolo_<类名>
  5. 发布带标注的可视化图像

这样 grab_service_node 就可以直接用 obj_link = "yolo_cup" 等来抓取
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import TransformStamped
from std_msgs.msg import String
import tf2_ros
import cv2
import numpy as np
from cv_bridge import CvBridge
import message_filters

try:
    from ultralytics import YOLO
except ImportError:
    raise ImportError(
        "请先安装 ultralytics: pip install ultralytics"
    )


class YoloDetectNode(Node):
    """
    YOLO 检测节点
    检测到物体后，以 TF 形式发布物体在空间中的位置，
    供 grab_service_node 查询并控制机械臂抓取。
    """

    def __init__(self):
        super().__init__("yolo_detect_node")

        # ── 参数声明 ──────────────────────────────────────────────────────────
        self.declare_parameter("model_path", "yolov8n.pt")        # YOLO 模型路径
        self.declare_parameter("rgb_topic", "/camera_arm/color/image_raw")
        self.declare_parameter("depth_topic", "/camera_arm/depth/image_raw")
        self.declare_parameter("camera_info_topic", "/gemini_info")
        self.declare_parameter("result_image_topic", "/yolo_result_image")
        self.declare_parameter("confidence", 0.5)                 # 置信度阈值
        self.declare_parameter("camera_frame", "camera_color_optical_frame")
        self.declare_parameter("target_classes", "")              # 留空=全检测, 否则逗号分隔, 如 "cup,bottle"
        # 深度有效范围（单位：毫米）
        self.declare_parameter("depth_min_mm", 100)
        self.declare_parameter("depth_max_mm", 2000)
        # 位置偏移（单位：米），用于手眼标定微调
        self.declare_parameter("x_offset", 0.0)
        self.declare_parameter("y_offset", 0.0)
        self.declare_parameter("z_offset", 0.0)

        # ── 读取参数 ──────────────────────────────────────────────────────────
        model_path    = self.get_parameter("model_path").value
        rgb_topic     = self.get_parameter("rgb_topic").value
        depth_topic   = self.get_parameter("depth_topic").value
        info_topic    = self.get_parameter("camera_info_topic").value
        result_topic  = self.get_parameter("result_image_topic").value
        self.conf_thr = self.get_parameter("confidence").value
        self.cam_frame = self.get_parameter("camera_frame").value
        classes_str   = self.get_parameter("target_classes").value
        self.depth_min = self.get_parameter("depth_min_mm").value
        self.depth_max = self.get_parameter("depth_max_mm").value
        self.x_off = self.get_parameter("x_offset").value
        self.y_off = self.get_parameter("y_offset").value
        self.z_off = self.get_parameter("z_offset").value

        self.target_classes = (
            [c.strip() for c in classes_str.split(",") if c.strip()]
            if classes_str else []
        )

        # ── 加载 YOLO 模型 ────────────────────────────────────────────────────
        self.get_logger().info(f"正在加载 YOLO 模型: {model_path}")
        self.model = YOLO(model_path)
        self.get_logger().info("YOLO 模型加载完成")

        # ── 工具对象 ──────────────────────────────────────────────────────────
        self.bridge    = CvBridge()
        self.tf_pub    = tf2_ros.TransformBroadcaster(self)

        # 相机内参（等待 CameraInfo 话题填充）
        self.fx = self.fy = self.cx = self.cy = None
        self.camera_info_ready = False

        # ── 发布器：可视化结果图像 ────────────────────────────────────────────
        self.result_pub = self.create_publisher(Image, result_topic, 10)
        # 发布当前检测到的物体类别列表（字符串）
        self.detected_pub = self.create_publisher(String, "/yolo_detected_objects", 10)

        # ── 订阅相机内参 ──────────────────────────────────────────────────────
        self.info_sub = self.create_subscription(
            CameraInfo, info_topic, self._camera_info_cb, 1
        )

        # ── 同步订阅 RGB + 深度图像 ───────────────────────────────────────────
        self.rgb_sub = message_filters.Subscriber(self, Image, rgb_topic)
        self.dep_sub = message_filters.Subscriber(self, Image, depth_topic)
        self.sync = message_filters.ApproximateTimeSynchronizer(
            [self.rgb_sub, self.dep_sub], queue_size=5, slop=0.05
        )
        self.sync.registerCallback(self._image_cb)

        self.get_logger().info(
            f"YOLO 检测节点启动成功\n"
            f"  模型: {model_path}\n"
            f"  置信度: {self.conf_thr}\n"
            f"  监听话题: {rgb_topic}\n"
            f"  目标类别: {self.target_classes if self.target_classes else '全部'}"
        )

    # ── 回调：相机内参 ────────────────────────────────────────────────────────

    def _camera_info_cb(self, msg: CameraInfo):
        if self.camera_info_ready:
            return
        K = msg.k            # 3x3 内参矩阵，行优先展开为长度 9 的列表
        self.fx = K[0]
        self.fy = K[4]
        self.cx = K[2]
        self.cy = K[5]
        self.camera_info_ready = True
        self.get_logger().info(
            f"相机内参已接收: fx={self.fx:.1f}, fy={self.fy:.1f}, "
            f"cx={self.cx:.1f}, cy={self.cy:.1f}"
        )

    # ── 回调：同步 RGB + 深度 ─────────────────────────────────────────────────

    def _image_cb(self, rgb_msg: Image, depth_msg: Image):
        if not self.camera_info_ready:
            self.get_logger().warn("等待相机内参...", throttle_duration_sec=3.0)
            return

        # 转换图像格式
        try:
            rgb   = self.bridge.imgmsg_to_cv2(rgb_msg,   "bgr8")
            depth = self.bridge.imgmsg_to_cv2(depth_msg, "16UC1")  # 单位：mm
        except Exception as e:
            self.get_logger().error(f"图像转换失败: {e}")
            return

        h, w = rgb.shape[:2]

        # ── YOLO 推理 ─────────────────────────────────────────────────────────
        results = self.model(rgb, conf=self.conf_thr, verbose=False)

        vis_img = rgb.copy()
        detected_names = []

        for result in results:
            boxes = result.boxes
            if boxes is None:
                continue

            for box in boxes:
                cls_id   = int(box.cls[0])
                cls_name = self.model.names[cls_id]
                conf_val = float(box.conf[0])

                # 如果设置了目标类别过滤
                if self.target_classes and cls_name not in self.target_classes:
                    continue

                # 边界框像素坐标
                x1, y1, x2, y2 = map(int, box.xyxy[0])
                cx_px = (x1 + x2) // 2
                cy_px = (y1 + y2) // 2

                # ── 获取深度值（在中心区域取中位数，更稳健）─────────────────
                pad = 5
                roi_x1 = max(0, cx_px - pad)
                roi_x2 = min(w, cx_px + pad)
                roi_y1 = max(0, cy_px - pad)
                roi_y2 = min(h, cy_px + pad)
                depth_roi = depth[roi_y1:roi_y2, roi_x1:roi_x2].astype(np.float32)

                # 过滤无效深度值
                valid_mask = (depth_roi > self.depth_min) & (depth_roi < self.depth_max)
                if not np.any(valid_mask):
                    self.get_logger().warn(
                        f"[{cls_name}] 无有效深度值（ROI 内均为 0 或超出范围）",
                        throttle_duration_sec=2.0
                    )
                    continue

                depth_mm = float(np.median(depth_roi[valid_mask]))
                depth_m  = depth_mm / 1000.0

                # ── 像素坐标 → 相机坐标系 3D 点 ──────────────────────────────
                # 针孔相机模型: X = (u - cx) * Z / fx
                X = (cx_px - self.cx) * depth_m / self.fx + self.x_off
                Y = (cy_px - self.cy) * depth_m / self.fy + self.y_off
                Z = depth_m + self.z_off

                # ── 发布 TF ───────────────────────────────────────────────────
                # TF 帧名：yolo_<类名>  例：yolo_cup, yolo_bottle
                tf_frame = f"yolo_{cls_name}"
                self._publish_tf(tf_frame, X, Y, Z, rgb_msg.header.stamp)

                detected_names.append(cls_name)

                # ── 可视化 ────────────────────────────────────────────────────
                color = self._class_color(cls_id)
                cv2.rectangle(vis_img, (x1, y1), (x2, y2), color, 2)
                label = f"{cls_name} {conf_val:.2f} | Z={depth_m:.3f}m"
                cv2.putText(
                    vis_img, label, (x1, max(y1 - 8, 0)),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.55, color, 2
                )
                # 标记中心点
                cv2.circle(vis_img, (cx_px, cy_px), 4, (0, 0, 255), -1)
                # 显示 3D 坐标
                coord_text = f"({X:.3f}, {Y:.3f}, {Z:.3f})m"
                cv2.putText(
                    vis_img, coord_text, (x1, min(y2 + 18, h - 1)),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.45, color, 1
                )

        # ── 发布可视化图像 ────────────────────────────────────────────────────
        try:
            self.result_pub.publish(
                self.bridge.cv2_to_imgmsg(vis_img, "bgr8")
            )
        except Exception as e:
            self.get_logger().error(f"发布可视化图像失败: {e}")

        # ── 发布检测到的类别列表 ──────────────────────────────────────────────
        if detected_names:
            msg = String()
            msg.data = ",".join(set(detected_names))
            self.detected_pub.publish(msg)

    # ── 工具函数 ──────────────────────────────────────────────────────────────

    def _publish_tf(self, child_frame: str, x: float, y: float, z: float, stamp):
        """发布从 camera_frame 到 child_frame 的 TF 变换"""
        t = TransformStamped()
        t.header.stamp    = stamp
        t.header.frame_id = self.cam_frame
        t.child_frame_id  = child_frame

        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = z

        # 姿态：单位四元数（不旋转，抓取时由机械臂自行调整）
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0

        self.tf_pub.sendTransform(t)

    @staticmethod
    def _class_color(cls_id: int):
        """根据类别 ID 生成固定颜色"""
        np.random.seed(cls_id)
        return tuple(int(c) for c in np.random.randint(50, 220, 3))


def main(args=None):
    rclpy.init(args=args)
    node = YoloDetectNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
