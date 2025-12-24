// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice
#include "grab_demo/srv/detail/grab_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `obj_link`
#include "rosidl_runtime_c/string_functions.h"

bool
grab_demo__srv__GrabObject_Request__init(grab_demo__srv__GrabObject_Request * msg)
{
  if (!msg) {
    return false;
  }
  // obj_link
  if (!rosidl_runtime_c__String__init(&msg->obj_link)) {
    grab_demo__srv__GrabObject_Request__fini(msg);
    return false;
  }
  return true;
}

void
grab_demo__srv__GrabObject_Request__fini(grab_demo__srv__GrabObject_Request * msg)
{
  if (!msg) {
    return;
  }
  // obj_link
  rosidl_runtime_c__String__fini(&msg->obj_link);
}

bool
grab_demo__srv__GrabObject_Request__are_equal(const grab_demo__srv__GrabObject_Request * lhs, const grab_demo__srv__GrabObject_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obj_link), &(rhs->obj_link)))
  {
    return false;
  }
  return true;
}

bool
grab_demo__srv__GrabObject_Request__copy(
  const grab_demo__srv__GrabObject_Request * input,
  grab_demo__srv__GrabObject_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_link
  if (!rosidl_runtime_c__String__copy(
      &(input->obj_link), &(output->obj_link)))
  {
    return false;
  }
  return true;
}

grab_demo__srv__GrabObject_Request *
grab_demo__srv__GrabObject_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Request * msg = (grab_demo__srv__GrabObject_Request *)allocator.allocate(sizeof(grab_demo__srv__GrabObject_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grab_demo__srv__GrabObject_Request));
  bool success = grab_demo__srv__GrabObject_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
grab_demo__srv__GrabObject_Request__destroy(grab_demo__srv__GrabObject_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    grab_demo__srv__GrabObject_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
grab_demo__srv__GrabObject_Request__Sequence__init(grab_demo__srv__GrabObject_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Request * data = NULL;

  if (size) {
    data = (grab_demo__srv__GrabObject_Request *)allocator.zero_allocate(size, sizeof(grab_demo__srv__GrabObject_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grab_demo__srv__GrabObject_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grab_demo__srv__GrabObject_Request__fini(&data[i - 1]);
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
grab_demo__srv__GrabObject_Request__Sequence__fini(grab_demo__srv__GrabObject_Request__Sequence * array)
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
      grab_demo__srv__GrabObject_Request__fini(&array->data[i]);
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

grab_demo__srv__GrabObject_Request__Sequence *
grab_demo__srv__GrabObject_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Request__Sequence * array = (grab_demo__srv__GrabObject_Request__Sequence *)allocator.allocate(sizeof(grab_demo__srv__GrabObject_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = grab_demo__srv__GrabObject_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
grab_demo__srv__GrabObject_Request__Sequence__destroy(grab_demo__srv__GrabObject_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    grab_demo__srv__GrabObject_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
grab_demo__srv__GrabObject_Request__Sequence__are_equal(const grab_demo__srv__GrabObject_Request__Sequence * lhs, const grab_demo__srv__GrabObject_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!grab_demo__srv__GrabObject_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
grab_demo__srv__GrabObject_Request__Sequence__copy(
  const grab_demo__srv__GrabObject_Request__Sequence * input,
  grab_demo__srv__GrabObject_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(grab_demo__srv__GrabObject_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    grab_demo__srv__GrabObject_Request * data =
      (grab_demo__srv__GrabObject_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!grab_demo__srv__GrabObject_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          grab_demo__srv__GrabObject_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!grab_demo__srv__GrabObject_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
grab_demo__srv__GrabObject_Response__init(grab_demo__srv__GrabObject_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
grab_demo__srv__GrabObject_Response__fini(grab_demo__srv__GrabObject_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
grab_demo__srv__GrabObject_Response__are_equal(const grab_demo__srv__GrabObject_Response * lhs, const grab_demo__srv__GrabObject_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
grab_demo__srv__GrabObject_Response__copy(
  const grab_demo__srv__GrabObject_Response * input,
  grab_demo__srv__GrabObject_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

grab_demo__srv__GrabObject_Response *
grab_demo__srv__GrabObject_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Response * msg = (grab_demo__srv__GrabObject_Response *)allocator.allocate(sizeof(grab_demo__srv__GrabObject_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grab_demo__srv__GrabObject_Response));
  bool success = grab_demo__srv__GrabObject_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
grab_demo__srv__GrabObject_Response__destroy(grab_demo__srv__GrabObject_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    grab_demo__srv__GrabObject_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
grab_demo__srv__GrabObject_Response__Sequence__init(grab_demo__srv__GrabObject_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Response * data = NULL;

  if (size) {
    data = (grab_demo__srv__GrabObject_Response *)allocator.zero_allocate(size, sizeof(grab_demo__srv__GrabObject_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grab_demo__srv__GrabObject_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grab_demo__srv__GrabObject_Response__fini(&data[i - 1]);
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
grab_demo__srv__GrabObject_Response__Sequence__fini(grab_demo__srv__GrabObject_Response__Sequence * array)
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
      grab_demo__srv__GrabObject_Response__fini(&array->data[i]);
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

grab_demo__srv__GrabObject_Response__Sequence *
grab_demo__srv__GrabObject_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  grab_demo__srv__GrabObject_Response__Sequence * array = (grab_demo__srv__GrabObject_Response__Sequence *)allocator.allocate(sizeof(grab_demo__srv__GrabObject_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = grab_demo__srv__GrabObject_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
grab_demo__srv__GrabObject_Response__Sequence__destroy(grab_demo__srv__GrabObject_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    grab_demo__srv__GrabObject_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
grab_demo__srv__GrabObject_Response__Sequence__are_equal(const grab_demo__srv__GrabObject_Response__Sequence * lhs, const grab_demo__srv__GrabObject_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!grab_demo__srv__GrabObject_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
grab_demo__srv__GrabObject_Response__Sequence__copy(
  const grab_demo__srv__GrabObject_Response__Sequence * input,
  grab_demo__srv__GrabObject_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(grab_demo__srv__GrabObject_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    grab_demo__srv__GrabObject_Response * data =
      (grab_demo__srv__GrabObject_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!grab_demo__srv__GrabObject_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          grab_demo__srv__GrabObject_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!grab_demo__srv__GrabObject_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
