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
    # sim:=true 跑 Gazebo 仿真; sim:=false(默认) 跑真机。机器人/相机/MoveIt 由 robot_bringup 切换。
    sim = LaunchConfiguration('sim')
    robot_ip = LaunchConfiguration('robot_ip')
    # 仿真用仿真相机内参, 真机用 camera_info_node 的 /gemini_info
    camera_info_topic = PythonExpression(
        ["'/camera_arm/color/camera_info' if '", sim, "' in ('true','True','1') else '/gemini_info'"])

    robot_description_semantic = {
        "robot_description_semantic": load_file("lebai_lm3_moveit_config", "config/lebai_lm3.srdf")
    }

    bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('grab_demo'), 'launch', 'robot_bringup.launch.py')),
        launch_arguments={'sim': sim, 'robot_ip': robot_ip}.items())

    # 颜色识别节点(HSV)
    color_dectet = Node(
        package="grab_demo", executable="hsv_range", name="color_node",
        parameters=[{"camera_info_topic": camera_info_topic, "use_sim_time": sim}])

    # 抓取服务
    grab_service = Node(
        package="grab_demo", executable="grab_service_node", name="grab_service_n",
        parameters=[robot_description_semantic, {"use_sim_time": sim}])
    delay_task = TimerAction(period=15.0, actions=[grab_service])

    return LaunchDescription([
        DeclareLaunchArgument('sim', default_value='false', description='true=Gazebo仿真, false=真机'),
        DeclareLaunchArgument('robot_ip', default_value='192.168.0.50'),
        bringup,
        color_dectet,
        delay_task,
    ])
