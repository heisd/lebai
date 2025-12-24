// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:srv/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/srv/detail/move_circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveCircle_Request_common
{
public:
  explicit Init_MoveCircle_Request_common(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::srv::MoveCircle_Request common(::lebai_interfaces::srv::MoveCircle_Request::_common_type arg)
  {
    msg_.common = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_circle_angle
{
public:
  explicit Init_MoveCircle_Request_circle_angle(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_common circle_angle(::lebai_interfaces::srv::MoveCircle_Request::_circle_angle_type arg)
  {
    msg_.circle_angle = std::move(arg);
    return Init_MoveCircle_Request_common(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_end_point_cartesian_pose
{
public:
  explicit Init_MoveCircle_Request_end_point_cartesian_pose(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_circle_angle end_point_cartesian_pose(::lebai_interfaces::srv::MoveCircle_Request::_end_point_cartesian_pose_type arg)
  {
    msg_.end_point_cartesian_pose = std::move(arg);
    return Init_MoveCircle_Request_circle_angle(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_end_point_joint_pose
{
public:
  explicit Init_MoveCircle_Request_end_point_joint_pose(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_end_point_cartesian_pose end_point_joint_pose(::lebai_interfaces::srv::MoveCircle_Request::_end_point_joint_pose_type arg)
  {
    msg_.end_point_joint_pose = std::move(arg);
    return Init_MoveCircle_Request_end_point_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_end_point_is_joint_pose
{
public:
  explicit Init_MoveCircle_Request_end_point_is_joint_pose(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_end_point_joint_pose end_point_is_joint_pose(::lebai_interfaces::srv::MoveCircle_Request::_end_point_is_joint_pose_type arg)
  {
    msg_.end_point_is_joint_pose = std::move(arg);
    return Init_MoveCircle_Request_end_point_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_way_point_cartesian_pose
{
public:
  explicit Init_MoveCircle_Request_way_point_cartesian_pose(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_end_point_is_joint_pose way_point_cartesian_pose(::lebai_interfaces::srv::MoveCircle_Request::_way_point_cartesian_pose_type arg)
  {
    msg_.way_point_cartesian_pose = std::move(arg);
    return Init_MoveCircle_Request_end_point_is_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_way_point_joint_pose
{
public:
  explicit Init_MoveCircle_Request_way_point_joint_pose(::lebai_interfaces::srv::MoveCircle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveCircle_Request_way_point_cartesian_pose way_point_joint_pose(::lebai_interfaces::srv::MoveCircle_Request::_way_point_joint_pose_type arg)
  {
    msg_.way_point_joint_pose = std::move(arg);
    return Init_MoveCircle_Request_way_point_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

class Init_MoveCircle_Request_way_point_is_joint_pose
{
public:
  Init_MoveCircle_Request_way_point_is_joint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCircle_Request_way_point_joint_pose way_point_is_joint_pose(::lebai_interfaces::srv::MoveCircle_Request::_way_point_is_joint_pose_type arg)
  {
    msg_.way_point_is_joint_pose = std::move(arg);
    return Init_MoveCircle_Request_way_point_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::MoveCircle_Request>()
{
  return lebai_interfaces::srv::builder::Init_MoveCircle_Request_way_point_is_joint_pose();
}

}  // namespace lebai_interfaces


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveCircle_Response_ret
{
public:
  Init_MoveCircle_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::MoveCircle_Response ret(::lebai_interfaces::srv::MoveCircle_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::MoveCircle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::MoveCircle_Response>()
{
  return lebai_interfaces::srv::builder::Init_MoveCircle_Response_ret();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__BUILDER_HPP_
