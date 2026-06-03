import os
import yaml
import xacro
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import (
    PythonLaunchDescriptionSource, AnyLaunchDescriptionSource)
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


# =============================================================================
# robot_bringup.launch.py
#
# 统一的"机器人 + 相机 + MoveIt"启动, 用 sim 参数在【真机】和【Gazebo 仿真】间切换:
#   sim:=false (默认)  真机: astra 相机 + camera_info_node + lm3.launch.py(robot_interface+MoveIt)
#   sim:=true          仿真: lebai_gazebo/gazebo.launch.py(Gazebo+臂+相机+控制器)
#                            + move_group(仿真参数, use_sim_time) + world->base_link 静态TF
#
# 各抓取 launch(color/yolo/kcf/vlm) 都 include 本文件并透传 sim, 自身只加视觉节点 + 抓取服务。
# =============================================================================


def _load_file(pkg, rel):
    try:
        with open(os.path.join(get_package_share_directory(pkg), rel)) as f:
            return f.read()
    except EnvironmentError:
        return None


def _load_yaml(pkg, rel):
    try:
        with open(os.path.join(get_package_share_directory(pkg), rel)) as f:
            return yaml.safe_load(f)
    except EnvironmentError:
        return None


def _real_bringup(robot_ip):
    """真机: 相机 + 内参 + lm3(驱动+MoveIt)。与原 *_grab.launch.py 行为一致。"""
    actions = []
    astra_dir = os.path.join(get_package_share_directory('astra_camera'), 'launch')
    xml = os.path.join(astra_dir, 'gemini_arm.launch.xml')
    py = os.path.join(astra_dir, 'gemini_arm.launch.py')
    if os.path.exists(xml):
        actions.append(IncludeLaunchDescription(AnyLaunchDescriptionSource(xml)))
    elif os.path.exists(py):
        actions.append(IncludeLaunchDescription(PythonLaunchDescriptionSource(py)))
    else:
        actions.append(IncludeLaunchDescription(PythonLaunchDescriptionSource(
            os.path.join(astra_dir, 'gemini.launch.py'))))

    actions.append(Node(package='grab_demo', executable='camera_info_node', name='camera_info'))

    actions.append(IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('lebai_lm3_moveit_config'), 'launch', 'lm3.launch.py')),
        launch_arguments={'robot_ip': robot_ip}.items()))
    return actions


def _sim_bringup():
    """仿真: Gazebo + move_group(sim) + world->base_link。"""
    sim_time = {'use_sim_time': True}
    gz_pkg = get_package_share_directory('lebai_gazebo')
    actions = [IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gz_pkg, 'launch', 'gazebo.launch.py')))]

    robot_description = {'robot_description': xacro.process_file(
        os.path.join(gz_pkg, 'urdf', 'lm3_gazebo.xacro')).toxml()}
    semantic = {'robot_description_semantic':
                _load_file('lebai_lm3_moveit_config', 'config/lebai_lm3.srdf')}
    kinematics = _load_yaml('lebai_lm3_moveit_config', 'config/kinematics.yaml')
    ompl = {'move_group': {
        'planning_plugin': 'ompl_interface/OMPLPlanner',
        'request_adapters': 'default_planner_request_adapters/AddTimeOptimalParameterization '
                            'default_planner_request_adapters/ResolveConstraintFrames '
                            'default_planner_request_adapters/FixWorkspaceBounds '
                            'default_planner_request_adapters/FixStartStateBounds '
                            'default_planner_request_adapters/FixStartStateCollision '
                            'default_planner_request_adapters/FixStartStatePathConstraints',
        'start_state_max_bounds_error': 0.1}}
    oy = _load_yaml('lebai_lm3_moveit_config', 'config/ompl_planning.yaml')
    if oy:
        ompl['move_group'].update(oy)
    controllers = {
        'moveit_simple_controller_manager':
            _load_yaml('lebai_lm3_moveit_config', 'config/lm3_controllers.yaml'),
        'moveit_controller_manager':
            'moveit_simple_controller_manager/MoveItSimpleControllerManager'}
    traj = {'moveit_manage_controllers': True,
            'trajectory_execution.allowed_execution_duration_scaling': 3.0,
            'trajectory_execution.allowed_goal_duration_margin': 2.0,
            'trajectory_execution.allowed_start_tolerance': 0.01}
    psm = {'publish_planning_scene': True, 'publish_geometry_updates': True,
           'publish_state_updates': True, 'publish_transforms_updates': True}

    actions.append(Node(
        package='moveit_ros_move_group', executable='move_group', output='screen',
        parameters=[robot_description, semantic, kinematics, ompl, traj, controllers, psm, sim_time]))
    actions.append(Node(
        package='tf2_ros', executable='static_transform_publisher', output='log',
        arguments=['0', '0', '0', '0', '0', '0', 'world', 'base_link'],
        parameters=[sim_time]))
    return actions


def launch_setup(context, *args, **kwargs):
    sim = LaunchConfiguration('sim').perform(context).lower() in ('true', '1', 'yes')
    robot_ip = LaunchConfiguration('robot_ip').perform(context)
    return _sim_bringup() if sim else _real_bringup(robot_ip)


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('sim', default_value='false',
                              description='true=Gazebo 仿真; false=真机'),
        DeclareLaunchArgument('robot_ip', default_value='192.168.0.50',
                              description='真机模式下的机器人 IP'),
        OpaqueFunction(function=launch_setup),
    ])
