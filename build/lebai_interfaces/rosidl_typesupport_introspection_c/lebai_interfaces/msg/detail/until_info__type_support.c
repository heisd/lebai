// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lebai_interfaces/msg/detail/until_info__rosidl_typesupport_introspection_c.h"
#include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lebai_interfaces/msg/detail/until_info__functions.h"
#include "lebai_interfaces/msg/detail/until_info__struct.h"


// Include directives for member types
// Member `io_express`
#include "lebai_interfaces/msg/io_conditional_express.h"
// Member `io_express`
#include "lebai_interfaces/msg/detail/io_conditional_express__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__msg__UntilInfo__init(message_memory);
}

void lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_fini_function(void * message_memory)
{
  lebai_interfaces__msg__UntilInfo__fini(message_memory);
}

size_t lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__size_function__UntilInfo__io_express(
  const void * untyped_member)
{
  const lebai_interfaces__msg__IOConditionalExpress__Sequence * member =
    (const lebai_interfaces__msg__IOConditionalExpress__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_const_function__UntilInfo__io_express(
  const void * untyped_member, size_t index)
{
  const lebai_interfaces__msg__IOConditionalExpress__Sequence * member =
    (const lebai_interfaces__msg__IOConditionalExpress__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_function__UntilInfo__io_express(
  void * untyped_member, size_t index)
{
  lebai_interfaces__msg__IOConditionalExpress__Sequence * member =
    (lebai_interfaces__msg__IOConditionalExpress__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__fetch_function__UntilInfo__io_express(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lebai_interfaces__msg__IOConditionalExpress * item =
    ((const lebai_interfaces__msg__IOConditionalExpress *)
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_const_function__UntilInfo__io_express(untyped_member, index));
  lebai_interfaces__msg__IOConditionalExpress * value =
    (lebai_interfaces__msg__IOConditionalExpress *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__assign_function__UntilInfo__io_express(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lebai_interfaces__msg__IOConditionalExpress * item =
    ((lebai_interfaces__msg__IOConditionalExpress *)
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_function__UntilInfo__io_express(untyped_member, index));
  const lebai_interfaces__msg__IOConditionalExpress * value =
    (const lebai_interfaces__msg__IOConditionalExpress *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__resize_function__UntilInfo__io_express(
  void * untyped_member, size_t size)
{
  lebai_interfaces__msg__IOConditionalExpress__Sequence * member =
    (lebai_interfaces__msg__IOConditionalExpress__Sequence *)(untyped_member);
  lebai_interfaces__msg__IOConditionalExpress__Sequence__fini(member);
  return lebai_interfaces__msg__IOConditionalExpress__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_member_array[2] = {
  {
    "io_express_logic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__UntilInfo, io_express_logic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "io_express",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__UntilInfo, io_express),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__size_function__UntilInfo__io_express,  // size() function pointer
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_const_function__UntilInfo__io_express,  // get_const(index) function pointer
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__get_function__UntilInfo__io_express,  // get(index) function pointer
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__fetch_function__UntilInfo__io_express,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__assign_function__UntilInfo__io_express,  // assign(index, value) function pointer
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__resize_function__UntilInfo__io_express  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_members = {
  "lebai_interfaces__msg",  // message namespace
  "UntilInfo",  // message name
  2,  // number of fields
  sizeof(lebai_interfaces__msg__UntilInfo),
  lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_member_array,  // message members
  lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_type_support_handle = {
  0,
  &lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, UntilInfo)() {
  lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, IOConditionalExpress)();
  if (!lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__msg__UntilInfo__rosidl_typesupport_introspection_c__UntilInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
