// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lebai_interfaces:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lebai_interfaces/msg/detail/gripper_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lebai_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lebai_interfaces::msg::GripperStatus(_init);
}

void GripperStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lebai_interfaces::msg::GripperStatus *>(message_memory);
  typed_message->~GripperStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperStatus_message_member_array[2] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::GripperStatus, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::GripperStatus, force),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperStatus_message_members = {
  "lebai_interfaces::msg",  // message namespace
  "GripperStatus",  // message name
  2,  // number of fields
  sizeof(lebai_interfaces::msg::GripperStatus),
  GripperStatus_message_member_array,  // message members
  GripperStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lebai_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lebai_interfaces::msg::GripperStatus>()
{
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::GripperStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lebai_interfaces, msg, GripperStatus)() {
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::GripperStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
