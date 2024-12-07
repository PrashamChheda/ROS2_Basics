from launch import LaunchDescription
from launch_ros.actions import Node 

def generate_launch_description():
    ld = LaunchDescription()

    turtle_spawner_node = Node(
        package="my_py_pkg",
        executable="turtle_spawner"
    )

    turtle_controller_node = Node(
        package="my_py_pkg",
        executable="turtle_controller"
    )

    trutlesim_node = Node(
        package="turtlesim",
        executable="turtlesim_node"
    )

    ld.add_action(trutlesim_node)
    ld.add_action(turtle_controller_node)
    ld.add_action(turtle_spawner_node)
    return ld