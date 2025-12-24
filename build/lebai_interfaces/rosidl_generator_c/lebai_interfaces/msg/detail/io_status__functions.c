// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/io_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_din`
// Member `robot_dout`
// Member `robot_ain`
// Member `robot_aout`
// Member `robot_ain_type`
// Member `robot_aout_type`
// Member `flange_din`
// Member `flange_dout`
// Member `extend_din`
// Member `extend_dout`
// Member `extend_ain`
// Member `extend_aout`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lebai_interfaces__msg__IOStatus__init(lebai_interfaces__msg__IOStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_din
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->robot_din, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // robot_dout
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->robot_dout, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // robot_ain
  if (!rosidl_runtime_c__float__Sequence__init(&msg->robot_ain, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // robot_aout
  if (!rosidl_runtime_c__float__Sequence__init(&msg->robot_aout, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // robot_ain_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->robot_ain_type, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // robot_aout_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->robot_aout_type, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // flange_din
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->flange_din, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // flange_dout
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->flange_dout, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // extend_din
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->extend_din, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // extend_dout
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->extend_dout, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // extend_ain
  if (!rosidl_runtime_c__float__Sequence__init(&msg->extend_ain, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  // extend_aout
  if (!rosidl_runtime_c__float__Sequence__init(&msg->extend_aout, 0)) {
    lebai_interfaces__msg__IOStatus__fini(msg);
    return false;
  }
  return true;
}

void
lebai_interfaces__msg__IOStatus__fini(lebai_interfaces__msg__IOStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_din
  rosidl_runtime_c__boolean__Sequence__fini(&msg->robot_din);
  // robot_dout
  rosidl_runtime_c__boolean__Sequence__fini(&msg->robot_dout);
  // robot_ain
  rosidl_runtime_c__float__Sequence__fini(&msg->robot_ain);
  // robot_aout
  rosidl_runtime_c__float__Sequence__fini(&msg->robot_aout);
  // robot_ain_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->robot_ain_type);
  // robot_aout_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->robot_aout_type);
  // flange_din
  rosidl_runtime_c__boolean__Sequence__fini(&msg->flange_din);
  // flange_dout
  rosidl_runtime_c__boolean__Sequence__fini(&msg->flange_dout);
  // extend_din
  rosidl_runtime_c__boolean__Sequence__fini(&msg->extend_din);
  // extend_dout
  rosidl_runtime_c__boolean__Sequence__fini(&msg->extend_dout);
  // extend_ain
  rosidl_runtime_c__float__Sequence__fini(&msg->extend_ain);
  // extend_aout
  rosidl_runtime_c__float__Sequence__fini(&msg->extend_aout);
}

bool
lebai_interfaces__msg__IOStatus__are_equal(const lebai_interfaces__msg__IOStatus * lhs, const lebai_interfaces__msg__IOStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_din
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->robot_din), &(rhs->robot_din)))
  {
    return false;
  }
  // robot_dout
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->robot_dout), &(rhs->robot_dout)))
  {
    return false;
  }
  // robot_ain
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->robot_ain), &(rhs->robot_ain)))
  {
    return false;
  }
  // robot_aout
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->robot_aout), &(rhs->robot_aout)))
  {
    return false;
  }
  // robot_ain_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->robot_ain_type), &(rhs->robot_ain_type)))
  {
    return false;
  }
  // robot_aout_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->robot_aout_type), &(rhs->robot_aout_type)))
  {
    return false;
  }
  // flange_din
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->flange_din), &(rhs->flange_din)))
  {
    return false;
  }
  // flange_dout
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->flange_dout), &(rhs->flange_dout)))
  {
    return false;
  }
  // extend_din
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->extend_din), &(rhs->extend_din)))
  {
    return false;
  }
  // extend_dout
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->extend_dout), &(rhs->extend_dout)))
  {
    return false;
  }
  // extend_ain
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->extend_ain), &(rhs->extend_ain)))
  {
    return false;
  }
  // extend_aout
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->extend_aout), &(rhs->extend_aout)))
  {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__IOStatus__copy(
  const lebai_interfaces__msg__IOStatus * input,
  lebai_interfaces__msg__IOStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_din
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->robot_din), &(output->robot_din)))
  {
    return false;
  }
  // robot_dout
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->robot_dout), &(output->robot_dout)))
  {
    return false;
  }
  // robot_ain
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->robot_ain), &(output->robot_ain)))
  {
    return false;
  }
  // robot_aout
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->robot_aout), &(output->robot_aout)))
  {
    return false;
  }
  // robot_ain_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->robot_ain_type), &(output->robot_ain_type)))
  {
    return false;
  }
  // robot_aout_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->robot_aout_type), &(output->robot_aout_type)))
  {
    return false;
  }
  // flange_din
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->flange_din), &(output->flange_din)))
  {
    return false;
  }
  // flange_dout
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->flange_dout), &(output->flange_dout)))
  {
    return false;
  }
  // extend_din
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->extend_din), &(output->extend_din)))
  {
    return false;
  }
  // extend_dout
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->extend_dout), &(output->extend_dout)))
  {
    return false;
  }
  // extend_ain
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->extend_ain), &(output->extend_ain)))
  {
    return false;
  }
  // extend_aout
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->extend_aout), &(output->extend_aout)))
  {
    return false;
  }
  return true;
}

lebai_interfaces__msg__IOStatus *
lebai_interfaces__msg__IOStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOStatus * msg = (lebai_interfaces__msg__IOStatus *)allocator.allocate(sizeof(lebai_interfaces__msg__IOStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__IOStatus));
  bool success = lebai_interfaces__msg__IOStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__IOStatus__destroy(lebai_interfaces__msg__IOStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__IOStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__IOStatus__Sequence__init(lebai_interfaces__msg__IOStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOStatus * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__IOStatus *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__IOStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__IOStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__IOStatus__fini(&data[i - 1]);
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
lebai_interfaces__msg__IOStatus__Sequence__fini(lebai_interfaces__msg__IOStatus__Sequence * array)
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
      lebai_interfaces__msg__IOStatus__fini(&array->data[i]);
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

lebai_interfaces__msg__IOStatus__Sequence *
lebai_interfaces__msg__IOStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOStatus__Sequence * array = (lebai_interfaces__msg__IOStatus__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__IOStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__IOStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__IOStatus__Sequence__destroy(lebai_interfaces__msg__IOStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__IOStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__IOStatus__Sequence__are_equal(const lebai_interfaces__msg__IOStatus__Sequence * lhs, const lebai_interfaces__msg__IOStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__IOStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__IOStatus__Sequence__copy(
  const lebai_interfaces__msg__IOStatus__Sequence * input,
  lebai_interfaces__msg__IOStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__IOStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__IOStatus * data =
      (lebai_interfaces__msg__IOStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__IOStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__IOStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__IOStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
