#!usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
from functools import partial
from turtlesim.srv import Kill
from my_robot_interfaces.msg import AliveTurtlesList
from my_robot_interfaces.srv import CatchTurtle
import random

class TurtleSpawner(Node):
    def __init__(self):
        super().__init__("turtle_spawner")
        self.spawn_timer = self.create_timer(3.0, self.spawn_turtle)
        self.catch_turtle_service = self.create_service(CatchTurtle, "catch_turtle", self.catch_turtle_callback)
        self.alive_turtle_publisher = self.create_publisher(AliveTurtlesList, "alive_turtles", 10)
        self.alive_turtle_list = AliveTurtlesList()

    def alive_turtle_publisher_callback(self, x, y, theta, name):
        self.alive_turtle_list.x.append(x)
        self.alive_turtle_list.y.append(y)
        self.alive_turtle_list.theta.append(theta)
        self.alive_turtle_list.names.append(name)
        self.alive_turtle_publisher.publish(self.alive_turtle_list)

    def caught_turtle_publisher_callback(self):
        if len(self.alive_turtles_list.names) > 0:
            self.alive_turtles_list.x.pop(0)
            self.alive_turtles_list.y.pop(0)
            self.alive_turtles_list.theta.pop(0)
            self.alive_turtles_list.names.pop(0)
            self.alive_turtles_publisher.publish(self.alive_turtles_list)

    def catch_turtle_callback(self, request, response):
        self.kill_turtle(turtle_name=request.name)
        response.success = True
        return response

    def spawn_turtle(self):
        client = self.create_client(Spawn, "spawn")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for 'spawn' server ...")
        
        x = round(random.uniform(0.5, 10.0), 2)
        y = round(random.uniform(0.5, 10.0), 2)
        theta = round(random.uniform(0.0, 6), 2)
        request  = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        
        future = client.call_async(request)
        future.add_done_callback(partial(self.spawn_callback, x=x, y=y, theta=theta))

    def spawn_callback(self, future, x, y, theta):
        try:
            response = future.result()
            self.get_logger().info(f"{response.name} was spawned at ({x}, {y}) with theta {theta}")
            self.alive_turtle_publisher_callback(x, y, theta, response.name)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e, ))

    def kill_turtle(self, turtle_name):
        client = self.create_client(Kill, "kill")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for 'kill' server ...")

        request = Kill.Request()
        request.name = turtle_name

        future = client.call_async(request)
        future.add_done_callback(partial(self.kill_callback, turtle_name=turtle_name))

    def kill_callback(self, future, turtle_name):
        try: 
            response = future.result()
            self.get_logger().info(f"{turtle_name} was killed.")
            self.caught_turtle_publisher_callback()
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

def main(args=None):
    rclpy.init()
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()