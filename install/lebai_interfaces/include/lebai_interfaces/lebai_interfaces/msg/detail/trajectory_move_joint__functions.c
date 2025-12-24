// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/trajectory_move_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `common`
#include "lebai_interfaces/msg/detail/move_common__functions.h"
// Member `joint_pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cartesian_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
lebai_interfaces__msg__TrajectoryMoveJoint__init(lebai_interfaces__msg__TrajectoryMoveJoint * msg)
{
  if (!msg) {
    return false;
  }
  // common
  if (!lebai_interfaces__msg__MoveCommon__init(&msg->common)) {
    lebai_interfaces__msg__TrajectoryMoveJoint__fini(msg);
    return false;
  }
  // is_joint_pose
  // joint_pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_pose, 0)) {
    lebai_interfaces__msg__TrajectoryMoveJoint__fini(msg);
    return false;
  }
  // cartesian_pose
  if (!geometry_msgs__msg__Pose__init(&msg->cartesian_pose)) {
    lebai_interfaces__msg__TrajectoryMoveJoint__fini(msg);
    return false;
  }
  return true;
}

void
lebai_interfaces__msg__TrajectoryMoveJoint__fini(lebai_interfaces__msg__TrajectoryMoveJoint * msg)
{
  if (!msg) {
    return;
  }
  // common
  lebai_interfaces__msg__MoveCommon__fini(&msg->common);
  // is_joint_pose
  // joint_pose
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_pose);
  // cartesian_pose
  geometry_msgs__msg__Pose__fini(&msg->cartesian_pose);
}

bool
lebai_interfaces__msg__TrajectoryMoveJoint__are_equal(const lebai_interfaces__msg__TrajectoryMoveJoint * lhs, const lebai_interfaces__msg__TrajectoryMoveJoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // common
  if (!lebai_interfaces__msg__MoveCommon__are_equal(
      &(lhs->common), &(rhs->common)))
  {
    return false;
  }
  // is_joint_pose
  if (lhs->is_joint_pose != rhs->is_joint_pose) {
    return false;
  }
  // joint_pose
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_pose), &(rhs->joint_pose)))
  {
    return false;
  }
  // cartesian_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->cartesian_pose), &(rhs->cartesian_pose)))
  {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__TrajectoryMoveJoint__copy(
  const lebai_interfaces__msg__TrajectoryMoveJoint * input,
  lebai_interfaces__msg__TrajectoryMoveJoint * output)
{
  if (!input || !output) {
    return false;
  }
  // common
  if (!lebai_interfaces__msg__MoveCommon__copy(
      &(input->common), &(output->common)))
  {
    return false;
  }
  // is_joint_pose
  output->is_joint_pose = input->is_joint_pose;
  // joint_pose
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_pose), &(output->joint_pose)))
  {
    return false;
  }
  // cartesian_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->cartesian_pose), &(output->cartesian_pose)))
  {
    return false;
  }
  return true;
}

lebai_interfaces__msg__TrajectoryMoveJoint *
lebai_interfaces__msg__TrajectoryMoveJoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TrajectoryMoveJoint * msg = (lebai_interfaces__msg__TrajectoryMoveJoint *)allocator.allocate(sizeof(lebai_interfaces__msg__TrajectoryMoveJoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__TrajectoryMoveJoint));
  bool success = lebai_interfaces__msg__TrajectoryMoveJoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__TrajectoryMoveJoint__destroy(lebai_interfaces__msg__TrajectoryMoveJoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__TrajectoryMoveJoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__init(lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TrajectoryMoveJoint * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__TrajectoryMoveJoint *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__TrajectoryMoveJoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__TrajectoryMoveJoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__TrajectoryMoveJoint__fini(&data[i - 1]);
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
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__fini(lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * array)
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
      lebai_interfaces__msg__TrajectoryMoveJoint__fini(&array->data[i]);
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

lebai_interfaces__msg__TrajectoryMoveJoint__Sequence *
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * array = (lebai_interfaces__msg__TrajectoryMoveJoint__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__TrajectoryMoveJoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__destroy(lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__are_equal(const lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * lhs, const lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__TrajectoryMoveJoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__TrajectoryMoveJoint__Sequence__copy(
  const lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * input,
  lebai_interfaces__msg__TrajectoryMoveJoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__TrajectoryMoveJoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__TrajectoryMoveJoint * data =
      (lebai_interfaces__msg__TrajectoryMoveJoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__TrajectoryMoveJoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__TrajectoryMoveJoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__TrajectoryMoveJoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
