// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/GripperStatus.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/gripper_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lebai_interfaces__msg__GripperStatus__init(lebai_interfaces__msg__GripperStatus * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // force
  return true;
}

void
lebai_interfaces__msg__GripperStatus__fini(lebai_interfaces__msg__GripperStatus * msg)
{
  if (!msg) {
    return;
  }
  // position
  // force
}

bool
lebai_interfaces__msg__GripperStatus__are_equal(const lebai_interfaces__msg__GripperStatus * lhs, const lebai_interfaces__msg__GripperStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__GripperStatus__copy(
  const lebai_interfaces__msg__GripperStatus * input,
  lebai_interfaces__msg__GripperStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // force
  output->force = input->force;
  return true;
}

lebai_interfaces__msg__GripperStatus *
lebai_interfaces__msg__GripperStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__GripperStatus * msg = (lebai_interfaces__msg__GripperStatus *)allocator.allocate(sizeof(lebai_interfaces__msg__GripperStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__GripperStatus));
  bool success = lebai_interfaces__msg__GripperStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__GripperStatus__destroy(lebai_interfaces__msg__GripperStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__GripperStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__GripperStatus__Sequence__init(lebai_interfaces__msg__GripperStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__GripperStatus * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__GripperStatus *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__GripperStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__GripperStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__GripperStatus__fini(&data[i - 1]);
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
lebai_interfaces__msg__GripperStatus__Sequence__fini(lebai_interfaces__msg__GripperStatus__Sequence * array)
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
      lebai_interfaces__msg__GripperStatus__fini(&array->data[i]);
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

lebai_interfaces__msg__GripperStatus__Sequence *
lebai_interfaces__msg__GripperStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__GripperStatus__Sequence * array = (lebai_interfaces__msg__GripperStatus__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__GripperStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__GripperStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__GripperStatus__Sequence__destroy(lebai_interfaces__msg__GripperStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__GripperStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__GripperStatus__Sequence__are_equal(const lebai_interfaces__msg__GripperStatus__Sequence * lhs, const lebai_interfaces__msg__GripperStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__GripperStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__GripperStatus__Sequence__copy(
  const lebai_interfaces__msg__GripperStatus__Sequence * input,
  lebai_interfaces__msg__GripperStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__GripperStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__GripperStatus * data =
      (lebai_interfaces__msg__GripperStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__GripperStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__GripperStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__GripperStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
