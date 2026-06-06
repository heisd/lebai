# lebai 工作空间（src）

本目录是 **乐白（Lebai）LM3 六轴机械臂** 的 ROS 2（Humble）colcon 工作空间源码目录。
它集成了乐白官方 ROS 2 SDK、机械臂运动学示例、**五种可互换的视觉抓取方案**，以及 Gazebo
仿真场景。配合 wheeltec 移动底盘，可实现 "移动 + 视觉识别 + 机械臂抓取" 的完整流程。

> 本 README 依据 `src/` 下的实际源码（`CMakeLists.txt`、`package.xml`、各 `*.cpp/.py`、
> launch 与 `srv` 文件）整理，并与各子包内的中文 `*_GUIDE.md` 对应。

---

## 目录

- [一、整体架构](#一整体架构)
- [二、目录结构](#二目录结构)
- [三、子包详解](#三子包详解)
  - [3.1 lebai-ros-sdk-humble-dev（官方 SDK）](#31-lebai-ros-sdk-humble-dev官方-sdk)
  - [3.2 grab_demo（视觉抓取核心）](#32-grab_demo视觉抓取核心)
  - [3.3 arm_demo（运动学示例）](#33-arm_demo运动学示例)
  - [3.4 lebai_gazebo（Gazebo 仿真）](#34-lebai_gazebogazebo-仿真)
- [四、统一视觉接口（话题与 TF）](#四统一视觉接口话题与-tf)
- [五、抓取服务契约](#五抓取服务契约)
- [六、环境要求](#六环境要求)
- [七、编译](#七编译)
- [八、快速开始](#八快速开始)
- [九、手眼标定](#九手眼标定)
- [十、调试与排错](#十调试与排错)
- [十一、相关文档索引](#十一相关文档索引)

---

## 一、整体架构

抓取流程在五种视觉算法之间**共用同一套数据流**：相机出图 → 视觉节点把目标像素中心 +
深度反投影成 3D 点 → 以 `target_frame` 持续广播 TF → 抓取服务把 `target_frame` 变换到
机械臂基座并用 MoveIt 规划、控制夹爪完成抓取。

```
                         ┌───────────────────────────────────────────────┐
 astra_camera (Gemini)   │  视觉节点（任选其一，接口完全一致）            │
   /camera_arm/color  ──>│  hsv_range │ yolo_detect_node │ kcf_track_node │
   /camera_arm/depth  ──>│  aruco_dectet │ vlm_grab_node.py               │
   /gemini_info       ──>│                                                │
                         └───────────────┬───────────────────────────────┘
                                          │ 针孔反投影 + Z 补偿
                                          │ 广播 TF: camera_arm_depth_optical_frame → target_frame
                                          │ 发布 /grab_target/distance (Float32, m)
                                          ▼
                            grab_service_node (服务 /obj_grab_service)
                                          │ base_link → target_frame 查 TF
                                          │ MoveIt 规划组 "manipulator"
                                          │ 夹爪 /io_service/set_gripper_position
                                          ▼
                                    乐白 LM3 机械臂（robot_ip 默认 192.168.0.50）
```

切换算法只需换对应的 launch 文件，**抓取服务侧无需任何改动**（这正是统一接口的目的）。

---

## 二、目录结构

| 路径 | 说明 |
|------|------|
| `lebai-ros-sdk-humble-dev/` | 乐白官方 ROS 2 SDK：驱动、接口、URDF、MoveIt 配置、示例 |
| `grab_demo/` | 视觉抓取核心包：HSV / YOLO / KCF / ArUco / VLM 五种方案 + 抓取服务 |
| `arm_demo/` | 机械臂运动学示例：正运动学（FK）/ 逆运动学（IK） |
| `lebai_gazebo/` | LM3 机械臂的 Gazebo Classic 11 仿真场景与启动文件 |
| `DEBUG_README.md` | VSCode + gdb 调试 ROS 2 C++ 节点指南 |
| `DEBUG_ABOUT_OBJECT_GRAB.md` | 颜色识别抓取（TF 树 / 可视化）问题调试记录 |
| `VirtualMemory.md` | 编译大包时增加交换分区（虚拟内存）的方法 |
| `wheeltec_S300常用指令.txt` | wheeltec S300 移动底盘常用命令速查 |
| `更新记录.txt` | 模型 / 功能更新记录 |

---

## 三、子包详解

### 3.1 lebai-ros-sdk-humble-dev（官方 SDK）

乐白 LM3 机械臂的官方 ROS 2 SDK，提供驱动、接口、模型与运动规划配置：

| 子包 | 作用 |
|------|------|
| `lebai_driver` | 机械臂驱动；提供 IO / 夹爪 / 运动等服务（如 `/io_service/set_gripper_position`） |
| `lebai_interfaces` | 自定义消息与服务接口（如 `SetGripper`、`SetDO` 等） |
| `lebai_resources` | 公共材质 / 颜色 / 常量等 xacro 资源 |
| `lebai_lm3_support` | LM3 机械臂及夹爪的 URDF / xacro 模型（含防碰撞夹爪） |
| `lebai_lm3_moveit_config` | MoveIt 运动规划配置（`lm3.launch.py`、SRDF、RViz） |
| `lebai_tutorials` | C++ / Python 的运动与 IO 示例 |

> 安装与官方文档：<https://lebai-robotics.github.io/lebai-ros-sdk/index.html>
> 各服务（`.srv`）的定义与实现位置见根目录 `serivce.md`。

### 3.2 grab_demo（视觉抓取核心）

抓取功能的核心包。五种视觉方案输出一致，可按需切换：

| 方案 | 节点（可执行文件） | 算法 | 编译条件 | 指南 |
|------|------|------|---------|------|
| HSV 颜色 | `hsv_range` | HSV 阈值找最大色块，最轻量 | 始终编译 | `HSV_GUIDE.md` |
| YOLO 检测 | `yolo_detect_node` | TensorRT YOLOv8 目标检测 | 需 CUDA + TensorRT，否则自动跳过 | `YOLO_GUIDE.md` |
| KCF 跟踪 | `kcf_track_node` | KCF 相关滤波跟踪（需初始框，可由 HSV 自动播种） | 需 opencv_contrib tracking，否则自动跳过 | `KCF_GUIDE.md` |
| ArUco | `aruco_dectet` | ArUco 标记识别 | 始终编译 | — |
| VLM 自然语言 | `vlm_grab_node.py` | 视觉语言模型按一句话选物（OpenAI 兼容 / Anthropic） | 纯 Python，免编译 | `VLM_GUIDE.md` |

支撑节点与资源：

| 节点 / 文件 | 作用 |
|------|------|
| `grab_service_node`（节点名 `object_grab_node`） | **抓取服务**，提供 `/obj_grab_service`，用 MoveIt 规划并控制夹爪 |
| `start_grab` | 抓取流程示例入口 |
| `camera_info_node` | 发布相机内参到 `/gemini_info` |
| `hand_eye` + `charuco_dectet_node` | 手眼标定与 ChArUco 标定板识别 |
| `point_cloud_node` | 基于 PCL 的点云处理（见 `point_cloud.md`） |
| `nav_grab` | 导航 + 抓取（与移动底盘联动，用 nav2 action） |
| `srv/GrabObject.srv` | 抓取服务接口定义（见[第五节](#五抓取服务契约)） |
| `include/grab_demo/target_tf_publisher.hpp` | 三种算法共享的 `TargetTFPublisher`（统一反投影 + 广播 `target_frame`） |

**launch 文件**（位于 `grab_demo/launch/`，整套 = 相机 + 机械臂 + 视觉节点 + 抓取服务）：

| launch | 启动内容 |
|--------|---------|
| `color_grab.launch.py` | 相机 + LM3(MoveIt) + `hsv_range` + 内参 + 抓取服务（延迟 15s 启动以待依赖就绪） |
| `yolo_grab.launch.py` | 同上，视觉节点换为 `yolo_detect_node` |
| `kcf_grab.launch.py` | 同上，视觉节点换为 `kcf_track_node` |
| `aruco_grab.launch.py` | 同上，视觉节点换为 `aruco_dectet` |
| `vlm_grab.launch.py` | 同上，视觉节点换为 `vlm_grab_node.py`（需配置 VLM 接口/Key） |
| `hand_eye.launch.py` | 相机 + 内参 + `hand_eye` + `charuco_dectet_node`（标定用） |
| `start_grab.launch.py` | 抓取流程入口示例 |

> 相机由 `astra_camera` 包的 `gemini_arm.launch.*` 启动；机械臂由
> `lebai_lm3_moveit_config/lm3.launch.py` 启动，`robot_ip` 默认 `192.168.0.50`。

### 3.3 arm_demo（运动学示例）

机械臂运动学最小示例（依赖 `rclcpp`）：

```bash
ros2 launch arm_demo fk_demo.launch.py    # 正运动学（fk_demo）
ros2 launch arm_demo ik_demo.launch.py    # 逆运动学（ik_demo）
```

### 3.4 lebai_gazebo（Gazebo 仿真）

LM3 机械臂的 **Gazebo Classic 11** 仿真场景：地面 + 桌子 + 标准物体（可乐罐 / 木块 / 啤酒）
+ 机械臂（含末端深度相机与 ros2_control），可在仿真里跑抓取 / 视觉 / VLM。

```bash
ros2 launch lebai_gazebo gazebo.launch.py        # 仿真场景 + 机械臂 + 控制器
ros2 launch lebai_gazebo gazebo_grab.launch.py   # 仿真 + MoveIt(move_group) + HSV + 抓取服务
```

详见 `lebai_gazebo/GAZEBO_GUIDE.md`（含依赖安装与"需要微调的地方"）。

---

## 四、统一视觉接口（话题与 TF）

HSV / YOLO / KCF / ArUco / VLM 全部遵守下表，因此抓取服务对它们一视同仁：

| 项目 | 值 |
|------|-----|
| 彩色话题 | `/camera_arm/color/image_raw` |
| 深度话题 | `/camera_arm/depth/image_raw`（16UC1，单位 mm） |
| 内参话题 | `/gemini_info`（由 `camera_info_node` 发布） |
| 输出 TF | `camera_arm_depth_optical_frame` → `target_frame` |
| 反投影 | 针孔相机模型 + Z 轴补偿 `z_offset`（默认 `0.07` m，按标定调整） |
| 目标距离 | `/grab_target/distance`（`std_msgs/Float32`，单位 m），并叠加到调试图 |
| 调试图像 | 各节点 `~/detection_image` / `~/tracking_image` / `~/vlm_image`，默认不弹窗（headless 安全） |

**TF 链**（抓取成功的前提）：

```
base_link → … → camera_arm_depth_optical_frame → target_frame
```

抓取服务从 `base_link` 查找 `target_frame`；若链路不完整将查不到 TF（最常见的失败原因，
见 `grab_demo/DEBUG_GUIDE.md`）。

各方案的专有参数（HSV 阈值、YOLO 的 `target_class`/`select_mode`、KCF 的 `init_bbox`、
VLM 的 `provider`/`api_base`/安全项等）请查阅对应 `*_GUIDE.md`。

---

## 五、抓取服务契约

`grab_service_node`（节点 `object_grab_node`）对外提供服务：

- **服务名**：`/obj_grab_service`
- **类型**：`grab_demo/srv/GrabObject`

```
# srv/GrabObject.srv
string obj_link      # 要抓取的目标 TF 坐标系名（通常是 target_frame）
---
bool success         # 是否成功
string message       # 结果描述
```

内部实现（`src/grab_service_node.cpp`）要点：

- MoveIt 规划组：`manipulator`，位姿参考系：`base_link`；
- 速度缩放 `0.1`，位置容差 `0.001 m`，姿态容差 `0.01 rad`；
- 夹爪通过 `lebai_interfaces/srv/SetGripper` 调 `/io_service/set_gripper_position`
  （`val=100` 张开）；
- 先 `canTransform("base_link", obj_link, …, 5s)` 等待目标 TF，再规划运动。

手动调用示例：

```bash
ros2 service call /obj_grab_service grab_demo/srv/GrabObject "{obj_link: 'target_frame'}"
```

---

## 六、环境要求

| 类别 | 要求 |
|------|------|
| 系统 / ROS | Ubuntu 22.04 + **ROS 2 Humble** |
| 运动规划 | **MoveIt 2**（`moveit_ros_planning_interface`、`moveit_core`） |
| 视觉基础 | **OpenCV**、`cv_bridge`、`image_transport`、`message_filters`、Eigen3 |
| 点云 | **PCL** + `pcl_conversions` + `pcl_ros`（`point_cloud_node`） |
| 相机 | `astra_camera`（Gemini 深度相机，提供 `gemini_arm.launch`） |
| 机械臂 | 乐白 SDK（`lebai_driver` / `lebai_interfaces`），真机 IP 默认 `192.168.0.50` |
| 导航（可选） | `nav2_msgs` + `rclcpp_action`（`nav_grab`） |
| YOLO（可选） | **CUDA + TensorRT**（通常 Jetson）；缺失则自动跳过该节点 |
| KCF（可选） | **opencv_contrib** 的 tracking 模块（`libopencv-contrib-dev`）；缺失则跳过 |
| VLM（可选） | 可访问的视觉语言模型（本地 Ollama/vLLM 或云端 OpenAI/Anthropic），仅用 Python 标准库 |
| 仿真（可选） | **Gazebo Classic 11** + `gazebo_ros2_control` 等插件 |

> 编译含 TensorRT / MoveIt 的大包内存不足时，参考 `VirtualMemory.md` 增加交换分区。

---

## 七、编译

本目录即 colcon 工作空间的 `src/`，请在其上一级（工作空间根目录，例如 `~/lebai`）执行：

```bash
cd ~/lebai
colcon build                                  # 编译全部
source install/setup.bash

# 或只编译某个包
colcon build --packages-select grab_demo
```

说明：

- `grab_demo` 默认构建类型为 `RelWithDebInfo`。
- 可选节点（`yolo_detect_node` / `kcf_track_node`）由 CMake 自动探测依赖，
  **找不到就跳过并打印 WARNING**，不影响其它节点，所以无 GPU 的开发机也能正常构建。

---

## 八、快速开始

以颜色（HSV）抓取为例，启动整套流程：

```bash
source install/setup.bash
ros2 launch grab_demo color_grab.launch.py
```

切换其它视觉方案，改用对应 launch 即可（抓取服务侧无需改动）：

```bash
ros2 launch grab_demo yolo_grab.launch.py     # YOLO
ros2 launch grab_demo kcf_grab.launch.py      # KCF
ros2 launch grab_demo aruco_grab.launch.py    # ArUco
ros2 launch grab_demo vlm_grab.launch.py      # VLM（先 export 好 API Key 或指向本地服务）
```

常用观测命令：

```bash
ros2 run rqt_image_view rqt_image_view /color_node/detection_image   # 看检测可视化
ros2 run tf2_ros tf2_echo camera_arm_depth_optical_frame target_frame # 确认目标 TF
ros2 topic echo /grab_target/distance                                 # 看目标距离
```

VLM 示例（命令行直接发指令）：

```bash
ros2 topic pub --once /vlm/instruction std_msgs/String "{data: '把香蕉拿给我'}"
ros2 topic echo /vlm/result
```

各方案的参数、阈值与注意事项详见 `grab_demo/` 下对应的 `*_GUIDE.md`。

---

## 九、手眼标定

视觉抓取依赖相机到机械臂基座的外参（手眼关系）。用 ChArUco 标定板进行标定：

```bash
ros2 launch grab_demo hand_eye.launch.py
```

该 launch 启动相机、内参、`hand_eye` 与 `charuco_dectet_node`。标定结果用于补全
`base_link → camera_arm_depth_optical_frame` 的 TF 链。

---

## 十、调试与排错

| 现象 / 主题 | 参考文档 |
|------|------|
| 机械臂未到达目标位置（多为 TF 链不完整） | `grab_demo/DEBUG_GUIDE.md` |
| 颜色识别抓取的 TF / 可视化问题 | `DEBUG_ABOUT_OBJECT_GRAB.md` |
| VSCode + gdb 调试 C++ 节点 | `DEBUG_README.md` |
| 点云显示 | `grab_demo/point_cloud.md` |
| 服务接口（`.srv`）定义与实现位置 | 根目录 `serivce.md` |
| TF 树参考 | 根目录 `frame.md`、`frames_*.pdf` |

排错常用命令：

```bash
ros2 node list                       # 确认节点是否运行（如 object_grab_node）
ros2 service list | grep grab        # 确认 /obj_grab_service 已注册
ros2 run tf2_tools view_frames       # 导出 TF 树
ros2 run tf2_ros tf2_echo base_link target_frame
```

---

## 十一、相关文档索引

- 视觉抓取方案：`grab_demo/HSV_GUIDE.md`、`YOLO_GUIDE.md`、`KCF_GUIDE.md`、`VLM_GUIDE.md`
- 抓取调试：`grab_demo/DEBUG_GUIDE.md`、`DEBUG_ABOUT_OBJECT_GRAB.md`
- 点云 / 标定：`grab_demo/point_cloud.md`、根目录 `serivce.md`、`frame.md`
- 仿真：`lebai_gazebo/GAZEBO_GUIDE.md`
- 官方 SDK：<https://lebai-robotics.github.io/lebai-ros-sdk/index.html>
- 编译内存：`VirtualMemory.md` ｜ 更新记录：`更新记录.txt`
