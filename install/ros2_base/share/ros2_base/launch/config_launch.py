from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros2_base',
            executable='topic_sub',  #! 注意这里是可执行文件的名字
            name='study_subscriber',  #! 必须匹配 yaml 和 C++ 中的 node 名字
            parameters=['/home/ros2_explore/src/ros2_base/config/test.yaml'],
            output='screen'
        )
    ])
