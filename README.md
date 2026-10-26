# Lebai LM3 · ROS 2 机械臂与视觉抓取

本仓库包含 **乐白（Lebai）LM3 机械臂** 的 ROS 2（Humble）工作空间源码目录，集成了官方 SDK、
机械臂运动学示例、多种视觉抓取方案以及 Gazebo 仿真场景。配合移动底盘（wheeltec），可实现
"移动 + 视觉识别 + 机械臂抓取" 的完整流程。

> 路径约定：下文功能包与调试笔记路径均相对 `src/`，明确标为根目录的文件除外。构建命令在仓库根目录执行。

## 获取仓库与首次准备

```bash
git clone --branch JetsonLebaiHumble https://github.com/heisd/lebai.git
cd lebai
source /opt/ros/humble/setup.bash
rosdep install --from-paths src --ignore-src -r -y
```

上述命令假设 ROS 2 Humble 与 rosdep 已配置。第三方机械臂 SDK、相机驱动、TensorRT 或模型服务可能还需要单独安装，不能只依赖通用 ROS 包解析。

本仓库根目录是 colcon 工作空间，功能包均位于 `src/`。源码目录原始总览见 [src/README.md](./src/README.md)。

## 目录结构

| 子目录 / 文件 | 说明 |
|--------------|------|
| `lebai-ros-sdk-humble-dev/` | 乐白官方 ROS 2 SDK：驱动、接口、URDF 模型、MoveIt 配置、示例教程 |
| `grab_demo/` | 视觉抓取核心包：HSV / YOLO / KCF / ArUco / VLM 多种识别方案与抓取服务 |
| `arm_demo/` | 机械臂运动学示例：正运动学（FK）/ 逆运动学（IK）演示 |
| `lebai_gazebo/` | LM3 机械臂的 Gazebo Classic 仿真场景与启动文件 |
| `DEBUG_README.md` | VSCode 下 ROS 2 节点（C++）的 gdb 调试指南 |
| `DEBUG_ABOUT_OBJECT_GRAB.md` | 颜色识别抓取相关问题（TF 树 / 可视化）的调试记录 |
| `VirtualMemory.md` | 编译时增加交换分区（虚拟内存）的方法，避免大包编译 OOM |
| `wheeltec_S300常用指令.txt` | wheeltec S300 移动底盘的常用命令速查 |
| `更新记录.txt` | 模型 / 功能更新记录 |

## 子包概览

### lebai-ros-sdk-humble-dev — 官方 SDK

乐白 LM3 机械臂的官方 ROS 2 SDK，包含以下子包：

| 子包 | 作用 |
|------|------|
| `lebai_driver` | 机械臂驱动 |
| `lebai_interfaces` | 自定义消息 / 服务接口 |
| `lebai_resources` | 公共材质 / 颜色 / 常量等 xacro 资源 |
| `lebai_lm3_support` | LM3 机械臂及夹爪的 URDF / xacro 模型 |
| `lebai_lm3_moveit_config` | MoveIt 运动规划配置（含 RViz、launch） |
| `lebai_tutorials` | C++ / Python 运动与 IO 示例 |

> 安装与使用文档：<https://lebai-robotics.github.io/lebai-ros-sdk/index.html>

### grab_demo — 视觉抓取

抓取功能的核心包，提供多种视觉识别方案，它们**共用同一套相机接口与抓取流程**
（统一通过 `target_frame` 的 TF 广播 → `grab_service_node` 执行抓取），可按需切换：

| 方案 | 节点 | 说明 | 指南 |
|------|------|------|------|
| HSV 颜色 | `hsv_range` | 按 HSV 阈值找最大色块，最轻量 | `HSV_GUIDE.md` |
| YOLO 检测 | `yolo_detect_node` | 基于 TensorRT 的 YOLOv8 目标检测 | `YOLO_GUIDE.md` |
| KCF 跟踪 | `kcf_track_node` | KCF 相关滤波跟踪，需初始框（可由 HSV 自动播种） | `KCF_GUIDE.md` |
| ArUco | `aruco_dectet` | ArUco 标记识别 | — |
| VLM 自然语言 | `vlm_grab_node.py` | 视觉语言模型，按一句自然语言选物抓取 | `VLM_GUIDE.md` |

其它关键节点 / 资源：

- `grab_service_node` — 抓取服务（订阅 `target_frame`，驱动机械臂抓取）
- `start_grab` — 抓取流程入口
- `hand_eye` / `charuco_dectet_node` — 手眼标定及 ChArUco 标定板识别（见 `point_cloud.md`、根目录 `serivce.md`）
- `camera_info_node` / `point_cloud_node` — 相机内参与点云处理
- `nav_grab` — 导航 + 抓取（移动底盘联动）
- `srv/GrabObject.srv` — 抓取服务接口
- `launch/` — 各方案的启动文件：`color_grab` / `yolo_grab` / `kcf_grab` / `aruco_grab` / `vlm_grab` / `hand_eye` / `start_grab`
- 调试参见 `DEBUG_GUIDE.md`

### arm_demo — 运动学示例

机械臂运动学最小示例：

- `fk_demo` — 正运动学演示（`launch/fk_demo.launch.py`）
- `ik_demo` — 逆运动学演示（`launch/ik_demo.launch.py`）

### lebai_gazebo — Gazebo 仿真

LM3 机械臂的 Gazebo Classic（11）仿真场景：地面 + 桌子 + 标准物体 + 机械臂，可在仿真中
运行抓取 / 视觉 / VLM 等功能。详见 `lebai_gazebo/GAZEBO_GUIDE.md`。

```bash
ros2 launch lebai_gazebo gazebo.launch.py        # 仿真场景
ros2 launch lebai_gazebo gazebo_grab.launch.py   # 仿真 + 抓取
```

## 环境要求

- **ROS 2 Humble**（Ubuntu 22.04）
- **OpenCV / cv_bridge**（视觉处理）
- YOLO 方案需 **TensorRT**；VLM 方案需可访问的视觉语言模型（OpenAI 兼容 / Anthropic）
- 仿真需 **Gazebo Classic 11** 及 `gazebo_ros2_control` 等插件（见 `GAZEBO_GUIDE.md`）

> 编译大包（如含 TensorRT / MoveIt）时若内存不足，请参考 `VirtualMemory.md` 增加交换分区。

## 编译

功能包位于 `src/`，从本仓库根目录执行：

```bash
colcon build              # 编译全部
source install/setup.bash

# 或只编译某个包
colcon build --packages-select grab_demo
```

## 快速开始

以颜色（HSV）抓取为例：

```bash
source install/setup.bash
ros2 launch grab_demo color_grab.launch.py
```

切换其它视觉方案时，改用对应 launch（`yolo_grab` / `kcf_grab` / `aruco_grab` / `vlm_grab`）即可，
抓取服务侧无需改动。各方案的参数、话题与注意事项见 `grab_demo/` 下对应的 `*_GUIDE.md`。

## 相关文档

- 视觉抓取调试：`grab_demo/DEBUG_GUIDE.md`、`DEBUG_ABOUT_OBJECT_GRAB.md`
- C++ 节点 gdb 调试：`src/DEBUG_README.md`
- 手眼标定 / 点云：`grab_demo/point_cloud.md`、根目录 `serivce.md`、`frame.md`
- 仿真：`lebai_gazebo/GAZEBO_GUIDE.md`

## 从仿真到实际抓取

1. 先按 [仿真指南](./src/lebai_gazebo/GAZEBO_GUIDE.md) 检查模型、关节和场景。
2. 再按 SDK 文档配置实际机器人连接，确认状态反馈。
3. 使用相机接口与标定文档核对内参、点云和 TF。
4. 从 [HSV 指南](./src/grab_demo/HSV_GUIDE.md) 的简单识别流程开始，确认目标坐标。
5. 最后切换 YOLO、KCF 或 VLM；这些方案共用抓取服务，但额外依赖不同。

## 专题入口

| 内容 | 文档 |
| --- | --- |
| HSV 识别 | [HSV_GUIDE.md](./src/grab_demo/HSV_GUIDE.md) |
| KCF 跟踪 | [KCF_GUIDE.md](./src/grab_demo/KCF_GUIDE.md) |
| YOLO | [YOLO_GUIDE.md](./src/grab_demo/YOLO_GUIDE.md) |
| VLM | [VLM_GUIDE.md](./src/grab_demo/VLM_GUIDE.md) |
| 视觉抓取调试 | [DEBUG_GUIDE.md](./src/grab_demo/DEBUG_GUIDE.md) |
| 点云与标定 | [point_cloud.md](./src/grab_demo/point_cloud.md) |
| C++ 调试 | [DEBUG_README.md](./src/DEBUG_README.md) |

## 排障路线

```bash
ros2 node list
ros2 topic list -t
ros2 service list -t
ros2 action list -t
```

有相机画面不等于目标坐标有效：需要继续核对图像时间、深度、相机内参和从相机到机械臂基座的 TF。识别正常但不执行时，再检查抓取服务与机械臂驱动；模型加载失败则单独检查推理库、权重和设备环境。

实机与仿真的网络、控制器和启动参数应分别核对。根目录 `serivce.md` 保留原拼写，查找时不要误写成另一个不存在的文件名。
