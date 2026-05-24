# arm_demo

LeBai LM3 机械臂运动学演示包，提供基于 MoveIt 2 的正运动学 (FK) 和逆运动学 (IK) 示例。

## 功能概览

- **fk_demo**：读取关节角度，使用 MoveIt RobotState 计算末端执行器在基坐标系下的位姿。
- **ik_demo**：给定目标位姿，调用 IK 求解器得到对应的关节角度。

## 目录结构

```
arm_demo/
├── src/
│   ├── fk_demo.cpp        # 正运动学示例节点
│   └── ik_demo.cpp        # 逆运动学示例节点
├── launch/
│   ├── fk_demo.launch.py  # 启动 FK 演示
│   └── ik_demo.launch.py  # 启动 IK 演示
├── CMakeLists.txt
└── package.xml
```

## 依赖

- `rclcpp`
- `moveit_ros_planning_interface`（由 `lebai_lm3_moveit_config` 提供配置）

## 编译

在工作空间根目录执行：

```bash
colcon build --packages-select arm_demo
source install/setup.bash
```

## 运行

启动正运动学演示：

```bash
ros2 launch arm_demo fk_demo.launch.py
```

启动逆运动学演示：

```bash
ros2 launch arm_demo ik_demo.launch.py
```

> 运行前请确保已启动 `lebai_lm3_moveit_config` 提供的 move_group，或者已经加载机械臂的 URDF/SRDF。
