"""
grab_demo 包内多个视觉节点共享的深度图工具。

为什么独立出来：
  把 sensor_msgs/Image (深度) 解码成 float32 米单位数组这件事，
  YOLO / KCF / 以后要加的 Mask R-CNN / 点云分割节点都要做一遍。
  之前每个节点各自实现一份 _decode_depth_to_meters，复制粘贴
  → 修一个忘改其它 → 出现 16UC1 硬编码这种"在 A 节点修过、
  B 节点又复发"的回归 bug。统一放到这里只维护一份。
"""

import numpy as np


def decode_depth_to_meters(depth_msg, bridge, logger=None):
    """
    把 sensor_msgs/Image 深度图解成 float32 numpy 数组，单位**米**。

    支持的编码：
      - 16UC1 / mono16   毫米单位，自动 / 1000.0
      - 32FC1            米单位，直接返回

    参数：
      depth_msg: sensor_msgs.msg.Image
      bridge:    cv_bridge.CvBridge 实例
      logger:    可选 rclpy logger，遇到不支持的编码时 throttle 报错

    返回：
      np.ndarray (float32, 米) 或 None（编码不支持）

    用法：
      from grab_demo_utils.depth_utils import decode_depth_to_meters
      depth_m = decode_depth_to_meters(depth_msg, self.bridge, self.get_logger())
      if depth_m is None:
          return   # 已经记过日志，丢掉这一帧
    """
    enc = depth_msg.encoding
    if enc == "16UC1" or enc == "mono16":
        raw = bridge.imgmsg_to_cv2(depth_msg, "16UC1")
        return raw.astype(np.float32) / 1000.0
    if enc.startswith("32FC1"):
        return bridge.imgmsg_to_cv2(depth_msg, "32FC1").astype(np.float32)
    if logger is not None:
        logger.error(
            f"不支持的深度图编码: '{enc}'（仅支持 16UC1/mono16/32FC1）",
            throttle_duration_sec=5.0,
        )
    return None
