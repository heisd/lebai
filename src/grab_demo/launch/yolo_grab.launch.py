import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def load_file(package_name, file_path):
    try:
        with open(os.path.join(get_package_share_directory(package_name), file_path)) as f:
            return f.read()
    except EnvironmentError:
        return None


def generate_launch_description():
    # sim:=true 跑 Gazebo 仿真; sim:=false(默认) 跑真机。
    sim = LaunchConfiguration('sim')
    robot_ip = LaunchConfiguration('robot_ip')
    camera_info_topic = PythonExpression(
        ["'/camera_arm/color/camera_info' if '", sim, "' in ('true','True','1') else '/gemini_info'"])

    robot_description_semantic = {
        "robot_description_semantic": load_file("lebai_lm3_moveit_config", "config/lebai_lm3.srdf")
    }

    model_dir = os.path.expanduser('~/models')
    onnx_path = os.path.join(model_dir, 'yolov8n.onnx')
    engine_path = os.path.join(model_dir, 'yolov8n.engine')

    bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('grab_demo'), 'launch', 'robot_bringup.launch.py')),
        launch_arguments={'sim': sim, 'robot_ip': robot_ip}.items())

    yolo_detect = Node(
        package="grab_demo", executable="yolo_detect_node", name="yolo_node",
        parameters=[{
            "engine_path": engine_path,
            "onnx_path": onnx_path,
            "camera_info_topic": camera_info_topic,
            "camera_frame": "camera_arm_depth_optical_frame",
            "target_frame": "target_frame",
            "target_class": -1,
            # 多物体选择策略: confidence / nearest / center / largest
            "select_mode": "confidence",
            "conf_threshold": 0.25,
            "nms_threshold": 0.45,
            "z_offset": 0.07,
            "show_image": False,
            "publish_debug_image": True,
            "use_sim_time": sim,
        }])

    grab_service = Node(
        package="grab_demo", executable="grab_service_node", name="grab_service_n",
        parameters=[robot_description_semantic, {"use_sim_time": sim}])
    delay_task = TimerAction(period=15.0, actions=[grab_service])

    return LaunchDescription([
        DeclareLaunchArgument('sim', default_value='false', description='true=Gazebo仿真, false=真机'),
        DeclareLaunchArgument('robot_ip', default_value='192.168.0.50'),
        bringup,
        yolo_detect,
        delay_task,
    ])
