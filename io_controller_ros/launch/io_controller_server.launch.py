from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='io_controller_ros',
            namespace='io_controller_1',
            executable='io_controller_ros_node',
            name='io_controller_ros_node',
            prefix='sudo'
        ),
    ])