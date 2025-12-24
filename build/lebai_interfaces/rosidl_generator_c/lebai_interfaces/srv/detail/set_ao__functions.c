// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lebai_interfaces:srv/SetAO.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/srv/detail/set_ao__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lebai_interfaces__srv__SetAO_Request__init(lebai_interfaces__srv__SetAO_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pin
  // value
  return true;
}

void
lebai_interfaces__srv__SetAO_Request__fini(lebai_interfaces__srv__SetAO_Request * msg)
{
  if (!msg) {
    return;
  }
  // pin
  // value
}

bool
lebai_interfaces__srv__SetAO_Request__are_equal(const lebai_interfaces__srv__SetAO_Request * lhs, const lebai_interfaces__srv__SetAO_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pin
  if (lhs->pin != rhs->pin) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__srv__SetAO_Request__copy(
  const lebai_interfaces__srv__SetAO_Request * input,
  lebai_interfaces__srv__SetAO_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pin
  output->pin = input->pin;
  // value
  output->value = input->value;
  return true;
}

lebai_interfaces__srv__SetAO_Request *
lebai_interfaces__srv__SetAO_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Request * msg = (lebai_interfaces__srv__SetAO_Request *)allocator.allocate(sizeof(lebai_interfaces__srv__SetAO_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__srv__SetAO_Request));
  bool success = lebai_interfaces__srv__SetAO_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__srv__SetAO_Request__destroy(lebai_interfaces__srv__SetAO_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__srv__SetAO_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__srv__SetAO_Request__Sequence__init(lebai_interfaces__srv__SetAO_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Request * data = NULL;

  if (size) {
    data = (lebai_interfaces__srv__SetAO_Request *)allocator.zero_allocate(size, sizeof(lebai_interfaces__srv__SetAO_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__srv__SetAO_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__srv__SetAO_Request__fini(&data[i - 1]);
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
lebai_interfaces__srv__SetAO_Request__Sequence__fini(lebai_interfaces__srv__SetAO_Request__Sequence * array)
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
      lebai_interfaces__srv__SetAO_Request__fini(&array->data[i]);
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

lebai_interfaces__srv__SetAO_Request__Sequence *
lebai_interfaces__srv__SetAO_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Request__Sequence * array = (lebai_interfaces__srv__SetAO_Request__Sequence *)allocator.allocate(sizeof(lebai_interfaces__srv__SetAO_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__srv__SetAO_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__srv__SetAO_Request__Sequence__destroy(lebai_interfaces__srv__SetAO_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__srv__SetAO_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__srv__SetAO_Request__Sequence__are_equal(const lebai_interfaces__srv__SetAO_Request__Sequence * lhs, const lebai_interfaces__srv__SetAO_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__srv__SetAO_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__srv__SetAO_Request__Sequence__copy(
  const lebai_interfaces__srv__SetAO_Request__Sequence * input,
  lebai_interfaces__srv__SetAO_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__srv__SetAO_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__srv__SetAO_Request * data =
      (lebai_interfaces__srv__SetAO_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__srv__SetAO_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__srv__SetAO_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__srv__SetAO_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lebai_interfaces__srv__SetAO_Response__init(lebai_interfaces__srv__SetAO_Response * msg)
{
  if (!msg) {
    return false;
  }
  // code
  return true;
}

void
lebai_interfaces__srv__SetAO_Response__fini(lebai_interfaces__srv__SetAO_Response * msg)
{
  if (!msg) {
    return;
  }
  // code
}

bool
lebai_interfaces__srv__SetAO_Response__are_equal(const lebai_interfaces__srv__SetAO_Response * lhs, const lebai_interfaces__srv__SetAO_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
lebai_interfaces__srv__SetAO_Response__copy(
  const lebai_interfaces__srv__SetAO_Response * input,
  lebai_interfaces__srv__SetAO_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

lebai_interfaces__srv__SetAO_Response *
lebai_interfaces__srv__SetAO_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Response * msg = (lebai_interfaces__srv__SetAO_Response *)allocator.allocate(sizeof(lebai_interfaces__srv__SetAO_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lebai_interfaces__srv__SetAO_Response));
  bool success = lebai_interfaces__srv__SetAO_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lebai_interfaces__srv__SetAO_Response__destroy(lebai_interfaces__srv__SetAO_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lebai_interfaces__srv__SetAO_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lebai_interfaces__srv__SetAO_Response__Sequence__init(lebai_interfaces__srv__SetAO_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Response * data = NULL;

  if (size) {
    data = (lebai_interfaces__srv__SetAO_Response *)allocator.zero_allocate(size, sizeof(lebai_interfaces__srv__SetAO_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lebai_interfaces__srv__SetAO_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lebai_interfaces__srv__SetAO_Response__fini(&data[i - 1]);
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
lebai_interfaces__srv__SetAO_Response__Sequence__fini(lebai_interfaces__srv__SetAO_Response__Sequence * array)
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
      lebai_interfaces__srv__SetAO_Response__fini(&array->data[i]);
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

lebai_interfaces__srv__SetAO_Response__Sequence *
lebai_interfaces__srv__SetAO_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lebai_interfaces__srv__SetAO_Response__Sequence * array = (lebai_interfaces__srv__SetAO_Response__Sequence *)allocator.allocate(sizeof(lebai_interfaces__srv__SetAO_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lebai_interfaces__srv__SetAO_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lebai_interfaces__srv__SetAO_Response__Sequence__destroy(lebai_interfaces__srv__SetAO_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lebai_interfaces__srv__SetAO_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lebai_interfaces__srv__SetAO_Response__Sequence__are_equal(const lebai_interfaces__srv__SetAO_Response__Sequence * lhs, const lebai_interfaces__srv__SetAO_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lebai_interfaces__srv__SetAO_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lebai_interfaces__srv__SetAO_Response__Sequence__copy(
  const lebai_interfaces__srv__SetAO_Response__Sequence * input,
  lebai_interfaces__srv__SetAO_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lebai_interfaces__srv__SetAO_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lebai_interfaces__srv__SetAO_Response * data =
      (lebai_interfaces__srv__SetAO_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lebai_interfaces__srv__SetAO_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lebai_interfaces__srv__SetAO_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lebai_interfaces__srv__SetAO_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
