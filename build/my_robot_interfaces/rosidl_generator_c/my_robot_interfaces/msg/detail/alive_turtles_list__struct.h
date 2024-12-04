// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/AliveTurtlesList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'theta'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AliveTurtlesList in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__AliveTurtlesList
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence theta;
  rosidl_runtime_c__String__Sequence names;
} my_robot_interfaces__msg__AliveTurtlesList;

// Struct for a sequence of my_robot_interfaces__msg__AliveTurtlesList.
typedef struct my_robot_interfaces__msg__AliveTurtlesList__Sequence
{
  my_robot_interfaces__msg__AliveTurtlesList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__AliveTurtlesList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__STRUCT_H_
