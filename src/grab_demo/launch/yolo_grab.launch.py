"""
yolo_grab.launch.py
启动 YOLO 检测节点 + 抓取服务节点

用法:
  ros2 launch grab_demo yolo_grab.launch.py
  ros2 launch grab_demo yolo_grab.launch.py model_path:=/home/user/models/yolo11n.pt target_classes:=cup,bottle
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    # ── Launch 参数声明 ────────────────────────────────────────────────────────
    model_path_arg = DeclareLaunchArgument(
        "model_path",
        default_value="yolov8n.pt",
        description="YOLO 模型文件路径，如 /home/user/yolov8n.pt 或 yolov8n.pt (自动下载)"
    )
    # 这个值越大，难触发抓取，但是可以抓取到
    confidence_arg = DeclareLaunchArgument(
        "confidence",
        default_value="0.5",
        description="YOLO 检测置信度阈值 (0~1)"
    )
    target_classes_arg = DeclareLaunchArgument(
        "target_classes",
        default_value="",
        description="目标类别过滤，逗号分隔，如 cup,bottle；留空表示检测所有类别"
    )
    rgb_topic_arg = DeclareLaunchArgument(
        "rgb_topic",
        default_value="/camera_arm/color/image_raw",
        description="RGB 图像话题"
    )
    depth_topic_arg = DeclareLaunchArgument(
        "depth_topic",
        default_value="/camera_arm/depth/image_raw",
        description="深度图像话题"
    )
    camera_info_topic_arg = DeclareLaunchArgument(
        "camera_info_topic",
        default_value="/gemini_info",
        description="相机内参话题"
    )
    camera_frame_arg = DeclareLaunchArgument(
        "camera_frame",
        default_value="camera_color_optical_frame",
        description="相机坐标系名称（TF 父帧）"
    )

    # ── YOLO 检测节点 ──────────────────────────────────────────────────────────
    yolo_node = Node(
        package="grab_demo",
        executable="yolo_detect_node",
        name="yolo_detect_node",
        output="screen",
        parameters=[{
            "model_path":          LaunchConfiguration("model_path"),
            "confidence":          LaunchConfiguration("confidence"),
            "target_classes":      LaunchConfiguration("target_classes"),
            "rgb_topic":           LaunchConfiguration("rgb_topic"),
            "depth_topic":         LaunchConfiguration("depth_topic"),
            "camera_info_topic":   LaunchConfiguration("camera_info_topic"),
            "camera_frame":        LaunchConfiguration("camera_frame"),
            "result_image_topic":  "/yolo_result_image",
            "depth_min_mm":        100,
            "depth_max_mm":        2000,
            # 手眼标定后的位置微调偏移（单位：米）
            "x_offset": 0.0,
            "y_offset": 0.0,
            "z_offset": 0.0,
        }]
    )

    # ── 抓取服务节点（与 aruco_grab.launch.py 保持一致）──────────────────────
    grab_service_node = Node(
        package="grab_demo",
        executable="grab_service_node",
        name="object_grab_node",
        output="screen",
    )

    return LaunchDescription([
        model_path_arg,
        confidence_arg,
        target_classes_arg,
        rgb_topic_arg,
        depth_topic_arg,
        camera_info_topic_arg,
        camera_frame_arg,
        yolo_node,
        grab_service_node,
    ])
