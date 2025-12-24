// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/MoveCommon.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__MoveCommon __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__MoveCommon __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveCommon_
{
  using Type = MoveCommon_<ContainerAllocator>;

  explicit MoveCommon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0;
      this->acc = 0.0;
      this->time = 0.0;
      this->radius = 0.0;
    }
  }

  explicit MoveCommon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel = 0.0;
      this->acc = 0.0;
      this->time = 0.0;
      this->radius = 0.0;
    }
  }

  // field types and members
  using _vel_type =
    double;
  _vel_type vel;
  using _acc_type =
    double;
  _acc_type acc;
  using _time_type =
    double;
  _time_type time;
  using _radius_type =
    double;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__vel(
    const double & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__acc(
    const double & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::MoveCommon_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::MoveCommon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::MoveCommon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::MoveCommon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__MoveCommon
    std::shared_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__MoveCommon
    std::shared_ptr<lebai_interfaces::msg::MoveCommon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommon_ & other) const
  {
    if (this->vel != other.vel) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommon_

// alias to use template instance with default allocator
using MoveCommon =
  lebai_interfaces::msg::MoveCommon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_HPP_
