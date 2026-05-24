# lebai_interfaces

LeBai 机械臂的 ROS 2 接口定义包，集中维护 `lebai_driver` 与上层应用交互所需的 **消息 (msg)** 与 **服务 (srv)**。

## 消息 (msg)

| 名称 | 说明 |
| --- | --- |
| `RobotStatus.msg` | 机器人整体状态（模式、错误码等） |
| `RobotMode.msg` | 机器人模式枚举 |
| `IOStatus.msg` | 数字 / 模拟 IO 状态 |
| `IOConditionalExpress.msg` | IO 条件表达式（用于等待 IO 触发） |
| `GripperStatus.msg` | 夹爪状态 |
| `DeviceInfo.msg` | 设备信息 |
| `DebugLevel.msg` | 调试日志级别 |
| `MoveCommon.msg` | 运动指令公共字段（速度 / 加速度 / 半径等） |
| `TrajectoryMoveJoint.msg` | 关节空间轨迹点 |
| `TrajectoryMoveLine.msg` | 直线轨迹点 |
| `TrajectoryMoveCircle.msg` | 圆弧轨迹点 |
| `ServiceReturnCode.msg` | 服务返回码 |
| `TriState.msg` | 三态值 |
| `UntilInfo.msg` | "运动直到 IO 触发" 的辅助信息 |

## 服务 (srv)

| 名称 | 说明 |
| --- | --- |
| `MoveJoint.srv` | 关节空间运动 |
| `MoveLine.srv` | 笛卡尔直线运动 |
| `MoveCircle.srv` | 笛卡尔圆弧运动 |
| `SetDO.srv` | 设置数字输出 |
| `SetAO.srv` | 设置模拟输出 |
| `SetAMode.srv` | 设置模拟通道模式 |
| `SetGripper.srv` | 控制夹爪 |

## 目录结构

```
lebai_interfaces/
├── msg/                # 消息定义
├── srv/                # 服务定义
├── CMakeLists.txt
└── package.xml
```

## 依赖

- `geometry_msgs`
- `std_msgs`
- `trajectory_msgs`
- `rosidl_default_generators`（构建期）

## 编译

```bash
colcon build --packages-select lebai_interfaces
source install/setup.bash
```

## 在其他包中使用

`package.xml`：

```xml
<depend>lebai_interfaces</depend>
```

C++：

```cpp
#include "lebai_interfaces/msg/robot_status.hpp"
#include "lebai_interfaces/srv/move_joint.hpp"
```

Python：

```python
from lebai_interfaces.msg import RobotStatus
from lebai_interfaces.srv import MoveJoint
```
