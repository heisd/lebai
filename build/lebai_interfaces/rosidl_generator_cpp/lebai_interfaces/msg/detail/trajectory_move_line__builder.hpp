// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveLine.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_LINE__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/trajectory_move_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajectoryMoveLine_cartesian_pose
{
public:
  explicit Init_TrajectoryMoveLine_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveLine & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::TrajectoryMoveLine cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveLine::_cartesian_pose_type arg)
  {
    msg_.cartesian_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveLine msg_;
};

class Init_TrajectoryMoveLine_joint_pose
{
public:
  explicit Init_TrajectoryMoveLine_joint_pose(::lebai_interfaces::msg::TrajectoryMoveLine & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveLine_cartesian_pose joint_pose(::lebai_interfaces::msg::TrajectoryMoveLine::_joint_pose_type arg)
  {
    msg_.joint_pose = std::move(arg);
    return Init_TrajectoryMoveLine_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveLine msg_;
};

class Init_TrajectoryMoveLine_is_joint_pose
{
public:
  explicit Init_TrajectoryMoveLine_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveLine & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveLine_joint_pose is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveLine::_is_joint_pose_type arg)
  {
    msg_.is_joint_pose = std::move(arg);
    return Init_TrajectoryMoveLine_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveLine msg_;
};

class Init_TrajectoryMoveLine_common
{
public:
  Init_TrajectoryMoveLine_common()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryMoveLine_is_joint_pose common(::lebai_interfaces::msg::TrajectoryMoveLine::_common_type arg)
  {
    msg_.common = std::move(arg);
    return Init_TrajectoryMoveLine_is_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::TrajectoryMoveLine>()
{
  return lebai_interfaces::msg::builder::Init_TrajectoryMoveLine_common();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_LINE__BUILDER_HPP_
