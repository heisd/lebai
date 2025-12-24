// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lebai_interfaces/msg/detail/until_info__struct.hpp"
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

void UntilInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lebai_interfaces::msg::UntilInfo(_init);
}

void UntilInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lebai_interfaces::msg::UntilInfo *>(message_memory);
  typed_message->~UntilInfo();
}

size_t size_function__UntilInfo__io_express(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lebai_interfaces::msg::IOConditionalExpress> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UntilInfo__io_express(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lebai_interfaces::msg::IOConditionalExpress> *>(untyped_member);
  return &member[index];
}

void * get_function__UntilInfo__io_express(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lebai_interfaces::msg::IOConditionalExpress> *>(untyped_member);
  return &member[index];
}

void fetch_function__UntilInfo__io_express(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lebai_interfaces::msg::IOConditionalExpress *>(
    get_const_function__UntilInfo__io_express(untyped_member, index));
  auto & value = *reinterpret_cast<lebai_interfaces::msg::IOConditionalExpress *>(untyped_value);
  value = item;
}

void assign_function__UntilInfo__io_express(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lebai_interfaces::msg::IOConditionalExpress *>(
    get_function__UntilInfo__io_express(untyped_member, index));
  const auto & value = *reinterpret_cast<const lebai_interfaces::msg::IOConditionalExpress *>(untyped_value);
  item = value;
}

void resize_function__UntilInfo__io_express(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lebai_interfaces::msg::IOConditionalExpress> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UntilInfo_message_member_array[2] = {
  {
    "io_express_logic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::UntilInfo, io_express_logic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "io_express",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lebai_interfaces::msg::IOConditionalExpress>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::UntilInfo, io_express),  // bytes offset in struct
    nullptr,  // default value
    size_function__UntilInfo__io_express,  // size() function pointer
    get_const_function__UntilInfo__io_express,  // get_const(index) function pointer
    get_function__UntilInfo__io_express,  // get(index) function pointer
    fetch_function__UntilInfo__io_express,  // fetch(index, &value) function pointer
    assign_function__UntilInfo__io_express,  // assign(index, value) function pointer
    resize_function__UntilInfo__io_express  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UntilInfo_message_members = {
  "lebai_interfaces::msg",  // message namespace
  "UntilInfo",  // message name
  2,  // number of fields
  sizeof(lebai_interfaces::msg::UntilInfo),
  UntilInfo_message_member_array,  // message members
  UntilInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  UntilInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UntilInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UntilInfo_message_members,
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
get_message_type_support_handle<lebai_interfaces::msg::UntilInfo>()
{
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::UntilInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lebai_interfaces, msg, UntilInfo)() {
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::UntilInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
