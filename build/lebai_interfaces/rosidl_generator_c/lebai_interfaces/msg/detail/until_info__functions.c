// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/until_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `io_express`
#include "lebai_interfaces/msg/detail/io_conditional_express__functions.h"

bool
lebai_interfaces__msg__UntilInfo__init(lebai_interfaces__msg__UntilInfo * msg)
{
  if (!msg) {
    return false;
  }
  // io_express_logic
  // io_express
  if (!lebai_interfaces__msg__IOConditionalExpress__Sequence__init(&msg->io_express, 0)) {
    lebai_interfaces__msg__UntilInfo__fini(msg);
    return false;
  }
  return true;
}

void
lebai_interfaces__msg__UntilInfo__fini(lebai_interfaces__msg__UntilInfo * msg)
{
  if (!msg) {
    return;
  }
  // io_express_logic
  // io_express
  lebai_interfaces__msg__IOConditionalExpress__Sequence__fini(&msg->io_express);
}

bool
lebai_interfaces__msg__UntilInfo__are_equal(const lebai_interfaces__msg__UntilInfo * lhs, const lebai_interfaces__msg__UntilInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // io_express_logic
  if (lhs->io_express_logic != rhs->io_express_logic) {
    return false;
  }
  // io_express
  if (!lebai_interfaces__msg__IOConditionalExpress__Sequence__are_equal(
      &(lhs->io_express), &(rhs->io_express)))
  {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__UntilInfo__copy(
  const lebai_interfaces__msg__UntilInfo * input,
  lebai_interfaces__msg__UntilInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // io_express_logic
  output->io_express_logic = input->io_express_logic;
  // io_express
  if (!lebai_interfaces__msg__IOConditionalExpress__Sequence__copy(
      &(input->io_express), &(output->io_express)))
  {
    return false;
  }
  return true;
}

lebai_interfaces__msg__UntilInfo *
lebai_interfaces__msg__UntilInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__UntilInfo * msg = (lebai_interfaces__msg__UntilInfo *)allocator.allocate(sizeof(lebai_interfaces__msg__UntilInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__UntilInfo));
  bool success = lebai_interfaces__msg__UntilInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__UntilInfo__destroy(lebai_interfaces__msg__UntilInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__UntilInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__UntilInfo__Sequence__init(lebai_interfaces__msg__UntilInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__UntilInfo * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__UntilInfo *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__UntilInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__UntilInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__UntilInfo__fini(&data[i - 1]);
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
lebai_interfaces__msg__UntilInfo__Sequence__fini(lebai_interfaces__msg__UntilInfo__Sequence * array)
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
      lebai_interfaces__msg__UntilInfo__fini(&array->data[i]);
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

lebai_interfaces__msg__UntilInfo__Sequence *
lebai_interfaces__msg__UntilInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__UntilInfo__Sequence * array = (lebai_interfaces__msg__UntilInfo__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__UntilInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__UntilInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__UntilInfo__Sequence__destroy(lebai_interfaces__msg__UntilInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__UntilInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__UntilInfo__Sequence__are_equal(const lebai_interfaces__msg__UntilInfo__Sequence * lhs, const lebai_interfaces__msg__UntilInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__UntilInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__UntilInfo__Sequence__copy(
  const lebai_interfaces__msg__UntilInfo__Sequence * input,
  lebai_interfaces__msg__UntilInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__UntilInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__UntilInfo * data =
      (lebai_interfaces__msg__UntilInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__UntilInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__UntilInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__UntilInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
