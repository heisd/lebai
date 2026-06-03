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

    bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('grab_demo'), 'launch', 'robot_bringup.launch.py')),
        launch_arguments={'sim': sim, 'robot_ip': robot_ip}.items())

    vlm_node = Node(
        package="grab_demo", executable="vlm_grab_node.py", name="vlm_node", output="screen",
        parameters=[{
            "camera_info_topic": camera_info_topic,
            "camera_frame": "camera_arm_depth_optical_frame",
            "target_frame": "target_frame",
            "z_offset": 0.07,
            # VLM 接口: openai(兼容本地/云) 或 anthropic
            "provider": "openai",
            "api_base": "https://api.openai.com/v1",
            "model": "gpt-4o-mini",
            "auto_grab": True,
            "require_confirm": True,
            "min_dist": 0.1,
            "max_dist": 1.5,
            "max_instruction_len": 200,
            "force_json": True,
            "grab_service": "/obj_grab_service",
            "instruction_topic": "/vlm/instruction",
            "result_topic": "/vlm/result",
            "confirm_topic": "/vlm/confirm",
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
        vlm_node,
        delay_task,
    ])
