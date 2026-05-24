#!/usr/bin/env python3
"""
KCF / CSRT / MOSSE 单目标跟踪节点
============================================================
作用：
  - 给定一个初始 ROI（图像里的矩形框），逐帧跟踪它的位置；
  - 每帧用深度 + 相机内参算出目标在相机系下的 3D 坐标；
  - 以 TF 形式发布：camera_color_optical_frame -> kcf_track（或 kcf_<label>）；
  - grab_service_node 直接用 obj_link="kcf_track" 即可抓取被跟踪物体。

两种初始化方式（可同时使用）：
  1) 服务初始化（程序化）：调用 /kcf_tracker_node/init (grab_demo/srv/InitTracker)
     —— 适合 YOLO/HSV 先检测一次，再把 bbox 交给 KCF 持续跟踪。
  2) 鼠标框选（交互式）：在弹出的 "KCF Tracker" 窗口里按 's' 进入选框模式，
     拖动鼠标框出目标后回车确认。按 'r' 重置跟踪。

为什么用跟踪而不是每帧检测？
  - 速度更快（KCF ~几百 FPS，CSRT ~50 FPS，YOLOv8n ~30 FPS）；
  - 即使物体短暂被遮挡或姿态变化，跟踪器仍能保持锁定；
  - 输出 ID 稳定（YOLO 每帧重新检测会让同类物体的 TF 名混淆）。
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import TransformStamped
from std_srvs.srv import Trigger
import tf2_ros

import cv2
import numpy as np
from cv_bridge import CvBridge
import message_filters

from grab_demo.srv import InitTracker


# ── OpenCV 兼容性：不同版本里 KCF/CSRT/MOSSE 的位置不一样 ──────────────────────
def _create_tracker(name: str):
    """根据名字创建 OpenCV 跟踪器，兼容 OpenCV 4.x 不同小版本。"""
    name = name.upper()
    candidates = {
        "KCF":   ["TrackerKCF_create",   "legacy.TrackerKCF_create"],
        "CSRT":  ["TrackerCSRT_create",  "legacy.TrackerCSRT_create"],
        "MOSSE": ["legacy.TrackerMOSSE_create", "TrackerMOSSE_create"],
    }
    if name not in candidates:
        raise ValueError(f"未知跟踪器类型: {name}（可选 KCF / CSRT / MOSSE）")

    for path in candidates[name]:
        obj = cv2
        try:
            for attr in path.split("."):
                obj = getattr(obj, attr)
            return obj()
        except AttributeError:
            continue
    raise RuntimeError(
        f"当前 OpenCV 不支持 {name} 跟踪器，请安装 opencv-contrib-python："
        f"  pip install opencv-contrib-python"
    )


class KcfTrackerNode(Node):
    def __init__(self):
        super().__init__("kcf_tracker_node")

        # ── 参数 ──────────────────────────────────────────────────────────────
        self.declare_parameter("tracker_type", "KCF")    # KCF / CSRT / MOSSE
        self.declare_parameter("rgb_topic", "/camera_arm/color/image_raw")
        self.declare_parameter("depth_topic", "/camera_arm/depth/image_raw")
        self.declare_parameter("camera_info_topic", "/gemini_info")
        self.declare_parameter("result_image_topic", "/kcf_result_image")
        self.declare_parameter("camera_frame", "camera_color_optical_frame")
        self.declare_parameter("show_window", True)      # 是否弹出 OpenCV 窗口
        # 深度有效范围（mm）
        self.declare_parameter("depth_min_mm", 100)
        self.declare_parameter("depth_max_mm", 2000)
        # 手眼标定后的位置微调（米）
        self.declare_parameter("x_offset", 0.0)
        self.declare_parameter("y_offset", 0.0)
        self.declare_parameter("z_offset", 0.0)
        # 跟踪失败时连续多少帧没找回就停止发布 TF
        self.declare_parameter("max_lost_frames", 30)

        self.tracker_type = self.get_parameter("tracker_type").value
        rgb_topic    = self.get_parameter("rgb_topic").value
        depth_topic  = self.get_parameter("depth_topic").value
        info_topic   = self.get_parameter("camera_info_topic").value
        result_topic = self.get_parameter("result_image_topic").value
        self.cam_frame = self.get_parameter("camera_frame").value
        self.show_window = self.get_parameter("show_window").value
        # 内部统一用"米"，参数名沿用 _mm 兼容旧 launch
        self.depth_min_m = self.get_parameter("depth_min_mm").value / 1000.0
        self.depth_max_m = self.get_parameter("depth_max_mm").value / 1000.0
        self.x_off = self.get_parameter("x_offset").value
        self.y_off = self.get_parameter("y_offset").value
        self.z_off = self.get_parameter("z_offset").value
        self.max_lost = self.get_parameter("max_lost_frames").value

        # ── 状态 ──────────────────────────────────────────────────────────────
        self.bridge   = CvBridge()
        self.tf_pub   = tf2_ros.TransformBroadcaster(self)
        self.tracker  = None              # OpenCV 跟踪器对象
        self.label    = "kcf_track"       # TF child_frame_id
        self.lost_count = 0
        self.last_rgb = None              # 最近一帧 BGR，鼠标框选时用
        self.fx = self.fy = self.cx = self.cy = None
        self.camera_info_ready = False

        # ── ROS 接口 ──────────────────────────────────────────────────────────
        self.result_pub = self.create_publisher(Image, result_topic, 10)

        self.create_subscription(CameraInfo, info_topic, self._camera_info_cb, 1)

        # 同步 RGB + 深度
        self.rgb_sub = message_filters.Subscriber(self, Image, rgb_topic)
        self.dep_sub = message_filters.Subscriber(self, Image, depth_topic)
        self.sync = message_filters.ApproximateTimeSynchronizer(
            [self.rgb_sub, self.dep_sub], queue_size=5, slop=0.05
        )
        self.sync.registerCallback(self._image_cb)

        # 服务：初始化跟踪器（程序化接口，可被 YOLO/HSV/外部脚本调用）
        self.create_service(InitTracker, "~/init", self._init_srv_cb)
        # 服务：重置（停止跟踪，等待下次 init）
        self.create_service(Trigger, "~/reset", self._reset_srv_cb)

        self.get_logger().info(
            f"KCF 跟踪节点启动\n"
            f"  跟踪器: {self.tracker_type}\n"
            f"  RGB:    {rgb_topic}\n"
            f"  Depth:  {depth_topic}\n"
            f"  相机系: {self.cam_frame}\n"
            f"  初始化方式: 服务 /{self.get_name()}/init"
            f"{' 或 OpenCV 窗口按 s 框选' if self.show_window else ''}"
        )

    # ── 相机内参 ──────────────────────────────────────────────────────────────
    def _camera_info_cb(self, msg: CameraInfo):
        if self.camera_info_ready:
            return
        K = msg.k
        self.fx, self.fy, self.cx, self.cy = K[0], K[4], K[2], K[5]
        self.camera_info_ready = True
        self.get_logger().info(
            f"相机内参就绪 fx={self.fx:.1f} fy={self.fy:.1f} "
            f"cx={self.cx:.1f} cy={self.cy:.1f}"
        )

    # ── 服务：初始化跟踪器 ────────────────────────────────────────────────────
    def _init_srv_cb(self, req: InitTracker.Request, resp: InitTracker.Response):
        if self.last_rgb is None:
            resp.success = False
            resp.message = "尚未收到任何 RGB 图像，无法初始化跟踪器"
            return resp
        if req.width <= 0 or req.height <= 0:
            resp.success = False
            resp.message = f"非法 ROI 尺寸 w={req.width} h={req.height}"
            return resp

        h, w = self.last_rgb.shape[:2]
        x = max(0, min(req.x, w - 1))
        y = max(0, min(req.y, h - 1))
        ww = max(1, min(req.width,  w - x))
        hh = max(1, min(req.height, h - y))

        try:
            self.tracker = _create_tracker(self.tracker_type)
            self.tracker.init(self.last_rgb, (x, y, ww, hh))
        except Exception as e:
            self.tracker = None
            resp.success = False
            resp.message = f"跟踪器初始化失败: {e}"
            self.get_logger().error(resp.message)
            return resp

        self.label = (req.label.strip() or "kcf_track")
        if not self.label.startswith("kcf_"):
            self.label = f"kcf_{self.label}"
        self.lost_count = 0

        resp.success = True
        resp.message = f"跟踪器已初始化: bbox=({x},{y},{ww},{hh}) tf=`{self.label}`"
        self.get_logger().info(resp.message)
        return resp

    # ── 服务：重置 ────────────────────────────────────────────────────────────
    def _reset_srv_cb(self, _req, resp: Trigger.Response):
        self.tracker = None
        self.lost_count = 0
        resp.success = True
        resp.message = "跟踪器已重置"
        self.get_logger().info(resp.message)
        return resp

    # ── 工具：把深度图安全地解码成"米"为单位的 float32 数组 ──────────────────
    # 兼容 16UC1（毫米，Astra/Gemini 类）和 32FC1（米，RealSense/Azure 类）
    def _decode_depth_to_meters(self, depth_msg: Image):
        enc = depth_msg.encoding
        if enc == "16UC1" or enc == "mono16":
            raw = self.bridge.imgmsg_to_cv2(depth_msg, "16UC1")
            return raw.astype(np.float32) / 1000.0
        if enc.startswith("32FC1"):
            return self.bridge.imgmsg_to_cv2(depth_msg, "32FC1").astype(np.float32)
        self.get_logger().error(
            f"不支持的深度图编码: '{enc}'（仅支持 16UC1/mono16/32FC1）",
            throttle_duration_sec=5.0,
        )
        return None

    # ── 主回调：每帧更新跟踪 ──────────────────────────────────────────────────
    def _image_cb(self, rgb_msg: Image, depth_msg: Image):
        try:
            rgb     = self.bridge.imgmsg_to_cv2(rgb_msg, "bgr8")
            depth_m = self._decode_depth_to_meters(depth_msg)
        except Exception as e:
            self.get_logger().error(f"图像转换失败: {e}")
            return
        if depth_m is None:
            return

        self.last_rgb = rgb  # 给鼠标框选 / init 服务用
        vis = rgb.copy()

        # RGB 与深度图分辨率不一致时按比例兜底（推荐在驱动里开 align_depth_to_color）
        h_rgb, w_rgb = rgb.shape[:2]
        h_dep, w_dep = depth_m.shape[:2]
        if (h_rgb, w_rgb) != (h_dep, w_dep):
            self.get_logger().warn(
                f"RGB({w_rgb}x{h_rgb}) 与深度({w_dep}x{h_dep}) 分辨率不一致，"
                f"建议在相机驱动开启 align_depth_to_color；这里按比例兜底缩放。",
                throttle_duration_sec=10.0,
            )
        sx = w_dep / float(w_rgb)
        sy = h_dep / float(h_rgb)

        if self.tracker is not None:
            ok, bbox = self.tracker.update(rgb)
            if ok:
                self.lost_count = 0
                x, y, w, h = [int(v) for v in bbox]
                cx_px = x + w // 2
                cy_px = y + h // 2

                if self.camera_info_ready:
                    pos = self._pixel_to_3d(cx_px, cy_px, depth_m, sx, sy)
                    if pos is not None:
                        X, Y, Z = pos
                        self._publish_tf(self.label, X, Y, Z, rgb_msg.header.stamp)
                        cv2.putText(
                            vis, f"({X:.3f},{Y:.3f},{Z:.3f})m",
                            (x, min(y + h + 18, rgb.shape[0] - 1)),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 255), 1
                        )
                    else:
                        cv2.putText(vis, "no valid depth", (x, max(y - 8, 0)),
                                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)
                else:
                    cv2.putText(vis, "waiting camera_info", (10, 30),
                                cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 0, 255), 2)

                cv2.rectangle(vis, (x, y), (x + w, y + h), (0, 255, 0), 2)
                cv2.putText(vis, self.label, (x, max(y - 8, 0)),
                            cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 1)
            else:
                self.lost_count += 1
                cv2.putText(vis, f"LOST ({self.lost_count}/{self.max_lost})",
                            (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.7,
                            (0, 0, 255), 2)
                if self.lost_count >= self.max_lost:
                    self.get_logger().warn("连续丢失太多帧，跟踪器已停用，请重新 init")
                    self.tracker = None
        else:
            cv2.putText(vis, f"no tracker | call /{self.get_name()}/init or press 's'",
                        (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.55,
                        (200, 200, 200), 2)

        # 发布可视化结果（即使不开窗口也发，方便 rqt_image_view 看）
        try:
            self.result_pub.publish(self.bridge.cv2_to_imgmsg(vis, "bgr8"))
        except Exception as e:
            self.get_logger().error(f"发布可视化失败: {e}")

        if self.show_window:
            cv2.imshow("KCF Tracker", vis)
            key = cv2.waitKey(1) & 0xFF
            if key == ord('s'):
                self._mouse_select_roi()
            elif key == ord('r'):
                self.tracker = None
                self.get_logger().info("按下 r，跟踪器已重置")

    # ── 工具：像素 + 深度 → 相机系 3D 点 ─────────────────────────────────────
    # u, v 是 RGB 像素坐标；depth_m 已解码为米；
    # sx, sy 是 RGB→深度坐标的缩放因子，分辨率一致时为 1.0。
    # 反投影使用 RGB 像素坐标 + RGB 相机内参，输出在 color_optical_frame。
    def _pixel_to_3d(self, u: int, v: int, depth_m: np.ndarray,
                     sx: float = 1.0, sy: float = 1.0):
        h_d, w_d = depth_m.shape[:2]
        u_d = int(u * sx)
        v_d = int(v * sy)
        if not (0 <= u_d < w_d and 0 <= v_d < h_d):
            return None
        # 在中心点附近取中位数，抗噪
        pad = 5
        rx1, rx2 = max(0, u_d - pad), min(w_d, u_d + pad)
        ry1, ry2 = max(0, v_d - pad), min(h_d, v_d + pad)
        if rx2 <= rx1 or ry2 <= ry1:
            return None
        roi = depth_m[ry1:ry2, rx1:rx2]
        valid = (roi > self.depth_min_m) & (roi < self.depth_max_m)
        if not np.any(valid):
            return None
        z = float(np.median(roi[valid]))
        X = (u - self.cx) * z / self.fx + self.x_off
        Y = (v - self.cy) * z / self.fy + self.y_off
        Z = z + self.z_off
        return X, Y, Z

    # ── 工具：发布 TF ─────────────────────────────────────────────────────────
    def _publish_tf(self, child: str, x: float, y: float, z: float, stamp):
        t = TransformStamped()
        t.header.stamp = stamp
        t.header.frame_id = self.cam_frame
        t.child_frame_id = child
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = z
        t.transform.rotation.w = 1.0
        self.tf_pub.sendTransform(t)

    # ── 鼠标框选：按 's' 触发，使用 cv2.selectROI（阻塞，但只阻塞 GUI 线程）──
    def _mouse_select_roi(self):
        if self.last_rgb is None:
            self.get_logger().warn("还没有图像，无法框选")
            return
        roi = cv2.selectROI("KCF Tracker", self.last_rgb,
                            fromCenter=False, showCrosshair=True)
        x, y, w, h = [int(v) for v in roi]
        if w <= 0 or h <= 0:
            self.get_logger().info("取消了框选")
            return
        try:
            self.tracker = _create_tracker(self.tracker_type)
            self.tracker.init(self.last_rgb, (x, y, w, h))
            self.label = "kcf_track"
            self.lost_count = 0
            self.get_logger().info(f"鼠标框选完成: bbox=({x},{y},{w},{h})")
        except Exception as e:
            self.tracker = None
            self.get_logger().error(f"跟踪器初始化失败: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = KcfTrackerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.show_window:
            cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
