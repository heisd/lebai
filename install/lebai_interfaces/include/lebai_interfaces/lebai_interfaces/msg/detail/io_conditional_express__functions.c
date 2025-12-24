// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/io_conditional_express__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lebai_interfaces__msg__IOConditionalExpress__init(lebai_interfaces__msg__IOConditionalExpress * msg)
{
  if (!msg) {
    return false;
  }
  // group
  // pin
  // type
  // float_value
  // uint_value
  // logic_operation
  return true;
}

void
lebai_interfaces__msg__IOConditionalExpress__fini(lebai_interfaces__msg__IOConditionalExpress * msg)
{
  if (!msg) {
    return;
  }
  // group
  // pin
  // type
  // float_value
  // uint_value
  // logic_operation
}

bool
lebai_interfaces__msg__IOConditionalExpress__are_equal(const lebai_interfaces__msg__IOConditionalExpress * lhs, const lebai_interfaces__msg__IOConditionalExpress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group
  if (lhs->group != rhs->group) {
    return false;
  }
  // pin
  if (lhs->pin != rhs->pin) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // float_value
  if (lhs->float_value != rhs->float_value) {
    return false;
  }
  // uint_value
  if (lhs->uint_value != rhs->uint_value) {
    return false;
  }
  // logic_operation
  if (lhs->logic_operation != rhs->logic_operation) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__msg__IOConditionalExpress__copy(
  const lebai_interfaces__msg__IOConditionalExpress * input,
  lebai_interfaces__msg__IOConditionalExpress * output)
{
  if (!input || !output) {
    return false;
  }
  // group
  output->group = input->group;
  // pin
  output->pin = input->pin;
  // type
  output->type = input->type;
  // float_value
  output->float_value = input->float_value;
  // uint_value
  output->uint_value = input->uint_value;
  // logic_operation
  output->logic_operation = input->logic_operation;
  return true;
}

lebai_interfaces__msg__IOConditionalExpress *
lebai_interfaces__msg__IOConditionalExpress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOConditionalExpress * msg = (lebai_interfaces__msg__IOConditionalExpress *)allocator.allocate(sizeof(lebai_interfaces__msg__IOConditionalExpress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__msg__IOConditionalExpress));
  bool success = lebai_interfaces__msg__IOConditionalExpress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__msg__IOConditionalExpress__destroy(lebai_interfaces__msg__IOConditionalExpress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__msg__IOConditionalExpress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__init(lebai_interfaces__msg__IOConditionalExpress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOConditionalExpress * data = NULL;

  if (size) {
    data = (lebai_interfaces__msg__IOConditionalExpress *)allocator.zero_allocate(size, sizeof(lebai_interfaces__msg__IOConditionalExpress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__msg__IOConditionalExpress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__msg__IOConditionalExpress__fini(&data[i - 1]);
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
lebai_interfaces__msg__IOConditionalExpress__Sequence__fini(lebai_interfaces__msg__IOConditionalExpress__Sequence * array)
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
      lebai_interfaces__msg__IOConditionalExpress__fini(&array->data[i]);
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

lebai_interfaces__msg__IOConditionalExpress__Sequence *
lebai_interfaces__msg__IOConditionalExpress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__msg__IOConditionalExpress__Sequence * array = (lebai_interfaces__msg__IOConditionalExpress__Sequence *)allocator.allocate(sizeof(lebai_interfaces__msg__IOConditionalExpress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__msg__IOConditionalExpress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__msg__IOConditionalExpress__Sequence__destroy(lebai_interfaces__msg__IOConditionalExpress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__msg__IOConditionalExpress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__are_equal(const lebai_interfaces__msg__IOConditionalExpress__Sequence * lhs, const lebai_interfaces__msg__IOConditionalExpress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__msg__IOConditionalExpress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__copy(
  const lebai_interfaces__msg__IOConditionalExpress__Sequence * input,
  lebai_interfaces__msg__IOConditionalExpress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__msg__IOConditionalExpress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__msg__IOConditionalExpress * data =
      (lebai_interfaces__msg__IOConditionalExpress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__msg__IOConditionalExpress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__msg__IOConditionalExpress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__msg__IOConditionalExpress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
