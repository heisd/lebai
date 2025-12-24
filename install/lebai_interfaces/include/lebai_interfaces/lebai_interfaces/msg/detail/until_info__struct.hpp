// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'io_express'
#include "lebai_interfaces/msg/detail/io_conditional_express__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__UntilInfo __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__UntilInfo __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UntilInfo_
{
  using Type = UntilInfo_<ContainerAllocator>;

  explicit UntilInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_express_logic = 0;
    }
  }

  explicit UntilInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io_express_logic = 0;
    }
  }

  // field types and members
  using _io_express_logic_type =
    uint8_t;
  _io_express_logic_type io_express_logic;
  using _io_express_type =
    std::vector<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>>;
  _io_express_type io_express;

  // setters for named parameter idiom
  Type & set__io_express_logic(
    const uint8_t & _arg)
  {
    this->io_express_logic = _arg;
    return *this;
  }
  Type & set__io_express(
    const std::vector<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>> & _arg)
  {
    this->io_express = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOGIC_AND =
    0u;
  static constexpr uint8_t LOGIC_OR =
    1u;

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::UntilInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::UntilInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::UntilInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::UntilInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__UntilInfo
    std::shared_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__UntilInfo
    std::shared_ptr<lebai_interfaces::msg::UntilInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UntilInfo_ & other) const
  {
    if (this->io_express_logic != other.io_express_logic) {
      return false;
    }
    if (this->io_express != other.io_express) {
      return false;
    }
    return true;
  }
  bool operator!=(const UntilInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UntilInfo_

// alias to use template instance with default allocator
using UntilInfo =
  lebai_interfaces::msg::UntilInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UntilInfo_<ContainerAllocator>::LOGIC_AND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UntilInfo_<ContainerAllocator>::LOGIC_OR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_HPP_
