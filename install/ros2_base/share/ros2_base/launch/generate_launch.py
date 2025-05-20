from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros2_base',
            executable='service',
            name='service',
            output='screen'
        ),
        Node(
            package='ros2_base',
            executable='client',
            name='client',
            output='screen'
        )
    ])
