#!/usr/bin/env python
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    ai_mistral_node = Node(
        package='ai_client',
        executable='action_client_ai.py',
        output='screen'
    )
    ld.add_action(ai_mistral_node) 

    return ld