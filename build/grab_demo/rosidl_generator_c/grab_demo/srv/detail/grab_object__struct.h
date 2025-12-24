// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_H_
#define GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_link'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GrabObject in the package grab_demo.
typedef struct grab_demo__srv__GrabObject_Request
{
  rosidl_runtime_c__String obj_link;
} grab_demo__srv__GrabObject_Request;

// Struct for a sequence of grab_demo__srv__GrabObject_Request.
typedef struct grab_demo__srv__GrabObject_Request__Sequence
{
  grab_demo__srv__GrabObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab_demo__srv__GrabObject_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GrabObject in the package grab_demo.
typedef struct grab_demo__srv__GrabObject_Response
{
  uint8_t structure_needs_at_least_one_member;
} grab_demo__srv__GrabObject_Response;

// Struct for a sequence of grab_demo__srv__GrabObject_Response.
typedef struct grab_demo__srv__GrabObject_Response__Sequence
{
  grab_demo__srv__GrabObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab_demo__srv__GrabObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_H_
