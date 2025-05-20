from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    pkg_share = get_package_share_directory('ros2_base')
    param_file = os.path.join(pkg_share, 'config', 'test.yaml')

    return LaunchDescription([
        Node(
            package='ros2_base', 
            executable='topic_sub',
            name='study_subscriber',  #! 注意这里一定要和节点名称一致
            parameters=[param_file],
            output='screen'
        )
    ])
