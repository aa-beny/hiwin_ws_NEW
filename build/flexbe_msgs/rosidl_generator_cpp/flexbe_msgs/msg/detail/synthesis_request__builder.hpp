// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/synthesis_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_SynthesisRequest_sm_outcomes
{
public:
  explicit Init_SynthesisRequest_sm_outcomes(::flexbe_msgs::msg::SynthesisRequest & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::SynthesisRequest sm_outcomes(::flexbe_msgs::msg::SynthesisRequest::_sm_outcomes_type arg)
  {
    msg_.sm_outcomes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisRequest msg_;
};

class Init_SynthesisRequest_initial_condition
{
public:
  explicit Init_SynthesisRequest_initial_condition(::flexbe_msgs::msg::SynthesisRequest & msg)
  : msg_(msg)
  {}
  Init_SynthesisRequest_sm_outcomes initial_condition(::flexbe_msgs::msg::SynthesisRequest::_initial_condition_type arg)
  {
    msg_.initial_condition = std::move(arg);
    return Init_SynthesisRequest_sm_outcomes(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisRequest msg_;
};

class Init_SynthesisRequest_goal
{
public:
  explicit Init_SynthesisRequest_goal(::flexbe_msgs::msg::SynthesisRequest & msg)
  : msg_(msg)
  {}
  Init_SynthesisRequest_initial_condition goal(::flexbe_msgs::msg::SynthesisRequest::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_SynthesisRequest_initial_condition(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisRequest msg_;
};

class Init_SynthesisRequest_system
{
public:
  explicit Init_SynthesisRequest_system(::flexbe_msgs::msg::SynthesisRequest & msg)
  : msg_(msg)
  {}
  Init_SynthesisRequest_goal system(::flexbe_msgs::msg::SynthesisRequest::_system_type arg)
  {
    msg_.system = std::move(arg);
    return Init_SynthesisRequest_goal(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisRequest msg_;
};

class Init_SynthesisRequest_name
{
public:
  Init_SynthesisRequest_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SynthesisRequest_system name(::flexbe_msgs::msg::SynthesisRequest::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SynthesisRequest_system(msg_);
  }

private:
  ::flexbe_msgs::msg::SynthesisRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::SynthesisRequest>()
{
  return flexbe_msgs::msg::builder::Init_SynthesisRequest_name();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__BUILDER_HPP_
