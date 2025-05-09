// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_Container_autonomy
{
public:
  explicit Init_Container_autonomy(::flexbe_msgs::msg::Container & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::Container autonomy(::flexbe_msgs::msg::Container::_autonomy_type arg)
  {
    msg_.autonomy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::Container msg_;
};

class Init_Container_transitions
{
public:
  explicit Init_Container_transitions(::flexbe_msgs::msg::Container & msg)
  : msg_(msg)
  {}
  Init_Container_autonomy transitions(::flexbe_msgs::msg::Container::_transitions_type arg)
  {
    msg_.transitions = std::move(arg);
    return Init_Container_autonomy(msg_);
  }

private:
  ::flexbe_msgs::msg::Container msg_;
};

class Init_Container_outcomes
{
public:
  explicit Init_Container_outcomes(::flexbe_msgs::msg::Container & msg)
  : msg_(msg)
  {}
  Init_Container_transitions outcomes(::flexbe_msgs::msg::Container::_outcomes_type arg)
  {
    msg_.outcomes = std::move(arg);
    return Init_Container_transitions(msg_);
  }

private:
  ::flexbe_msgs::msg::Container msg_;
};

class Init_Container_children
{
public:
  explicit Init_Container_children(::flexbe_msgs::msg::Container & msg)
  : msg_(msg)
  {}
  Init_Container_outcomes children(::flexbe_msgs::msg::Container::_children_type arg)
  {
    msg_.children = std::move(arg);
    return Init_Container_outcomes(msg_);
  }

private:
  ::flexbe_msgs::msg::Container msg_;
};

class Init_Container_path
{
public:
  Init_Container_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Container_children path(::flexbe_msgs::msg::Container::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Container_children(msg_);
  }

private:
  ::flexbe_msgs::msg::Container msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::Container>()
{
  return flexbe_msgs::msg::builder::Init_Container_path();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER__BUILDER_HPP_
