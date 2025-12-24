// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:srv/MoveCircle.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/srv/detail/move_circle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `way_point_joint_pose`
// Member `end_point_joint_pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `way_point_cartesian_pose`
// Member `end_point_cartesian_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `common`
#include "lebai_interfaces/msg/detail/move_common__functions.h"

bool
lebai_interfaces__srv__MoveCircle_Request__init(lebai_interfaces__srv__MoveCircle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // way_point_is_joint_pose
  // way_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->way_point_joint_pose, 0)) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
    return false;
  }
  // way_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__init(&msg->way_point_cartesian_pose)) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
    return false;
  }
  // end_point_is_joint_pose
  // end_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->end_point_joint_pose, 0)) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
    return false;
  }
  // end_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__init(&msg->end_point_cartesian_pose)) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
    return false;
  }
  // circle_angle
  // common
  if (!lebai_interfaces__msg__MoveCommon__init(&msg->common)) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
    return false;
  }
  return true;
}

void
lebai_interfaces__srv__MoveCircle_Request__fini(lebai_interfaces__srv__MoveCircle_Request * msg)
{
  if (!msg) {
    return;
  }
  // way_point_is_joint_pose
  // way_point_joint_pose
  rosidl_runtime_c__double__Sequence__fini(&msg->way_point_joint_pose);
  // way_point_cartesian_pose
  geometry_msgs__msg__Pose__fini(&msg->way_point_cartesian_pose);
  // end_point_is_joint_pose
  // end_point_joint_pose
  rosidl_runtime_c__double__Sequence__fini(&msg->end_point_joint_pose);
  // end_point_cartesian_pose
  geometry_msgs__msg__Pose__fini(&msg->end_point_cartesian_pose);
  // circle_angle
  // common
  lebai_interfaces__msg__MoveCommon__fini(&msg->common);
}

bool
lebai_interfaces__srv__MoveCircle_Request__are_equal(const lebai_interfaces__srv__MoveCircle_Request * lhs, const lebai_interfaces__srv__MoveCircle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // way_point_is_joint_pose
  if (lhs->way_point_is_joint_pose != rhs->way_point_is_joint_pose) {
    return false;
  }
  // way_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->way_point_joint_pose), &(rhs->way_point_joint_pose)))
  {
    return false;
  }
  // way_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->way_point_cartesian_pose), &(rhs->way_point_cartesian_pose)))
  {
    return false;
  }
  // end_point_is_joint_pose
  if (lhs->end_point_is_joint_pose != rhs->end_point_is_joint_pose) {
    return false;
  }
  // end_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->end_point_joint_pose), &(rhs->end_point_joint_pose)))
  {
    return false;
  }
  // end_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->end_point_cartesian_pose), &(rhs->end_point_cartesian_pose)))
  {
    return false;
  }
  // circle_angle
  if (lhs->circle_angle != rhs->circle_angle) {
    return false;
  }
  // common
  if (!lebai_interfaces__msg__MoveCommon__are_equal(
      &(lhs->common), &(rhs->common)))
  {
    return false;
  }
  return true;
}

bool
lebai_interfaces__srv__MoveCircle_Request__copy(
  const lebai_interfaces__srv__MoveCircle_Request * input,
  lebai_interfaces__srv__MoveCircle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // way_point_is_joint_pose
  output->way_point_is_joint_pose = input->way_point_is_joint_pose;
  // way_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->way_point_joint_pose), &(output->way_point_joint_pose)))
  {
    return false;
  }
  // way_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->way_point_cartesian_pose), &(output->way_point_cartesian_pose)))
  {
    return false;
  }
  // end_point_is_joint_pose
  output->end_point_is_joint_pose = input->end_point_is_joint_pose;
  // end_point_joint_pose
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->end_point_joint_pose), &(output->end_point_joint_pose)))
  {
    return false;
  }
  // end_point_cartesian_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->end_point_cartesian_pose), &(output->end_point_cartesian_pose)))
  {
    return false;
  }
  // circle_angle
  output->circle_angle = input->circle_angle;
  // common
  if (!lebai_interfaces__msg__MoveCommon__copy(
      &(input->common), &(output->common)))
  {
    return false;
  }
  return true;
}

lebai_interfaces__srv__MoveCircle_Request *
lebai_interfaces__srv__MoveCircle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Request * msg = (lebai_interfaces__srv__MoveCircle_Request *)allocator.allocate(sizeof(lebai_interfaces__srv__MoveCircle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__srv__MoveCircle_Request));
  bool success = lebai_interfaces__srv__MoveCircle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__srv__MoveCircle_Request__destroy(lebai_interfaces__srv__MoveCircle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__srv__MoveCircle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__srv__MoveCircle_Request__Sequence__init(lebai_interfaces__srv__MoveCircle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Request * data = NULL;

  if (size) {
    data = (lebai_interfaces__srv__MoveCircle_Request *)allocator.zero_allocate(size, sizeof(lebai_interfaces__srv__MoveCircle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__srv__MoveCircle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__srv__MoveCircle_Request__fini(&data[i - 1]);
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
lebai_interfaces__srv__MoveCircle_Request__Sequence__fini(lebai_interfaces__srv__MoveCircle_Request__Sequence * array)
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
      lebai_interfaces__srv__MoveCircle_Request__fini(&array->data[i]);
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

lebai_interfaces__srv__MoveCircle_Request__Sequence *
lebai_interfaces__srv__MoveCircle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Request__Sequence * array = (lebai_interfaces__srv__MoveCircle_Request__Sequence *)allocator.allocate(sizeof(lebai_interfaces__srv__MoveCircle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__srv__MoveCircle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__srv__MoveCircle_Request__Sequence__destroy(lebai_interfaces__srv__MoveCircle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__srv__MoveCircle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__srv__MoveCircle_Request__Sequence__are_equal(const lebai_interfaces__srv__MoveCircle_Request__Sequence * lhs, const lebai_interfaces__srv__MoveCircle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__srv__MoveCircle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__srv__MoveCircle_Request__Sequence__copy(
  const lebai_interfaces__srv__MoveCircle_Request__Sequence * input,
  lebai_interfaces__srv__MoveCircle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__srv__MoveCircle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__srv__MoveCircle_Request * data =
      (lebai_interfaces__srv__MoveCircle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__srv__MoveCircle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__srv__MoveCircle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__srv__MoveCircle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lebai_interfaces__srv__MoveCircle_Response__init(lebai_interfaces__srv__MoveCircle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
lebai_interfaces__srv__MoveCircle_Response__fini(lebai_interfaces__srv__MoveCircle_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
lebai_interfaces__srv__MoveCircle_Response__are_equal(const lebai_interfaces__srv__MoveCircle_Response * lhs, const lebai_interfaces__srv__MoveCircle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__srv__MoveCircle_Response__copy(
  const lebai_interfaces__srv__MoveCircle_Response * input,
  lebai_interfaces__srv__MoveCircle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

lebai_interfaces__srv__MoveCircle_Response *
lebai_interfaces__srv__MoveCircle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Response * msg = (lebai_interfaces__srv__MoveCircle_Response *)allocator.allocate(sizeof(lebai_interfaces__srv__MoveCircle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__srv__MoveCircle_Response));
  bool success = lebai_interfaces__srv__MoveCircle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__srv__MoveCircle_Response__destroy(lebai_interfaces__srv__MoveCircle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__srv__MoveCircle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__srv__MoveCircle_Response__Sequence__init(lebai_interfaces__srv__MoveCircle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Response * data = NULL;

  if (size) {
    data = (lebai_interfaces__srv__MoveCircle_Response *)allocator.zero_allocate(size, sizeof(lebai_interfaces__srv__MoveCircle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__srv__MoveCircle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__srv__MoveCircle_Response__fini(&data[i - 1]);
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
lebai_interfaces__srv__MoveCircle_Response__Sequence__fini(lebai_interfaces__srv__MoveCircle_Response__Sequence * array)
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
      lebai_interfaces__srv__MoveCircle_Response__fini(&array->data[i]);
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

lebai_interfaces__srv__MoveCircle_Response__Sequence *
lebai_interfaces__srv__MoveCircle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__MoveCircle_Response__Sequence * array = (lebai_interfaces__srv__MoveCircle_Response__Sequence *)allocator.allocate(sizeof(lebai_interfaces__srv__MoveCircle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__srv__MoveCircle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__srv__MoveCircle_Response__Sequence__destroy(lebai_interfaces__srv__MoveCircle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__srv__MoveCircle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__srv__MoveCircle_Response__Sequence__are_equal(const lebai_interfaces__srv__MoveCircle_Response__Sequence * lhs, const lebai_interfaces__srv__MoveCircle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__srv__MoveCircle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__srv__MoveCircle_Response__Sequence__copy(
  const lebai_interfaces__srv__MoveCircle_Response__Sequence * input,
  lebai_interfaces__srv__MoveCircle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__srv__MoveCircle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__srv__MoveCircle_Response * data =
      (lebai_interfaces__srv__MoveCircle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__srv__MoveCircle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__srv__MoveCircle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__srv__MoveCircle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
