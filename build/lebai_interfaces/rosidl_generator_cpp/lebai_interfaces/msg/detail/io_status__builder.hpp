// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/io_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_IOStatus_extend_aout
{
public:
  explicit Init_IOStatus_extend_aout(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::IOStatus extend_aout(::lebai_interfaces::msg::IOStatus::_extend_aout_type arg)
  {
    msg_.extend_aout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_extend_ain
{
public:
  explicit Init_IOStatus_extend_ain(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_extend_aout extend_ain(::lebai_interfaces::msg::IOStatus::_extend_ain_type arg)
  {
    msg_.extend_ain = std::move(arg);
    return Init_IOStatus_extend_aout(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_extend_dout
{
public:
  explicit Init_IOStatus_extend_dout(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_extend_ain extend_dout(::lebai_interfaces::msg::IOStatus::_extend_dout_type arg)
  {
    msg_.extend_dout = std::move(arg);
    return Init_IOStatus_extend_ain(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_extend_din
{
public:
  explicit Init_IOStatus_extend_din(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_extend_dout extend_din(::lebai_interfaces::msg::IOStatus::_extend_din_type arg)
  {
    msg_.extend_din = std::move(arg);
    return Init_IOStatus_extend_dout(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_flange_dout
{
public:
  explicit Init_IOStatus_flange_dout(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_extend_din flange_dout(::lebai_interfaces::msg::IOStatus::_flange_dout_type arg)
  {
    msg_.flange_dout = std::move(arg);
    return Init_IOStatus_extend_din(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_flange_din
{
public:
  explicit Init_IOStatus_flange_din(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_flange_dout flange_din(::lebai_interfaces::msg::IOStatus::_flange_din_type arg)
  {
    msg_.flange_din = std::move(arg);
    return Init_IOStatus_flange_dout(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_aout_type
{
public:
  explicit Init_IOStatus_robot_aout_type(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_flange_din robot_aout_type(::lebai_interfaces::msg::IOStatus::_robot_aout_type_type arg)
  {
    msg_.robot_aout_type = std::move(arg);
    return Init_IOStatus_flange_din(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_ain_type
{
public:
  explicit Init_IOStatus_robot_ain_type(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_robot_aout_type robot_ain_type(::lebai_interfaces::msg::IOStatus::_robot_ain_type_type arg)
  {
    msg_.robot_ain_type = std::move(arg);
    return Init_IOStatus_robot_aout_type(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_aout
{
public:
  explicit Init_IOStatus_robot_aout(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_robot_ain_type robot_aout(::lebai_interfaces::msg::IOStatus::_robot_aout_type arg)
  {
    msg_.robot_aout = std::move(arg);
    return Init_IOStatus_robot_ain_type(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_ain
{
public:
  explicit Init_IOStatus_robot_ain(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_robot_aout robot_ain(::lebai_interfaces::msg::IOStatus::_robot_ain_type arg)
  {
    msg_.robot_ain = std::move(arg);
    return Init_IOStatus_robot_aout(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_dout
{
public:
  explicit Init_IOStatus_robot_dout(::lebai_interfaces::msg::IOStatus & msg)
  : msg_(msg)
  {}
  Init_IOStatus_robot_ain robot_dout(::lebai_interfaces::msg::IOStatus::_robot_dout_type arg)
  {
    msg_.robot_dout = std::move(arg);
    return Init_IOStatus_robot_ain(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

class Init_IOStatus_robot_din
{
public:
  Init_IOStatus_robot_din()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOStatus_robot_dout robot_din(::lebai_interfaces::msg::IOStatus::_robot_din_type arg)
  {
    msg_.robot_din = std::move(arg);
    return Init_IOStatus_robot_dout(msg_);
  }

private:
  ::lebai_interfaces::msg::IOStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::IOStatus>()
{
  return lebai_interfaces::msg::builder::Init_IOStatus_robot_din();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__BUILDER_HPP_
