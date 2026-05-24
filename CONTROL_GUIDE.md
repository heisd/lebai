# 乐白机械臂 ROS 2 Humble 控制说明

本文档说明本仓库里的 **ROS 2 Humble** 工程是如何控制 **乐白 LM3 / LM3-L1 协作机械臂** 的。
重点回答四个问题：

1. 控制链路是怎么搭起来的？（从 ROS 节点 → 机械臂硬件）
2. 我可以通过哪些 ROS 接口（话题 / 服务 / Action）下发指令？
3. 启动顺序是什么？
4. 想加自己的逻辑时，应该接到哪一层？

> 配套阅读：`ARCHITECTURE.md` 是整体架构与模块清单，本文档专门讲**"指令是怎么走到关节上"**这条主线。

---

## 1. 控制链路总览

```
   你的应用 / MoveIt / RViz
            │
            │  ① ROS 2 接口（Topic / Service / Action）
            ▼
   ┌─────────────────────────────────────────────┐
   │           lebai_driver (Python)             │
   │  4 个节点：                                  │
   │   • robot_state       状态上行              │
   │   • motion            运动下行 + 轨迹执行   │
   │   • io_service        IO / 夹爪             │
   │   • system_service    使能 / 急停 / 示教    │
   └─────────────────────────────────────────────┘
            │
            │  ② Python `lebai` SDK（TCP/IP，默认 192.168.0.50）
            ▼
   ┌─────────────────────────────────────────────┐
   │     乐白控制柜 (Robot Controller)            │
   │     执行底层伺服、轨迹插补、安全控制         │
   └─────────────────────────────────────────────┘
            │
            ▼
        关节伺服 + 末端夹爪
```

**关键点**：本工程**不直接发 EtherCAT / CAN 给电机**。所有对机械臂的控制最终都是通过 Python `lebai` SDK 走 **TCP/IP** 连接到机器人**控制柜**，由控制柜负责真正的伺服。所以 ROS 这边干的事是：

- 把 ROS 世界的指令（Action goal、Service 请求）翻译成 `lebai` SDK 的调用；
- 把控制柜上报的状态回填到 `/joint_states`、`/robot_status` 等话题。

---

## 2. 驱动层四个节点干了什么

代码位置：`src/lebai-ros-sdk-humble-dev/lebai_driver/lebai_driver/`

入口在 `setup.py`：

```
robot_state     = lebai_driver.robot_state.robot_state_node:main
io_service      = lebai_driver.io_service.io_service_node:main
system_service  = lebai_driver.system_service.system_service_node:main
motion          = lebai_driver.motion.motion_node:main
```

### 2.1 `robot_state` — 状态上行（只读）

文件：`robot_state/robot_state_interface.py`

进程启动后会创建 4 个 handler，定时从 `LebaiRobot` SDK 读状态并发布：

| Handler | 发布话题 | 消息类型 |
|---|---|---|
| `JointStateHandler` | `/joint_states` | `sensor_msgs/JointState` |
| `RobotStateHandler` | `/robot_status` | `lebai_interfaces/RobotStatus` |
| `IOStateHandler` | `/io_status` | `lebai_interfaces/IOStatus` |
| `GripperStateHandler`（`has_gripper:=true` 时启用） | `/gripper_status` | `lebai_interfaces/GripperStatus` |

**MoveIt、RViz、TF 都依赖 `/joint_states`**，所以这个节点必须先起来。

### 2.2 `motion` — 运动下行 + 轨迹执行

文件：`motion/motion_node.py` 同时启动两个 ROS 节点：

- `MotionServiceInterface`（`motion/motion_service_interface.py`）
  内部挂一个 `TPTrajectoryHandler`，提供**两个点到点服务**：
  - `/motion_service/move_joint`（`lebai_interfaces/srv/MoveJoint`）— 关节空间运动
  - `/motion_service/move_line`（`lebai_interfaces/srv/MoveLine`）— 笛卡尔直线运动

- `TrajectoryActionServer`（`motion/trajectory_action_server.py`）
  提供一个 **`FollowJointTrajectory` Action 服务**：
  - 默认名称 `/lebai_trajectory_controller/follow_joint_trajectory`
  - 这是 **MoveIt 走的入口**——MoveIt 规划出 `JointTrajectory` 后，按 ROS 标准动作接口下发到这里
  - Action 服务内部把轨迹点拆成 PVAT (位置/速度/加速度/时间) 帧，调用 `LebaiRobot.move_pvat(...)` 流式发给控制柜

### 2.3 `io_service` — IO 与夹爪控制

文件：`io_service/io_service_interface.py`

提供的服务（节点名作为前缀，默认 `/io_service/...`）：

| 服务 | 类型 | 作用 |
|---|---|---|
| `set_robot_do` / `set_extend_do` / `set_flange_do` | `SetDO` | 数字输出（本体 / 扩展 IO / 法兰） |
| `set_robot_ao` / `set_extend_ao` | `SetAO` | 模拟输出 |
| `set_robot_ao_mode` / `set_robot_ai_mode` | `SetAMode` | 模拟 IO 模式 |
| `set_gripper_position` | `SetGripper` | 夹爪位置（需 `has_gripper:=true`） |
| `set_gripper_force` | `SetGripper` | 夹爪力 |

### 2.4 `system_service` — 系统级命令

文件：`system_service/system_service_interface.py`，全部使用 `std_srvs/Empty`：

```
/system_service/power_on        /system_service/power_off
/system_service/enable          /system_service/disable
/system_service/emergency_stop  /system_service/turn_off_robot
/system_service/pause_motion    /system_service/resume_motion
/system_service/abort_motion
/system_service/entry_teach_mode /system_service/exit_teach_mode
```

**典型上电顺序**：`power_on` → `enable` → （任意运动指令）。
出现急停后需要 `power_on` + `enable` 复位才能继续。

---

## 3. 启动顺序

### 3.1 只启动驱动（裸控制，不要 MoveIt）

```bash
ros2 launch lebai_driver robot_interface.launch.py \
    robot_ip:=192.168.0.50 \
    has_gripper:=false
```

`launch/robot_interface.launch.py` 会一次性把 `robot_state` / `io_service` / `system_service` / `motion` 四个节点全拉起来。**参数**：
- `robot_ip`：控制柜 IP（默认 `192.168.0.50`）
- `has_gripper`：是否挂夹爪（默认 `false`）

> 关节名称在 `lebai_driver/config/joint_names_lm3.yaml` 配置，节点通过参数 `controller_joint_names` 读取，必须与 URDF 中关节名一致，否则 `MotionServiceInterface` / `TrajectoryActionServer` 会报 `controller_joint_names is not assigned!` 并退出。

### 3.2 加上 MoveIt（运动规划 + RViz 拖拽）

```bash
# 终端 A：驱动
ros2 launch lebai_driver robot_interface.launch.py robot_ip:=192.168.0.50

# 终端 B：MoveIt + RViz
ros2 launch lebai_lm3_moveit_config demo.launch.py
```

之后在 RViz 里拖动末端，点 **Plan & Execute**，轨迹会通过 `FollowJointTrajectory` action 走到 `motion` 节点，再下发到控制柜。

### 3.3 跑示例

```bash
ros2 launch arm_demo  fk_demo.launch.py         # 正运动学
ros2 launch arm_demo  ik_demo.launch.py         # 逆运动学
ros2 launch grab_demo start_grab.launch.py      # 视觉抓取
ros2 launch grab_demo hand_eye.launch.py        # 手眼标定
```

---

## 4. 三种"下指令"的方式（按抽象层从高到低）

### 方式 A：MoveIt 规划（推荐用于复杂运动）

适合：避障、笛卡尔路径、需要碰撞检查的场景。
路径：`你的代码 → MoveGroupInterface → MoveIt 规划 → FollowJointTrajectory action → motion 节点 → 控制柜`。
参考：`src/arm_demo/src/ik_demo.cpp`、`src/grab_demo/src/grab_service_node.cpp`。

### 方式 B：直接调 `/motion_service/move_joint` 或 `/motion_service/move_line`

适合：已知目标点位、不需要规划、追求简单。
**会绕过 MoveIt 的碰撞检查**，由控制柜自己做插补：

```bash
# 关节空间运动到指定 6 个角度（rad）
ros2 service call /motion_service/move_joint lebai_interfaces/srv/MoveJoint \
  "{joint_positions: [0,0,0,0,0,0], velocity: 1.0, acceleration: 1.0, time: 0.0, radius: 0.0}"
```

### 方式 C：直接发 `FollowJointTrajectory` Action

适合：自己生成轨迹（比如外部规划器、示教回放）。
直接对 `/lebai_trajectory_controller/follow_joint_trajectory` 发 goal 即可，这条路径也是 MoveIt 内部走的。

---

## 5. 状态如何回到 ROS

启动 `robot_state` 节点后，可以直接看：

```bash
ros2 topic echo /joint_states          # 6 个关节实时角度
ros2 topic echo /robot_status          # 运行状态、错误码、模式等
ros2 topic echo /io_status             # 数字/模拟 IO
ros2 topic echo /gripper_status        # 夹爪（has_gripper:=true）
```

`/joint_states` 同时也是 `robot_state_publisher` 计算 TF 树的输入，所以 RViz 里看到的机械臂姿态就是从这里来的。

---

## 6. 加自己的逻辑时该接哪一层？

| 需求 | 接入位置 | 例子 |
|---|---|---|
| 写一个上层任务（视觉→抓取→放置） | **应用层**，调用 MoveIt + `io_service` 的夹爪服务 | `grab_demo/src/grab_service_node.cpp` |
| 想要新的运动原语（如圆弧、伺服跟随） | 在 `lebai_driver/motion/` 加新 service，再在 `lebai_interfaces` 加 srv | 仿照 `tp_trajectory_handler.py` |
| 接新的传感器 / 末端工具 | 新建 ROS 包，通过现有的 IO / 夹爪服务驱动 | `grab_demo` 整个包 |
| 需要直接发 PVAT 流给控制柜 | 直接用 Python `lebai` SDK 的 `LebaiRobot.move_pvat(...)` | `trajectory_action_server.py` 里有现成调用 |

---

## 7. 常见坑

1. **IP 不通**：`LebaiRobot(self.robot_ip_, False)` 在构造时就会去连控制柜，如果 IP 错或网络不通，节点起来就会卡死或抛异常。先 `ping 192.168.0.50` 再启动。
2. **没使能**：上电后不调用 `/system_service/enable`，运动指令会被控制柜拒收，但 ROS 这边的 service / action 返回看起来是成功的，很容易误判。
3. **关节名不一致**：URDF、`controller_joint_names`、MoveIt 的 SRDF 三处的关节名必须一致，否则 MoveIt 的轨迹下发到 `TrajectoryActionServer` 时会因名字对不上被丢弃。
4. **`has_gripper` 参数**：只有传 `has_gripper:=true` 时，`GripperStateHandler` 和夹爪相关 service 才会启用。

---

## 8. 文件速查表

| 想看 / 改什么 | 去哪 |
|---|---|
| 总启动 launch | `src/lebai-ros-sdk-humble-dev/lebai_driver/launch/robot_interface.launch.py` |
| 关节名配置 | `src/lebai-ros-sdk-humble-dev/lebai_driver/config/joint_names_lm3.yaml` |
| 点到点运动 service 实现 | `lebai_driver/motion/tp_trajectory_handler.py` |
| MoveIt 走的 action 实现 | `lebai_driver/motion/trajectory_action_server.py` |
| 状态发布 | `lebai_driver/robot_state/*_handler.py` |
| IO / 夹爪 service | `lebai_driver/io_service/io_service_interface.py` |
| 使能 / 急停 / 示教 | `lebai_driver/system_service/system_service_interface.py` |
| 自定义消息 / 服务定义 | `src/lebai-ros-sdk-humble-dev/lebai_interfaces/{msg,srv}/` |
| URDF / mesh | `src/lebai-ros-sdk-humble-dev/lebai_lm3_support/` |
| MoveIt 配置 | `src/lebai-ros-sdk-humble-dev/lebai_lm3_moveit_config/` |
