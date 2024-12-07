# **Turtle Hunt Simulation - ROS 2 Project**

This project simulates a simple "Turtle Hunt" game using the ROS 2 framework. The main turtle is controlled using a PD controller to pursue and "catch" other turtles that are spawned randomly. The project includes custom ROS 2 messages, services, and a launch file to streamline execution.

---

## **Project Features**

1. **Main Turtle Controller**:  
   A PD controller is implemented to control the main turtle (`turtle1`) as it chases and catches the randomly spawned turtles.

2. **Random Turtle Spawning**:  
   Turtles are spawned at random positions using a `turtle_spawner` node. The spawning happens every 3 seconds.

3. **Custom ROS 2 Messages and Services**:  
   - **Message (`AliveTurtlesList.msg`)**: Publishes the positions, orientations, and names of all alive turtles.  
   - **Service (`CatchTurtle.srv`)**: Allows the main turtle to "catch" and remove a turtle from the simulation.

4. **Launch File**:  
   A launch file is provided to start all necessary nodes (`turtlesim`, `turtle_controller`, and `turtle_spawner`) with a single command.

---

## **Project Structure**

### **Workspace Setup**

1. **Create a ROS 2 Workspace**:
   ```bash
   mkdir -p ~/ros2_basics_ws/src
   cd ~/ros2_basics_ws/
   sudo apt install python3-colcon-common-extensions
   colcon build --symlink-install
   ```

2. **Create a Package for Python Nodes**:
   ```bash
   cd ~/ros2_basics_ws/src
   ros2 pkg create --build-type ament_python --license Apache-2.0 my_py_pkg
   ```

3. **Create a Package for Custom Interfaces**:
   ```bash
   ros2 pkg create my_robot_interfaces
   ```

4. **Create a Package for Launch Files**:
   ```bash
   ros2 pkg create my_robot_bringup
   ```

---

### **Key Files**

#### **Custom Interfaces**
- **Message (`AliveTurtlesList.msg`)**:
   ```plaintext
   float32[] x
   float32[] y
   float32[] theta
   string[] names
   ```
- **Service (`CatchTurtle.srv`)**:
   ```plaintext
   string name
   ---
   bool success
   ```

#### **Nodes**
1. **`turtle_controller.py`**: Implements the PD controller to control `turtle1`.  
   - Subscribes to `/turtle1/pose` and `alive_turtles` topics.
   - Publishes velocity commands to `/turtle1/cmd_vel`.
   - Calls the `catch_turtle` service when a turtle is caught.

2. **`turtle_spawner.py`**: Handles spawning and tracking of turtles.  
   - Spawns turtles at random positions using the `spawn` service.
   - Publishes the list of alive turtles using the `AliveTurtlesList` message.
   - Provides the `catch_turtle` service to allow killing of turtles.

#### **Launch File**
- **`launch/turtle_hunt.launch.py`**:
   Launches:
   - `turtlesim_node`
   - `turtle_spawner`
   - `turtle_controller`

---

## **How to Build and Run**

### **1. Build the Workspace**
```bash
cd ~/ros2_basics_ws/
colcon build --symlink-install
```

### **2. Source the Workspace**
```bash
source install/setup.bash
```

### **3. Launch the Project**
```bash
ros2 launch my_robot_bringup turtle_hunt.launch.py
```

---

## **Dependencies**

Ensure the following ROS 2 packages are installed:
- `turtlesim`
- `geometry_msgs`
- `rclpy`
- `rosidl_default_generators`

---

## **Acknowledgements**

This project was developed to demonstrate the capabilities of ROS 2 for robotic simulation, including inter-node communication, custom interfaces, and service implementations.
