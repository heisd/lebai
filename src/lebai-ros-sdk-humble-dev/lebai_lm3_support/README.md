# lebai_lm3_support

LeBai LM3 系列机械臂的描述包，提供 URDF / xacro、网格模型、RViz 配置以及独立显示 / 接入真机的 launch 文件。该包是 `lebai_lm3_moveit_config`、`arm_demo` 等其他包的基础。

## 支持的模型

- LM3（标准 6 轴）
- LM3-L1（7 自由度版本）
- LM3 + 夹爪
- LM3-L1 + 夹爪
- 双 LM3（多臂场景）

## 目录结构

```
lebai_lm3_support/
├── urdf/
│   ├── lm3.urdf                       # 烘焙好的 LM3 URDF
│   ├── lm3.xacro / lm3_macro.xacro    # LM3 xacro 宏
│   ├── lm3_l1.xacro / lm3_l1_macro.xacro
│   ├── gripper.xacro / gripper_macro.xacro
│   ├── lm3_with_gripper.xacro
│   ├── lm3_l1_with_gripper.xacro
│   └── two_lm3.xacro                  # 双臂示例
├── meshes/                            # 视觉 / 碰撞网格
├── config/                            # 控制器、关节配置
├── rviz/                              # RViz 显示配置
├── launch/
│   ├── display_lm3.launch.py
│   ├── display_lm3_l1.launch.py
│   ├── display_lm3_with_gripper.launch.py
│   ├── display_lm3_l1_with_gripper.launch.py
│   ├── standalone_lm3.launch.py
│   ├── robot_interface_lm3.launch.py
│   └── robot_interface_lm3_l1.launch.py
├── CMakeLists.txt
└── package.xml
```

## 依赖

- `lebai_resources`（共享 xacro 常量 / 材质）
- `robot_state_publisher`
- `joint_state_publisher` / `joint_state_publisher_gui`
- `xacro`
- `rviz2`

## 编译

```bash
colcon build --packages-select lebai_lm3_support
source install/setup.bash
```

## 运行

仅显示模型（RViz + joint state slider）：

```bash
ros2 launch lebai_lm3_support display_lm3.launch.py
ros2 launch lebai_lm3_support display_lm3_l1.launch.py
ros2 launch lebai_lm3_support display_lm3_with_gripper.launch.py
ros2 launch lebai_lm3_support display_lm3_l1_with_gripper.launch.py
```

连接真机 / 驱动：

```bash
ros2 launch lebai_lm3_support robot_interface_lm3.launch.py
ros2 launch lebai_lm3_support robot_interface_lm3_l1.launch.py
```

独立运行（不依赖外部驱动）：

```bash
ros2 launch lebai_lm3_support standalone_lm3.launch.py
```
