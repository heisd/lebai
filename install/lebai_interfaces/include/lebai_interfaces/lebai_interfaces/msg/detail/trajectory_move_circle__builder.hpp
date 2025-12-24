// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/trajectory_move_circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajectoryMoveCircle_circle_angle
{
public:
  explicit Init_TrajectoryMoveCircle_circle_angle(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::TrajectoryMoveCircle circle_angle(::lebai_interfaces::msg::TrajectoryMoveCircle::_circle_angle_type arg)
  {
    msg_.circle_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_end_point_cartesian_pose
{
public:
  explicit Init_TrajectoryMoveCircle_end_point_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_circle_angle end_point_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_end_point_cartesian_pose_type arg)
  {
    msg_.end_point_cartesian_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_circle_angle(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_end_point_joint_pose
{
public:
  explicit Init_TrajectoryMoveCircle_end_point_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_end_point_cartesian_pose end_point_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_end_point_joint_pose_type arg)
  {
    msg_.end_point_joint_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_end_point_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_end_point_is_joint_pose
{
public:
  explicit Init_TrajectoryMoveCircle_end_point_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_end_point_joint_pose end_point_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_end_point_is_joint_pose_type arg)
  {
    msg_.end_point_is_joint_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_end_point_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_way_point_cartesian_pose
{
public:
  explicit Init_TrajectoryMoveCircle_way_point_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_end_point_is_joint_pose way_point_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_way_point_cartesian_pose_type arg)
  {
    msg_.way_point_cartesian_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_end_point_is_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_way_point_joint_pose
{
public:
  explicit Init_TrajectoryMoveCircle_way_point_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_way_point_cartesian_pose way_point_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_way_point_joint_pose_type arg)
  {
    msg_.way_point_joint_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_way_point_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_way_point_is_joint_pose
{
public:
  explicit Init_TrajectoryMoveCircle_way_point_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveCircle_way_point_joint_pose way_point_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveCircle::_way_point_is_joint_pose_type arg)
  {
    msg_.way_point_is_joint_pose = std::move(arg);
    return Init_TrajectoryMoveCircle_way_point_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

class Init_TrajectoryMoveCircle_common
{
public:
  Init_TrajectoryMoveCircle_common()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryMoveCircle_way_point_is_joint_pose common(::lebai_interfaces::msg::TrajectoryMoveCircle::_common_type arg)
  {
    msg_.common = std::move(arg);
    return Init_TrajectoryMoveCircle_way_point_is_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveCircle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::TrajectoryMoveCircle>()
{
  return lebai_interfaces::msg::builder::Init_TrajectoryMoveCircle_common();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__BUILDER_HPP_
