# lebai_tutorials

LeBai ROS 2 SDK 入门教程包，包含 Python / C++ 示例，演示如何通过 `lebai_driver` 与 `lebai_interfaces` 完成关节订阅、IO 操作和基础运动控制。

## 示例列表

| 文件 | 语言 | 说明 |
| --- | --- | --- |
| `scripts/joint_state_subscriber.py` | Python | 订阅 `/joint_states`，打印当前关节角度 |
| `scripts/io_example.py` | Python | 调用 `io_service` 设置数字/模拟 IO |
| `scripts/move_example.py` | Python | 调用 `motion_service` 的 `MoveJoint` / `MoveLine` 服务 |
| `src/move_example.cc` | C++ | 同上运动示例的 C++ 版本 |

## 目录结构

```
lebai_tutorials/
├── scripts/             # Python 示例脚本
├── src/                 # C++ 示例
├── CMakeLists.txt
└── package.xml
```

## 依赖

- `rclpy`, `rclcpp`
- `lebai_interfaces`
- 运行时需要 `lebai_driver` 已经启动并连接到机器人（真机或仿真）。

## 编译

```bash
colcon build --packages-select lebai_tutorials
source install/setup.bash
```

## 运行

启动驱动后，运行任意示例：

```bash
ros2 run lebai_tutorials joint_state_subscriber.py
ros2 run lebai_tutorials io_example.py
ros2 run lebai_tutorials move_example.py
# C++ 版本
ros2 run lebai_tutorials move_example
```
