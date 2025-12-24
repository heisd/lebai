// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/srv/detail/move_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveJoint_Request_common
{
public:
  explicit Init_MoveJoint_Request_common(::lebai_interfaces::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::srv::MoveJoint_Request common(::lebai_interfaces::srv::MoveJoint_Request::_common_type arg)
  {
    msg_.common = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_cartesian_pose
{
public:
  explicit Init_MoveJoint_Request_cartesian_pose(::lebai_interfaces::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Request_common cartesian_pose(::lebai_interfaces::srv::MoveJoint_Request::_cartesian_pose_type arg)
  {
    msg_.cartesian_pose = std::move(arg);
    return Init_MoveJoint_Request_common(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_joint_pose
{
public:
  explicit Init_MoveJoint_Request_joint_pose(::lebai_interfaces::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Request_cartesian_pose joint_pose(::lebai_interfaces::srv::MoveJoint_Request::_joint_pose_type arg)
  {
    msg_.joint_pose = std::move(arg);
    return Init_MoveJoint_Request_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_is_joint_pose
{
public:
  Init_MoveJoint_Request_is_joint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_Request_joint_pose is_joint_pose(::lebai_interfaces::srv::MoveJoint_Request::_is_joint_pose_type arg)
  {
    msg_.is_joint_pose = std::move(arg);
    return Init_MoveJoint_Request_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveJoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::MoveJoint_Request>()
{
  return lebai_interfaces::srv::builder::Init_MoveJoint_Request_is_joint_pose();
}

}  // namespace lebai_interfaces


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveJoint_Response_ret
{
public:
  Init_MoveJoint_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::MoveJoint_Response ret(::lebai_interfaces::srv::MoveJoint_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveJoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::MoveJoint_Response>()
{
  return lebai_interfaces::srv::builder::Init_MoveJoint_Response_ret();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_
