// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lebai_interfaces/msg/detail/io_conditional_express__rosidl_typesupport_introspection_c.h"
#include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lebai_interfaces/msg/detail/io_conditional_express__functions.h"
#include "lebai_interfaces/msg/detail/io_conditional_express__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__msg__IOConditionalExpress__init(message_memory);
}

void lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_fini_function(void * message_memory)
{
  lebai_interfaces__msg__IOConditionalExpress__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_member_array[6] = {
  {
    "group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, pin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, float_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, uint_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "logic_operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOConditionalExpress, logic_operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_members = {
  "lebai_interfaces__msg",  // message namespace
  "IOConditionalExpress",  // message name
  6,  // number of fields
  sizeof(lebai_interfaces__msg__IOConditionalExpress),
  lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_member_array,  // message members
  lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_type_support_handle = {
  0,
  &lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, IOConditionalExpress)() {
  if (!lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__msg__IOConditionalExpress__rosidl_typesupport_introspection_c__IOConditionalExpress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
