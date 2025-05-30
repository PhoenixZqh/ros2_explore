# ROS2 学习

## ROS2 与 ROS1 的区别

### 总览

| 特性 | ROS1 | ROS2 |
|------|------|------|
| 通信机制 | 基于 TCPROS/UDPROS | 基于 DDS (Data Distribution Service) |
| 实时性 | 较差 | 更好，支持实时系统 |
| 分布式系统 | 需要 ROS Master | 去中心化，无需 Master |
| 多机器人支持 | 较难实现 | 原生支持 |
| 跨平台支持 | 主要支持 Linux | 支持 Linux、Windows、macOS |
| 网络通信 | 仅支持局域网 | 支持广域网通信 |
| 安全性 | 基础安全机制 | 内置安全机制 (DDS-Security) |
| 构建系统 | catkin | colcon |
| 包管理 | rosbuild/catkin | ament |
| 中间件 | 自定义 | 标准化 (DDS) |
| 生命周期管理 | 简单 | 更完善的状态管理 |
| 参数系统 | 基于 rosparam | 更强大的参数系统 |
| 时间同步 | 基础支持 | 更精确的时间同步 |
| 消息序列化 | 自定义 | 标准 IDL |
| 开发语言 | 主要 C++/Python | 支持更多语言 |


### catkin 和 ament 的区别

#### 问题一
```xml
add_library cannot create target "plan_env" because another target with the same name already exists.
```

🤔 **ROS1 (catkin) 的情况：** 
- 使用 catkin（基于 CMake 2.x/3.x）
- `project(plan_env)` 声明整个包的名称
- `add_library(plan_env ...)` 创建编译输出的库
- catkin 不会隐式创建同名的 CMake target
- 使用与项目名相同的库名是合法的，不会产生冲突 

😖 **ROS2 (ament) 的情况：** 
- 使用 ament_cmake（基于 CMake，但更严格）
- ament 会隐式为每个包创建一个同名的 Utility target
- 当你执行 `add_library(plan_env ...)` 时，会与已存在的 Utility target 冲突
- 不能重新定义一个已存在的 Utility target

## ROS2 常见命令

### 工作空间和包管理
```bash
# 创建功能包
ros2 pkg create --build-type ament_cmake <package_name>  # C++包
ros2 pkg create --build-type ament_python <package_name> # Python包

# 列出所有包
ros2 pkg list

# 查找包
ros2 pkg find <package_name>

# 刷新环境变量
source /opt/ros/<ros_distro>/setup.bash  # 系统级ROS2
source install/setup.bash                # 工作空间级ROS2
```

### 节点操作
```bash
# 运行节点
ros2 run <package_name> <executable_name>

# 列出运行中的节点
ros2 node list

# 查看节点信息
ros2 node info <node_name>
```

### 话题操作
```bash
# 列出所有话题
ros2 topic list

# 查看话题信息
ros2 topic info <topic_name>

# 查看话题消息类型
ros2 topic type <topic_name>

# 查看话题消息内容
ros2 topic echo <topic_name>

# 发布消息到话题
ros2 topic pub <topic_name> <msg_type> <data>
```

### 服务操作
```bash
# 列出所有服务
ros2 service list

# 查看服务信息
ros2 service type <service_name>

# 调用服务
ros2 service call <service_name> <service_type> <data>
```

### 参数操作
```bash
# 列出所有参数
ros2 param list

# 获取参数值
ros2 param get <node_name> <param_name>

# 设置参数值
ros2 param set <node_name> <param_name> <value>

# 加载参数文件
ros2 param load <node_name> <param_file>
```

### 消息操作
```bash
# 查看消息定义
ros2 interface show <msg_type>

# 列出所有消息类型
ros2 interface list
```

### 构建和运行
```bash
# 构建工作空间
colcon build

# 构建特定包
colcon build --packages-select <package_name>

# 运行launch文件
ros2 launch <package_name> <launch_file>
```

### 调试工具
```bash
# 查看节点关系图
ros2 run rqt_graph rqt_graph

# 查看系统状态
ros2 topic hz <topic_name>  # 查看话题发布频率
ros2 topic bw <topic_name>  # 查看话题带宽使用
```

## ROS2 通信

<font color="deep pink">示例代码详见ros2_base</font>

### 话题通信 (Topic)
话题通信是 ROS2 中最常用的通信方式，采用发布/订阅模式。

- 基于 DDS (Data Distribution Service) 实现
- 支持一对多、多对多的通信模式
- 异步通信，发布者和订阅者之间松耦合
- 使用 QoS (Quality of Service) 策略控制通信质量

底层实现：
- 使用 DDS 作为中间件，提供可靠的消息传递
- 消息通过序列化后传输，支持跨语言通信
- 使用发布/订阅模式，发布者不需要知道订阅者的存在
- 支持消息过滤和 QoS 配置

注意事项：
- 选择合适的 QoS 策略（可靠性、持久性、历史记录等）
- 注意消息频率和带宽使用
- 考虑网络延迟和丢包情况
- 合理设计消息类型，避免过大的消息体

### 服务通信 (Service)
服务通信采用请求/响应模式，适用于需要等待响应的场景。

- 同步通信，客户端等待服务端响应
- 基于 DDS 的请求/响应模式实现
- 适用于需要确认操作结果的场景
- 支持超时机制

底层实现：
- 使用 DDS 的请求/响应模式
- 服务端可以同时处理多个请求
- 支持服务发现和自动连接
- 消息序列化与话题通信相同

注意事项：
- 服务调用是阻塞的，注意超时设置
- 避免长时间运行的服务处理
- 合理设计服务接口，保持简单
- 考虑服务可用性和错误处理

### 动作通信 (Action)
动作通信是 ROS2 特有的通信方式，适用于长时间运行的任务。

- 结合了话题通信和服务通信的特点
- 支持任务取消和进度反馈
- 适用于需要长时间运行的任务
- 包含目标、反馈和结果三个部分

底层实现：
- 使用三个话题实现：目标话题、反馈话题和结果话题
- 基于 DDS 的发布/订阅模式
- 支持任务状态管理和取消机制
- 可以设置超时和重试策略

注意事项：
- 合理设计动作接口，明确目标、反馈和结果
- 实现适当的错误处理和恢复机制
- 考虑任务取消的清理工作
- 注意资源占用和并发处理

## ROS2 launch
ROS2 launch 系统用于启动和配置多个 ROS2 节点，是管理复杂 ROS2 系统的重要工具。

### 基本用法

1. 创建 launch 文件 (例如 `example.launch.py`):

```python
# 导入必要的launch模块
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """
    生成launch描述
    返回: LaunchDescription对象，包含要启动的节点列表
    """
    return LaunchDescription([
        # 启动第一个节点
        Node(
            package='my_package',      # 包名
            executable='my_node',      # 可执行文件名
            name='my_node',           # 节点名称
            parameters=[{              # 节点参数
                'param1': 'value1',
                'param2': 42
            }]
        ),
        
        # 启动第二个节点
        Node(
            package='another_package',  # 包名
            executable='another_node',  # 可执行文件名
            name='another_node'        # 节点名称
        )
    ])
```

2. 运行 launch 文件:

```bash
ros2 launch my_package example.launch.py
```

### 常用功能

1. 参数配置
- 从 YAML 文件加载参数
- 设置节点参数
- 使用环境变量

2. 条件启动
- 基于条件启动节点
- 使用 Python 表达式
- 处理依赖关系

3. 命名空间和重映射
- 设置节点命名空间
- 重映射话题和服务
- 管理节点名称

### 注意事项

1. 启动顺序
- 考虑节点间的依赖关系
- 使用适当的启动延迟
- 处理启动超时

2. 调试技巧
- 使用 `--debug` 选项
- 检查日志输出
- 验证参数设置

3. 安全性
- 注意权限设置
- 保护敏感参数
- 考虑网络安全

4. 维护性
- 保持代码简洁
- 使用模块化设计
- 及时更新文档
