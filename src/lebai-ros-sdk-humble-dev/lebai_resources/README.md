# lebai_resources

LeBai 机械臂通用 xacro 资源包，集中存放被其他描述包（如 `lebai_lm3_support`）共享的颜色、材质和常量宏定义。

## 内容

```
lebai_resources/
└── urdf/
    ├── common_colours.xacro     # 通用颜色定义
    ├── common_constants.xacro   # 通用常量（π、单位换算等）
    └── common_materials.xacro   # 通用材质定义
```

## 用法

在其他包的 xacro 中通过 `find` 引用：

```xml
<xacro:include filename="$(find lebai_resources)/urdf/common_colours.xacro" />
<xacro:include filename="$(find lebai_resources)/urdf/common_materials.xacro" />
<xacro:include filename="$(find lebai_resources)/urdf/common_constants.xacro" />
```

## 编译

```bash
colcon build --packages-select lebai_resources
```

该包只安装资源文件，不包含可执行节点。
