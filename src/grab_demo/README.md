# grab_demo

基于 LeBai LM3 机械臂与相机的视觉抓取应用包，提供多种识别与抓取方案：ArUco 标记、颜色阈值（HSV）、YOLO 目标检测，以及手眼标定流程。

## 功能模块

| 节点 / 脚本 | 说明 |
| --- | --- |
| `aruco_dectet` | 基于 ArUco 标记的位姿识别 |
| `charuco_dectet_node` | 基于 ChArUco 棋盘的标定与位姿识别 |
| `hsv_range*` | 基于 HSV 颜色阈值的目标识别（多个调试版本） |
| `yolo_detect_node.py` | 基于 YOLO 的目标检测节点（Python） |
| `hand_eye` | 手眼标定流程（eye-in-hand / eye-to-hand） |
| `camera_info_node` | 相机内参发布节点 |
| `grab_service_node` | 提供 `GrabObject` 服务，封装抓取动作 |
| `start_grab` | 抓取任务的主调度节点 |
| `nav_grab` | 移动 + 抓取联合演示 |

## 自定义服务

- `srv/GrabObject.srv`：触发一次抓取操作的服务接口。

## 目录结构

```
grab_demo/
├── src/                 # C++ 节点源码（识别 / 标定 / 抓取调度）
├── scripts/             # Python 节点（YOLO 检测）
├── include/grab_demo/   # 公共头文件
├── launch/              # 启动脚本（aruco / color / yolo / hand_eye / start）
├── srv/                 # 自定义服务定义
├── CMakeLists.txt
├── package.xml
└── DEBUG_GUIDE.md       # 调试指南
```

## 依赖

- `rclcpp`, `rclpy`
- `sensor_msgs`, `geometry_msgs`
- `tf2_ros`
- `cv_bridge`, `image_transport`, `message_filters`
- `rosidl_default_generators`（用于生成 `GrabObject.srv`）
- 外部：OpenCV、ArUco、YOLO（Python 端依赖请参考 `scripts/`）

## 编译

```bash
colcon build --packages-select grab_demo
source install/setup.bash
```

## 运行

ArUco 抓取：

```bash
ros2 launch grab_demo aruco_grab.launch.py
```

颜色抓取：

```bash
ros2 launch grab_demo color_grab.launch.py
```

YOLO 抓取：

```bash
ros2 launch grab_demo yolo_grab.launch.py
```

手眼标定：

```bash
ros2 launch grab_demo hand_eye.launch.py
```

完整抓取流程：

```bash
ros2 launch grab_demo start_grab.launch.py
```

更多调试细节见 [`DEBUG_GUIDE.md`](./DEBUG_GUIDE.md)。
