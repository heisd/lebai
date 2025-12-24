// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__IOConditionalExpress __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__IOConditionalExpress __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOConditionalExpress_
{
  using Type = IOConditionalExpress_<ContainerAllocator>;

  explicit IOConditionalExpress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = 0ul;
      this->pin = 0ul;
      this->type = 0ul;
      this->float_value = 0.0;
      this->uint_value = 0;
      this->logic_operation = 0;
    }
  }

  explicit IOConditionalExpress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group = 0ul;
      this->pin = 0ul;
      this->type = 0ul;
      this->float_value = 0.0;
      this->uint_value = 0;
      this->logic_operation = 0;
    }
  }

  // field types and members
  using _group_type =
    uint32_t;
  _group_type group;
  using _pin_type =
    uint32_t;
  _pin_type pin;
  using _type_type =
    uint32_t;
  _type_type type;
  using _float_value_type =
    double;
  _float_value_type float_value;
  using _uint_value_type =
    uint8_t;
  _uint_value_type uint_value;
  using _logic_operation_type =
    uint8_t;
  _logic_operation_type logic_operation;

  // setters for named parameter idiom
  Type & set__group(
    const uint32_t & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__pin(
    const uint32_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__float_value(
    const double & _arg)
  {
    this->float_value = _arg;
    return *this;
  }
  Type & set__uint_value(
    const uint8_t & _arg)
  {
    this->uint_value = _arg;
    return *this;
  }
  Type & set__logic_operation(
    const uint8_t & _arg)
  {
    this->logic_operation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GROUP_ROBOT =
    0u;
  static constexpr uint8_t GROUP_FLANGE =
    1u;
  static constexpr uint8_t TYPE_ANALOG =
    0u;
  static constexpr uint8_t TYPE_DIGITAL =
    1u;
  static constexpr uint8_t LOGIC_OP_GT =
    0u;
  static constexpr uint8_t LOGIC_OP_GE =
    1u;
  static constexpr uint8_t LOGIC_OP_EQ =
    2u;
  static constexpr uint8_t LOGIC_OP_NE =
    3u;
  static constexpr uint8_t LOGIC_OP_LT =
    4u;
  static constexpr uint8_t LOGIC_OP_LE =
    5u;

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__IOConditionalExpress
    std::shared_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__IOConditionalExpress
    std::shared_ptr<lebai_interfaces::msg::IOConditionalExpress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOConditionalExpress_ & other) const
  {
    if (this->group != other.group) {
      return false;
    }
    if (this->pin != other.pin) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->float_value != other.float_value) {
      return false;
    }
    if (this->uint_value != other.uint_value) {
      return false;
    }
    if (this->logic_operation != other.logic_operation) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOConditionalExpress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOConditionalExpress_

// alias to use template instance with default allocator
using IOConditionalExpress =
  lebai_interfaces::msg::IOConditionalExpress_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::GROUP_ROBOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::GROUP_FLANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::TYPE_ANALOG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::TYPE_DIGITAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_GT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_GE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_EQ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_NE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_LT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t IOConditionalExpress_<ContainerAllocator>::LOGIC_OP_LE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_HPP_
