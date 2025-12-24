// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__BUILDER_HPP_
#define GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "grab_demo/srv/detail/grab_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace grab_demo
{

namespace srv
{

namespace builder
{

class Init_GrabObject_Request_obj_link
{
public:
  Init_GrabObject_Request_obj_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grab_demo::srv::GrabObject_Request obj_link(::grab_demo::srv::GrabObject_Request::_obj_link_type arg)
  {
    msg_.obj_link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grab_demo::srv::GrabObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab_demo::srv::GrabObject_Request>()
{
  return grab_demo::srv::builder::Init_GrabObject_Request_obj_link();
}

}  // namespace grab_demo


namespace grab_demo
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::grab_demo::srv::GrabObject_Response>()
{
  return ::grab_demo::srv::GrabObject_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace grab_demo

#endif  // GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__BUILDER_HPP_
