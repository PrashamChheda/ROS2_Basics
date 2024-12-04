// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:msg/AliveTurtlesList.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/alive_turtles_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__msg__AliveTurtlesList__init(my_robot_interfaces__msg__AliveTurtlesList * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    my_robot_interfaces__msg__AliveTurtlesList__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    my_robot_interfaces__msg__AliveTurtlesList__fini(msg);
    return false;
  }
  // theta
  if (!rosidl_runtime_c__float__Sequence__init(&msg->theta, 0)) {
    my_robot_interfaces__msg__AliveTurtlesList__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    my_robot_interfaces__msg__AliveTurtlesList__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__msg__AliveTurtlesList__fini(my_robot_interfaces__msg__AliveTurtlesList * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // theta
  rosidl_runtime_c__float__Sequence__fini(&msg->theta);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
}

bool
my_robot_interfaces__msg__AliveTurtlesList__are_equal(const my_robot_interfaces__msg__AliveTurtlesList * lhs, const my_robot_interfaces__msg__AliveTurtlesList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__msg__AliveTurtlesList__copy(
  const my_robot_interfaces__msg__AliveTurtlesList * input,
  my_robot_interfaces__msg__AliveTurtlesList * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__msg__AliveTurtlesList *
my_robot_interfaces__msg__AliveTurtlesList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__AliveTurtlesList * msg = (my_robot_interfaces__msg__AliveTurtlesList *)allocator.allocate(sizeof(my_robot_interfaces__msg__AliveTurtlesList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__msg__AliveTurtlesList));
  bool success = my_robot_interfaces__msg__AliveTurtlesList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__msg__AliveTurtlesList__destroy(my_robot_interfaces__msg__AliveTurtlesList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__msg__AliveTurtlesList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__msg__AliveTurtlesList__Sequence__init(my_robot_interfaces__msg__AliveTurtlesList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__AliveTurtlesList * data = NULL;

  if (size) {
    data = (my_robot_interfaces__msg__AliveTurtlesList *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__msg__AliveTurtlesList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__msg__AliveTurtlesList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__msg__AliveTurtlesList__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_robot_interfaces__msg__AliveTurtlesList__Sequence__fini(my_robot_interfaces__msg__AliveTurtlesList__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_robot_interfaces__msg__AliveTurtlesList__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_robot_interfaces__msg__AliveTurtlesList__Sequence *
my_robot_interfaces__msg__AliveTurtlesList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__AliveTurtlesList__Sequence * array = (my_robot_interfaces__msg__AliveTurtlesList__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__msg__AliveTurtlesList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__msg__AliveTurtlesList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__msg__AliveTurtlesList__Sequence__destroy(my_robot_interfaces__msg__AliveTurtlesList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__msg__AliveTurtlesList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__msg__AliveTurtlesList__Sequence__are_equal(const my_robot_interfaces__msg__AliveTurtlesList__Sequence * lhs, const my_robot_interfaces__msg__AliveTurtlesList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__msg__AliveTurtlesList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__msg__AliveTurtlesList__Sequence__copy(
  const my_robot_interfaces__msg__AliveTurtlesList__Sequence * input,
  my_robot_interfaces__msg__AliveTurtlesList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__msg__AliveTurtlesList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__msg__AliveTurtlesList * data =
      (my_robot_interfaces__msg__AliveTurtlesList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__msg__AliveTurtlesList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__msg__AliveTurtlesList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__msg__AliveTurtlesList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
