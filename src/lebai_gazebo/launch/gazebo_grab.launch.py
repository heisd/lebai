import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # Gazebo 端到端抓取 = 抓取 launch 的仿真模式(sim:=true)。
    # 等价于: ros2 launch grab_demo color_grab.launch.py sim:=true
    # (Gazebo 场景 + 机械臂 + 相机 + MoveIt(仿真) + HSV 视觉 + 抓取服务, 全部 use_sim_time)
    # 想用别的算法在仿真里跑, 直接:
    #   ros2 launch grab_demo yolo_grab.launch.py sim:=true
    #   ros2 launch grab_demo vlm_grab.launch.py  sim:=true   等
    color_grab = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('grab_demo'), 'launch', 'color_grab.launch.py')),
        launch_arguments={'sim': 'true'}.items())

    return LaunchDescription([color_grab])
