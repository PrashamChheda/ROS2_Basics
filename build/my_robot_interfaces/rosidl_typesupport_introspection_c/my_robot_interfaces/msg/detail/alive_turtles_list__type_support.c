// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interfaces:msg/AliveTurtlesList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interfaces/msg/detail/alive_turtles_list__rosidl_typesupport_introspection_c.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interfaces/msg/detail/alive_turtles_list__functions.h"
#include "my_robot_interfaces/msg/detail/alive_turtles_list__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__msg__AliveTurtlesList__init(message_memory);
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_fini_function(void * message_memory)
{
  my_robot_interfaces__msg__AliveTurtlesList__fini(message_memory);
}

size_t my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__theta(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__theta(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__theta(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__theta(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__theta(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__theta(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__AliveTurtlesList, x),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__x,  // size() function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__x,  // get_const(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__x,  // get(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__x,  // fetch(index, &value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__x,  // assign(index, value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__AliveTurtlesList, y),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__y,  // size() function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__y,  // get_const(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__y,  // get(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__y,  // fetch(index, &value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__y,  // assign(index, value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__y  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__AliveTurtlesList, theta),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__theta,  // size() function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__theta,  // get_const(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__theta,  // get(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__theta,  // fetch(index, &value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__theta,  // assign(index, value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__theta  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__msg__AliveTurtlesList, names),  // bytes offset in struct
    NULL,  // default value
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__size_function__AliveTurtlesList__names,  // size() function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_const_function__AliveTurtlesList__names,  // get_const(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__get_function__AliveTurtlesList__names,  // get(index) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__fetch_function__AliveTurtlesList__names,  // fetch(index, &value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__assign_function__AliveTurtlesList__names,  // assign(index, value) function pointer
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__resize_function__AliveTurtlesList__names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_members = {
  "my_robot_interfaces__msg",  // message namespace
  "AliveTurtlesList",  // message name
  4,  // number of fields
  sizeof(my_robot_interfaces__msg__AliveTurtlesList),
  my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_member_array,  // message members
  my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_type_support_handle = {
  0,
  &my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, msg, AliveTurtlesList)() {
  if (!my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__msg__AliveTurtlesList__rosidl_typesupport_introspection_c__AliveTurtlesList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
