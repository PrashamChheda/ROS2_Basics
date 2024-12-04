#!usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from functools import partial
import math
from my_robot_interfaces.msg import AliveTurtlesList
from my_robot_interfaces.srv import CatchTurtle

class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.target_turtle_x = None
        self.target_turtle_y = None
        self.target_turtle_theta = None
        self.main_turtle_pose = None
        self.target_turtle_name = None
        self.cmd_vel_publisher = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.main_turtle_pose_subscriber = self.create_subscription(Pose, "/turtle1/pose", self.main_turtle_pose_callback, 10)
        self.control_loop_timer = self.create_timer(0.01, self.control_loop)
        self.target_turtle_pose_subscriber = self.create_subscription(AliveTurtlesList, "alive_turtles", self.alive_turtle_callback, 10)

    def alive_turtle_callback(self, msg):
        if len(msg.names) > 0:
            self.target_turtle_x = msg.x[0]
            self.target_turtle_y = msg.y[0]
            self.target_turtle_theta = msg.theta[0]
            self.target_turtle_name = msg.names[0]

    def main_turtle_pose_callback(self,msg):
        self.main_turtle_pose = msg

    def control_loop(self):
        if self.main_turtle_pose == None or self.target_turtle_name == None:
            return
        
        x_distance = self.target_turtle_x - self.main_turtle_pose.x
        y_distance = self.target_turtle_y - self.main_turtle_pose.y
        distance = math.sqrt(x_distance**2 + y_distance**2)

        msg = Twist()

        kp_dis = 2
        kp_ang = 6

        if distance >= 0.2:
            msg.linear.x = kp_dis*distance

            goal_theta = math.atan2(y_distance, x_distance)
            diff = goal_theta - self.main_turtle_pose.theta
            if diff > math.pi:
                diff -= 2*math.pi
            elif diff < -math.pi:
                diff += 2*math.pi
            msg.angular.z = kp_ang*diff
        elif self.target_turtle_name != None:
            self.caught_turtle()
            msg.linear.x = 0.0
            msg.angular.z = 0.0
        else:
            msg.linear.x = 0.0
            msg.angular.z = 0.0

        self.cmd_vel_publisher.publish(msg)

    def main_turtle_pose_callback(self, msg):
        self.main_turtle_pose = msg

    def caught_turtle(self):
        client = self.create_client(CatchTurtle, "catch_turtle")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for 'catch_turtle' server ...")

        request = CatchTurtle.Request()
        request.name = self.target_turtle_name

        future = client.call_async(request)
        future.add_done_callback(partial(self.caught_turtle_callback))

    def caught_turtle_callback(self, future):
        try:
            response = future.result()
            if response:
                self.get_logger().info(f"{self.target_turtle_name} was caught.")
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

def main(args=None):
    rclpy.init()
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown

if __name__ == "__main__":
    main()