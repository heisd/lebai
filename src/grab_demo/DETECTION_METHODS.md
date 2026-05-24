# 物体识别 / 抓取目标定位方法总览

`grab_demo` 里所有的"识别 → 抓取"流水线本质上都干一件事：
**把图像里找到的物体，发布成一个 TF（例如 `kcf_track`、`yolo_cup`、`color_link`），
然后 `grab_service_node` 用 `obj_link=<这个 TF 名>` 让机械臂去抓。**

所以**写新检测节点 = 写一个"发 TF 的视觉节点"**，输入接口（话题）和输出接口（TF）保持一致，
就可以无缝替换。

---

## 已实现的方法

| 方法 | 节点 (executable) | 输出 TF | 启动 | 适用 |
|---|---|---|---|---|
| **HSV 颜色** | `hsv_range` | `color_link` | `color_grab.launch.py` | 颜色单一、背景干净的小物体 |
| **ChArUco 棋盘** | `charuco_dectet_node` | （手眼标定专用） | `hand_eye.launch.py` | 相机外参 / 手眼标定 |
| **ArUco 标记** | `aruco_dectet` | ArUco ID 对应 TF | `aruco_grab.launch.py` | 贴了 ArUco 码的物体 |
| **YOLO（深度学习）** | `yolo_detect_node` | `yolo_<类名>` | `yolo_grab.launch.py` | 任意常见物体（COCO 80 类，或自训） |
| **KCF/CSRT/MOSSE 跟踪** | `kcf_tracker_node` | `kcf_track` 或 `kcf_<label>` | `kcf_grab.launch.py` | 已知初始位置后持续跟踪一个物体 |

> YOLO 节点已经实现：`src/grab_demo/scripts/yolo_detect_node.py`（282 行），所以本次新增的是 **KCF**。

---

## YOLO 节点：怎么用

```bash
# 安装依赖（首次）
pip install ultralytics opencv-python

# 启动（默认下载 yolov8n.pt）
ros2 launch grab_demo yolo_grab.launch.py

# 只检测特定类别
ros2 launch grab_demo yolo_grab.launch.py target_classes:=cup,bottle

# 用自训模型
ros2 launch grab_demo yolo_grab.launch.py model_path:=/home/user/my_model.pt
```

输出：
- TF：`yolo_<class>`（如 `yolo_cup`）
- 可视化话题：`/yolo_result_image`（用 `rqt_image_view` 看）
- 检测到的类别列表：`/yolo_detected_objects` (`std_msgs/String`)

用法（让机械臂去抓杯子）：
```bash
ros2 service call /grab_service GrabObject "{obj_link: 'yolo_cup'}"
```

---

## KCF 节点：怎么用

KCF 是**跟踪器**，不是检测器——给它一个初始框，它逐帧跟下去。
相比每帧重检测：**更快**（KCF ~几百 FPS）、**ID 稳定**、**抗短时遮挡**。

### 启动

```bash
ros2 launch grab_demo kcf_grab.launch.py
# 想更稳但慢一点：
ros2 launch grab_demo kcf_grab.launch.py tracker_type:=CSRT
# 不需要 GUI 窗口（如 SSH 远程）：
ros2 launch grab_demo kcf_grab.launch.py show_window:=false
```

### 三种初始化方式

**① 鼠标框选**（最直观，需要 `show_window:=true`）

在弹出的 "KCF Tracker" 窗口里：
- 按 `s` → 进入选框模式 → 拖动框出目标 → 回车确认
- 按 `r` → 重置跟踪

**② 服务调用**（程序化、可脚本化）

```bash
ros2 service call /kcf_tracker_node/init grab_demo/srv/InitTracker \
  "{x: 300, y: 220, width: 120, height: 120, label: 'cup'}"
```

调用成功后 TF 名是 `kcf_cup`（`label` 自动加 `kcf_` 前缀）。
不传 `label` 则使用默认 `kcf_track`。

重置：
```bash
ros2 service call /kcf_tracker_node/reset std_srvs/srv/Trigger {}
```

**③ YOLO + KCF 组合（最推荐的工业用法）**

让 YOLO 检测一次拿到 bbox → 立刻交给 KCF 持续跟踪 → 抓取期间用跟踪而不是重检测，
这样可以避免：
- YOLO 在物体被夹爪挡住时检测失败导致 TF 跳变；
- 同类多目标时 YOLO 每帧的"yolo_cup"指代谁不稳定。

伪代码（写一个协调脚本即可）：
```python
# 1) 从 YOLO 检测结果里挑一个 bbox
bbox = pick_best_box_from_yolo_detection()

# 2) 调 KCF init
client = node.create_client(InitTracker, '/kcf_tracker_node/init')
req = InitTracker.Request(x=bbox.x, y=bbox.y,
                           width=bbox.w, height=bbox.h,
                           label='target')
client.call_async(req)

# 3) 抓取
grab_client.call_async(GrabObject.Request(obj_link='kcf_target'))
```

### KCF / CSRT / MOSSE 怎么选？

| 类型 | 速度 | 精度/鲁棒性 | 推荐场景 |
|---|---|---|---|
| **MOSSE** | 极快 (~1000 FPS) | 一般，物体形变快就跟丢 | 嵌入式、低算力 |
| **KCF** | 快 (~几百 FPS) | 中等，对尺度变化较弱 | 默认选择，物体大小变化不大 |
| **CSRT** | 较慢 (~30-50 FPS) | 最好，能处理尺度、遮挡 | 抓取场景（物体距离会变） |

> 实际抓取过程中**目标距离相机会越来越近，物体在图像里会变大**，
> 这时 KCF 容易跟丢，**推荐 CSRT**。

### 依赖

KCF / CSRT / MOSSE 在 OpenCV 主包里没有，需要 **contrib** 版本：
```bash
pip uninstall opencv-python   # 如果装的是普通版
pip install opencv-contrib-python
```

---

## 其他可选方法（未实现，按需扩展）

按"难度 / 收益"由低到高排：

### 1. AprilTag（强烈推荐做基准）
- 比 ArUco 更鲁棒、检测距离更远、自带 6DoF 姿态估计。
- ROS 2 直接有 `apriltag_ros` 包，开箱即用。
- 适合：在物体上贴码、做精度对比、做"已知姿态"的精确抓取。
- 抓取接入：节点已经自动发 TF，`obj_link='tag36h11_<id>'` 即可。

### 2. 模板匹配（OpenCV `matchTemplate`）
- 给一张目标物体的小图，全图滑动匹配。
- 优点：不需要训练、对纹理丰富的刚性物体效果好。
- 缺点：尺度/旋转不变性差。
- 适合：固定相机视角、固定大小的零件分拣。

### 3. ORB / SIFT 特征匹配 + Homography
- 比模板匹配更鲁棒，能处理一定的旋转和尺度变化。
- 适合：有明显纹理的物体（如药盒、书本封面）。
- 实现：`cv2.ORB_create()` + `BFMatcher` + `findHomography` + `perspectiveTransform`，
  把模板的 4 个角点投影到当前帧得到 bbox。

### 4. 深度图直接分割（无需 RGB / 无需训练）
- 假设抓取台面是已知平面：用 RANSAC 拟合平面，**高于平面 N cm 的连通块就是物体**。
- 优点：完全不依赖颜色和纹理，对透明物体也能用（前提是深度可测）。
- 实现：PCL（`pcl_ros`）或纯 NumPy 处理深度图。
- 适合：盒子、零件、立方体类规则物体。

### 5. Mask R-CNN / SAM（分割而不是 bbox）
- bbox 中心点 ≠ 物体抓取点（尤其细长物体如螺丝刀）。
- 用分割得到物体 mask，再做 PCA 找主轴 → 得到**抓取朝向**。
- **SAM（Segment Anything）** 可以"点一下任意物体就出 mask"，零样本，非常适合演示。
- 缺点：算力要求高，需要 GPU 推理。

### 6. 开放词汇检测：OWL-ViT / Grounding DINO
- 不需要训练，**直接输入文本**："找到红色的杯子"。
- 工业落地少，但做 Demo 极其惊艳。
- Hugging Face 有现成模型，包一层 ROS 节点即可。

### 7. 6D 姿态估计：FoundationPose / MegaPose
- 上面所有方法输出的都是 **位置（3D 点）**，姿态默认是单位四元数（朝下抓）。
- 6D 姿态估计能输出**完整 6DoF**，可以从任意角度精准抓取。
- 适合：装配、插拔、需要朝向精度的任务。

### 8. 点云聚类：欧式聚类 / 区域生长
- 用 PCL 在 3D 点云上做聚类，每个聚类就是一个物体。
- 比 2D 检测更准（直接在 3D 空间分割）。
- 适合：堆叠物体、bin-picking。

---

## 怎么选？决策树

```
是否需要识别"未知"物体？
├─ 是 → 物体有颜色特征？    → HSV
│      物体上能贴标记？      → ArUco / AprilTag
│      场景是已知平面 + 立体？→ 深度图平面分割
│      想"指哪个抓哪个"？    → SAM
│
└─ 否（识别"已知类别"）
   ├─ 是常见物（杯子、瓶子…） → YOLO（COCO 预训练）
   ├─ 是自定义工业件         → YOLO + 自训数据
   ├─ 跟踪期间不重检测        → YOLO 检一次 + KCF/CSRT 持续跟
   └─ 需要精确 6DoF 姿态     → 6D 姿态估计（FoundationPose…）
```

---

## 给新检测节点的"契约"清单

写新节点时按这个清单做，就能直接接入现有抓取流程：

1. **订阅**（保持与 HSV/YOLO/KCF 一致）：
   - `/camera_arm/color/image_raw` (`sensor_msgs/Image`)
   - `/camera_arm/depth/image_raw` (`sensor_msgs/Image`，16UC1，单位 mm)
   - `/gemini_info` (`sensor_msgs/CameraInfo`)
   - 用 `message_filters.ApproximateTimeSynchronizer` 同步 RGB + 深度。

2. **发布 TF**：
   - 父帧：`camera_color_optical_frame`（或 `camera_arm_color_optical_frame`，按实际相机驱动）
   - 子帧：自己起名，例：`my_method_<id>`
   - `grab_service_node` 内部会做 `lookupTransform("base_link", obj_link, …)`，
     所以只要 TF 树是连通的（相机已经标定挂到 `base_link` 下），就能用。

3. **像素 → 3D 计算**：
   ```python
   X = (u - cx) * z / fx
   Y = (v - cy) * z / fy
   Z = z   # 单位米
   ```
   `fx/fy/cx/cy` 从 `CameraInfo.k` 拿。

4. **抓取调用**：
   ```bash
   ros2 service call /grab_service grab_demo/srv/GrabObject \
     "{obj_link: '<你发布的 child_frame>'}"
   ```

满足这 4 条，**任何识别方式都能即插即用**。
