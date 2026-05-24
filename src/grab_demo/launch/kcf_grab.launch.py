"""
kcf_grab.launch.py
启动 KCF/CSRT/MOSSE 跟踪节点 + 抓取服务节点

用法:
  ros2 launch grab_demo kcf_grab.launch.py
  ros2 launch grab_demo kcf_grab.launch.py tracker_type:=CSRT show_window:=true

启动后初始化跟踪有两种方式：

  1) 在 "KCF Tracker" 窗口里按 's' 用鼠标拖一个框，回车确认。

  2) 程序化（推荐和 YOLO 配合）：
     ros2 service call /kcf_tracker_node/init grab_demo/srv/InitTracker \
       "{x: 320, y: 200, width: 100, height: 100, label: 'cup'}"

跟踪开始后，grab_service_node 用 obj_link='kcf_track'
（或 'kcf_<label>'）即可让机械臂去抓取被跟踪物体。
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    tracker_type_arg = DeclareLaunchArgument(
        "tracker_type", default_value="KCF",
        description="跟踪器类型: KCF（快） / CSRT（稳） / MOSSE（最快）"
    )
    show_window_arg = DeclareLaunchArgument(
        "show_window", default_value="true",
        description="是否弹出 OpenCV 窗口（支持按 s 框选、r 重置）"
    )
    rgb_topic_arg = DeclareLaunchArgument(
        "rgb_topic", default_value="/camera_arm/color/image_raw")
    depth_topic_arg = DeclareLaunchArgument(
        "depth_topic", default_value="/camera_arm/depth/image_raw")
    camera_info_topic_arg = DeclareLaunchArgument(
        "camera_info_topic", default_value="/gemini_info")
    camera_frame_arg = DeclareLaunchArgument(
        "camera_frame", default_value="camera_color_optical_frame")

    kcf_node = Node(
        package="grab_demo",
        executable="kcf_tracker_node",
        name="kcf_tracker_node",
        output="screen",
        parameters=[{
            "tracker_type":      LaunchConfiguration("tracker_type"),
            "show_window":       LaunchConfiguration("show_window"),
            "rgb_topic":         LaunchConfiguration("rgb_topic"),
            "depth_topic":       LaunchConfiguration("depth_topic"),
            "camera_info_topic": LaunchConfiguration("camera_info_topic"),
            "camera_frame":      LaunchConfiguration("camera_frame"),
            "result_image_topic":"/kcf_result_image",
            "depth_min_mm":      100,
            "depth_max_mm":      2000,
            "x_offset":          0.0,
            "y_offset":          0.0,
            "z_offset":          0.0,
            "max_lost_frames":   30,
        }]
    )

    grab_service_node = Node(
        package="grab_demo",
        executable="grab_service_node",
        name="object_grab_node",
        output="screen",
    )

    return LaunchDescription([
        tracker_type_arg,
        show_window_arg,
        rgb_topic_arg,
        depth_topic_arg,
        camera_info_topic_arg,
        camera_frame_arg,
        kcf_node,
        grab_service_node,
    ])
