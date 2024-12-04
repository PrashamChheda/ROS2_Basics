// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/AliveTurtlesList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/msg/detail/alive_turtles_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AliveTurtlesList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::msg::AliveTurtlesList(_init);
}

void AliveTurtlesList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::msg::AliveTurtlesList *>(message_memory);
  typed_message->~AliveTurtlesList();
}

size_t size_function__AliveTurtlesList__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AliveTurtlesList__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AliveTurtlesList__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AliveTurtlesList__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AliveTurtlesList__x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AliveTurtlesList__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AliveTurtlesList__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AliveTurtlesList__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AliveTurtlesList__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AliveTurtlesList__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AliveTurtlesList__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AliveTurtlesList__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AliveTurtlesList__y(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AliveTurtlesList__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AliveTurtlesList__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AliveTurtlesList__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AliveTurtlesList__theta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AliveTurtlesList__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AliveTurtlesList__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AliveTurtlesList__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AliveTurtlesList__theta(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AliveTurtlesList__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AliveTurtlesList__theta(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AliveTurtlesList__theta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AliveTurtlesList__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AliveTurtlesList__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AliveTurtlesList__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AliveTurtlesList__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AliveTurtlesList__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AliveTurtlesList__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AliveTurtlesList__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AliveTurtlesList__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AliveTurtlesList_message_member_array[4] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::AliveTurtlesList, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__AliveTurtlesList__x,  // size() function pointer
    get_const_function__AliveTurtlesList__x,  // get_const(index) function pointer
    get_function__AliveTurtlesList__x,  // get(index) function pointer
    fetch_function__AliveTurtlesList__x,  // fetch(index, &value) function pointer
    assign_function__AliveTurtlesList__x,  // assign(index, value) function pointer
    resize_function__AliveTurtlesList__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::AliveTurtlesList, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__AliveTurtlesList__y,  // size() function pointer
    get_const_function__AliveTurtlesList__y,  // get_const(index) function pointer
    get_function__AliveTurtlesList__y,  // get(index) function pointer
    fetch_function__AliveTurtlesList__y,  // fetch(index, &value) function pointer
    assign_function__AliveTurtlesList__y,  // assign(index, value) function pointer
    resize_function__AliveTurtlesList__y  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::AliveTurtlesList, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__AliveTurtlesList__theta,  // size() function pointer
    get_const_function__AliveTurtlesList__theta,  // get_const(index) function pointer
    get_function__AliveTurtlesList__theta,  // get(index) function pointer
    fetch_function__AliveTurtlesList__theta,  // fetch(index, &value) function pointer
    assign_function__AliveTurtlesList__theta,  // assign(index, value) function pointer
    resize_function__AliveTurtlesList__theta  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::AliveTurtlesList, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__AliveTurtlesList__names,  // size() function pointer
    get_const_function__AliveTurtlesList__names,  // get_const(index) function pointer
    get_function__AliveTurtlesList__names,  // get(index) function pointer
    fetch_function__AliveTurtlesList__names,  // fetch(index, &value) function pointer
    assign_function__AliveTurtlesList__names,  // assign(index, value) function pointer
    resize_function__AliveTurtlesList__names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AliveTurtlesList_message_members = {
  "my_robot_interfaces::msg",  // message namespace
  "AliveTurtlesList",  // message name
  4,  // number of fields
  sizeof(my_robot_interfaces::msg::AliveTurtlesList),
  AliveTurtlesList_message_member_array,  // message members
  AliveTurtlesList_init_function,  // function to initialize message memory (memory has to be allocated)
  AliveTurtlesList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AliveTurtlesList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AliveTurtlesList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::AliveTurtlesList>()
{
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::AliveTurtlesList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, msg, AliveTurtlesList)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::AliveTurtlesList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
