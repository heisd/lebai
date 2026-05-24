# lebai_lm3_moveit_config

LeBai LM3 系列机械臂的 MoveIt 2 运动规划配置包，包含 SRDF、关节限制、运动学求解器、控制器接口以及 OMPL / CHOMP 规划器配置，可直接用于 `move_group` 和 RViz 演示。

## 支持机型

- LM3（标准 6 轴）
- LM3-L1（带导轨的 7 自由度版本）

## 目录结构

```
lebai_lm3_moveit_config/
├── config/
│   ├── lebai_lm3.srdf            # LM3 SRDF
│   ├── lebai_lm3_l1.srdf         # LM3-L1 SRDF
│   ├── joint_limits.yaml         # 关节速度/加速度限制
│   ├── cartesian_limits.yaml     # 笛卡尔限制
│   ├── kinematics.yaml           # IK 求解器配置（KDL）
│   ├── ompl_planning.yaml        # OMPL 规划器配置
│   ├── chomp_planning.yaml       # CHOMP 规划器配置
│   ├── fake_controllers.yaml     # 仿真控制器
│   ├── ros_controllers.yaml      # 实机控制器
│   ├── lm3_controllers.yaml      # MoveIt 控制器接口
│   └── sensors_3d.yaml           # 3D 传感器配置（可选）
├── launch/
│   ├── demo.launch.py            # 启动 move_group + RViz 演示
│   ├── lm3.launch.py             # LM3 启动入口
│   ├── lm3_l1.launch.py          # LM3-L1 启动入口
│   ├── rviz.launch.py            # 仅启动 RViz
│   ├── moveit.rviz               # RViz 配置
│   └── moveit_empty.rviz         # 空白 RViz 配置
├── CMakeLists.txt
└── package.xml
```

## 依赖

- `lebai_lm3_support`（URDF / mesh）
- `robot_state_publisher`
- `joint_state_publisher` / `joint_state_publisher_gui`
- `xacro`
- `backward_ros`

## 编译

```bash
colcon build --packages-select lebai_lm3_moveit_config
source install/setup.bash
```

## 运行

仿真 + RViz 演示（推荐快速验证规划器）：

```bash
ros2 launch lebai_lm3_moveit_config demo.launch.py
```

启动 LM3 / LM3-L1：

```bash
ros2 launch lebai_lm3_moveit_config lm3.launch.py
ros2 launch lebai_lm3_moveit_config lm3_l1.launch.py
```

仅打开 RViz（配合已运行的 `move_group`）：

```bash
ros2 launch lebai_lm3_moveit_config rviz.launch.py
```
