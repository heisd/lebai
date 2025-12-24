// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__IOStatus __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__IOStatus __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOStatus_
{
  using Type = IOStatus_<ContainerAllocator>;

  explicit IOStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IOStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _robot_din_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _robot_din_type robot_din;
  using _robot_dout_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _robot_dout_type robot_dout;
  using _robot_ain_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _robot_ain_type robot_ain;
  using _robot_aout_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _robot_aout_type robot_aout;
  using _robot_ain_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _robot_ain_type_type robot_ain_type;
  using _robot_aout_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _robot_aout_type_type robot_aout_type;
  using _flange_din_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _flange_din_type flange_din;
  using _flange_dout_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _flange_dout_type flange_dout;
  using _extend_din_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _extend_din_type extend_din;
  using _extend_dout_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _extend_dout_type extend_dout;
  using _extend_ain_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _extend_ain_type extend_ain;
  using _extend_aout_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _extend_aout_type extend_aout;

  // setters for named parameter idiom
  Type & set__robot_din(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->robot_din = _arg;
    return *this;
  }
  Type & set__robot_dout(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->robot_dout = _arg;
    return *this;
  }
  Type & set__robot_ain(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->robot_ain = _arg;
    return *this;
  }
  Type & set__robot_aout(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->robot_aout = _arg;
    return *this;
  }
  Type & set__robot_ain_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->robot_ain_type = _arg;
    return *this;
  }
  Type & set__robot_aout_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->robot_aout_type = _arg;
    return *this;
  }
  Type & set__flange_din(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->flange_din = _arg;
    return *this;
  }
  Type & set__flange_dout(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->flange_dout = _arg;
    return *this;
  }
  Type & set__extend_din(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->extend_din = _arg;
    return *this;
  }
  Type & set__extend_dout(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->extend_dout = _arg;
    return *this;
  }
  Type & set__extend_ain(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->extend_ain = _arg;
    return *this;
  }
  Type & set__extend_aout(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->extend_aout = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VOLTAGETYPE =
    0u;
  static constexpr uint8_t CURRENTTYPE =
    1u;

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::IOStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::IOStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::IOStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::IOStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__IOStatus
    std::shared_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__IOStatus
    std::shared_ptr<lebai_interfaces::msg::IOStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOStatus_ & other) const
  {
    if (this->robot_din != other.robot_din) {
      return false;
    }
    if (this->robot_dout != other.robot_dout) {
      return false;
    }
    if (this->robot_ain != other.robot_ain) {
      return false;
    }
    if (this->robot_aout != other.robot_aout) {
      return false;
    }
    if (this->robot_ain_type != other.robot_ain_type) {
      return false;
    }
    if (this->robot_aout_type != other.robot_aout_type) {
      return false;
    }
    if (this->flange_din != other.flange_din) {
      return false;
    }
    if (this->flange_dout != other.flange_dout) {
      return false;
    }
    if (this->extend_din != other.extend_din) {
      return false;
    }
    if (this->extend_dout != other.extend_dout) {
      return false;
    }
    if (this->extend_ain != other.extend_ain) {
      return false;
    }
    if (this->extend_aout != other.extend_aout) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOStatus_

// alias to use template instance with default allocator
using IOStatus =
  lebai_interfaces::msg::IOStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOStatus_<ContainerAllocator>::VOLTAGETYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOStatus_<ContainerAllocator>::CURRENTTYPE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_HPP_
