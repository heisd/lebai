// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/TriState.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/tri_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lebai_interfaces__msg__TriState__init(lebai_interfaces__msg__TriState * msg)
{
  if (!msg) {
    return false;
  }
  // val
  return true;
}

void
lebai_interfaces__msg__TriState__fini(lebai_interfaces__msg__TriState * msg)
{
  if (!msg) {
    return;
  }
  // val
}

bool
lebai_interfaces__msg__TriState__are_equal(const lebai_interfaces__msg__TriState * lhs, const lebai_interfaces__msg__TriState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__TriState__copy(
  const lebai_interfaces__msg__TriState * input,
  lebai_interfaces__msg__TriState * output)
{
  if (!input || !output) {
    return false;
  }
  // val
  output->val = input->val;
  return true;
}

lebai_interfaces__msg__TriState *
lebai_interfaces__msg__TriState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TriState * msg = (lebai_interfaces__msg__TriState *)allocator.allocate(sizeof(lebai_interfaces__msg__TriState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__TriState));
  bool success = lebai_interfaces__msg__TriState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__TriState__destroy(lebai_interfaces__msg__TriState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__TriState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__TriState__Sequence__init(lebai_interfaces__msg__TriState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TriState * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__TriState *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__TriState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__TriState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__TriState__fini(&data[i - 1]);
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
lebai_interfaces__msg__TriState__Sequence__fini(lebai_interfaces__msg__TriState__Sequence * array)
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
      lebai_interfaces__msg__TriState__fini(&array->data[i]);
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

lebai_interfaces__msg__TriState__Sequence *
lebai_interfaces__msg__TriState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__TriState__Sequence * array = (lebai_interfaces__msg__TriState__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__TriState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__TriState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__TriState__Sequence__destroy(lebai_interfaces__msg__TriState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__TriState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__TriState__Sequence__are_equal(const lebai_interfaces__msg__TriState__Sequence * lhs, const lebai_interfaces__msg__TriState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__TriState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__TriState__Sequence__copy(
  const lebai_interfaces__msg__TriState__Sequence * input,
  lebai_interfaces__msg__TriState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__TriState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__TriState * data =
      (lebai_interfaces__msg__TriState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__TriState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__TriState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__TriState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
