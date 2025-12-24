// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lebai_interfaces/msg/detail/io_status__struct.hpp"
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

void IOStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lebai_interfaces::msg::IOStatus(_init);
}

void IOStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lebai_interfaces::msg::IOStatus *>(message_memory);
  typed_message->~IOStatus();
}

size_t size_function__IOStatus__robot_din(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__robot_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__robot_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__robot_din(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__robot_dout(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__robot_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__robot_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__robot_dout(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__robot_ain(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__robot_ain(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__robot_ain(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__robot_ain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IOStatus__robot_ain(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__robot_ain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IOStatus__robot_ain(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__robot_ain(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__robot_aout(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__robot_aout(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__robot_aout(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__robot_aout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IOStatus__robot_aout(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__robot_aout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IOStatus__robot_aout(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__robot_aout(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__robot_ain_type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__robot_ain_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__robot_ain_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__robot_ain_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__IOStatus__robot_ain_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__robot_ain_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__IOStatus__robot_ain_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__robot_ain_type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__robot_aout_type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__robot_aout_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__robot_aout_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__robot_aout_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__IOStatus__robot_aout_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__robot_aout_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__IOStatus__robot_aout_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__robot_aout_type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__flange_din(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__flange_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__flange_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__flange_din(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__flange_dout(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__flange_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__flange_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__flange_dout(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__extend_din(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__extend_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__extend_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__extend_din(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__extend_dout(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOStatus__extend_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOStatus__extend_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOStatus__extend_dout(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__extend_ain(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__extend_ain(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__extend_ain(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__extend_ain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IOStatus__extend_ain(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__extend_ain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IOStatus__extend_ain(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__extend_ain(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOStatus__extend_aout(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOStatus__extend_aout(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IOStatus__extend_aout(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOStatus__extend_aout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IOStatus__extend_aout(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IOStatus__extend_aout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IOStatus__extend_aout(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__IOStatus__extend_aout(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IOStatus_message_member_array[12] = {
  {
    "robot_din",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_din),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_din,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__robot_din,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_din,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_din  // resize(index) function pointer
  },
  {
    "robot_dout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_dout),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_dout,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__robot_dout,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_dout,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_dout  // resize(index) function pointer
  },
  {
    "robot_ain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_ain),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_ain,  // size() function pointer
    get_const_function__IOStatus__robot_ain,  // get_const(index) function pointer
    get_function__IOStatus__robot_ain,  // get(index) function pointer
    fetch_function__IOStatus__robot_ain,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_ain,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_ain  // resize(index) function pointer
  },
  {
    "robot_aout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_aout),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_aout,  // size() function pointer
    get_const_function__IOStatus__robot_aout,  // get_const(index) function pointer
    get_function__IOStatus__robot_aout,  // get(index) function pointer
    fetch_function__IOStatus__robot_aout,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_aout,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_aout  // resize(index) function pointer
  },
  {
    "robot_ain_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_ain_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_ain_type,  // size() function pointer
    get_const_function__IOStatus__robot_ain_type,  // get_const(index) function pointer
    get_function__IOStatus__robot_ain_type,  // get(index) function pointer
    fetch_function__IOStatus__robot_ain_type,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_ain_type,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_ain_type  // resize(index) function pointer
  },
  {
    "robot_aout_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, robot_aout_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__robot_aout_type,  // size() function pointer
    get_const_function__IOStatus__robot_aout_type,  // get_const(index) function pointer
    get_function__IOStatus__robot_aout_type,  // get(index) function pointer
    fetch_function__IOStatus__robot_aout_type,  // fetch(index, &value) function pointer
    assign_function__IOStatus__robot_aout_type,  // assign(index, value) function pointer
    resize_function__IOStatus__robot_aout_type  // resize(index) function pointer
  },
  {
    "flange_din",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, flange_din),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__flange_din,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__flange_din,  // fetch(index, &value) function pointer
    assign_function__IOStatus__flange_din,  // assign(index, value) function pointer
    resize_function__IOStatus__flange_din  // resize(index) function pointer
  },
  {
    "flange_dout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, flange_dout),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__flange_dout,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__flange_dout,  // fetch(index, &value) function pointer
    assign_function__IOStatus__flange_dout,  // assign(index, value) function pointer
    resize_function__IOStatus__flange_dout  // resize(index) function pointer
  },
  {
    "extend_din",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, extend_din),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__extend_din,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__extend_din,  // fetch(index, &value) function pointer
    assign_function__IOStatus__extend_din,  // assign(index, value) function pointer
    resize_function__IOStatus__extend_din  // resize(index) function pointer
  },
  {
    "extend_dout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, extend_dout),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__extend_dout,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOStatus__extend_dout,  // fetch(index, &value) function pointer
    assign_function__IOStatus__extend_dout,  // assign(index, value) function pointer
    resize_function__IOStatus__extend_dout  // resize(index) function pointer
  },
  {
    "extend_ain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, extend_ain),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__extend_ain,  // size() function pointer
    get_const_function__IOStatus__extend_ain,  // get_const(index) function pointer
    get_function__IOStatus__extend_ain,  // get(index) function pointer
    fetch_function__IOStatus__extend_ain,  // fetch(index, &value) function pointer
    assign_function__IOStatus__extend_ain,  // assign(index, value) function pointer
    resize_function__IOStatus__extend_ain  // resize(index) function pointer
  },
  {
    "extend_aout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces::msg::IOStatus, extend_aout),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOStatus__extend_aout,  // size() function pointer
    get_const_function__IOStatus__extend_aout,  // get_const(index) function pointer
    get_function__IOStatus__extend_aout,  // get(index) function pointer
    fetch_function__IOStatus__extend_aout,  // fetch(index, &value) function pointer
    assign_function__IOStatus__extend_aout,  // assign(index, value) function pointer
    resize_function__IOStatus__extend_aout  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IOStatus_message_members = {
  "lebai_interfaces::msg",  // message namespace
  "IOStatus",  // message name
  12,  // number of fields
  sizeof(lebai_interfaces::msg::IOStatus),
  IOStatus_message_member_array,  // message members
  IOStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  IOStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IOStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IOStatus_message_members,
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
get_message_type_support_handle<lebai_interfaces::msg::IOStatus>()
{
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::IOStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lebai_interfaces, msg, IOStatus)() {
  return &::lebai_interfaces::msg::rosidl_typesupport_introspection_cpp::IOStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
