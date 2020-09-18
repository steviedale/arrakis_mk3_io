from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='f75111_io_controller_ros',
            namespace='f75111_io_controller_1',
            executable='f75111_io_controller_ros_node',
            name='f75111_io_controller_ros_node'
        ),
    ])