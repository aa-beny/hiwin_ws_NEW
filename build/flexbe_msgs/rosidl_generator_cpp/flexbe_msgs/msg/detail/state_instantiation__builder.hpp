// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__BUILDER_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/msg/detail/state_instantiation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace msg
{

namespace builder
{

class Init_StateInstantiation_userdata_remapping
{
public:
  explicit Init_StateInstantiation_userdata_remapping(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::msg::StateInstantiation userdata_remapping(::flexbe_msgs::msg::StateInstantiation::_userdata_remapping_type arg)
  {
    msg_.userdata_remapping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_userdata_keys
{
public:
  explicit Init_StateInstantiation_userdata_keys(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_userdata_remapping userdata_keys(::flexbe_msgs::msg::StateInstantiation::_userdata_keys_type arg)
  {
    msg_.userdata_keys = std::move(arg);
    return Init_StateInstantiation_userdata_remapping(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_autonomy
{
public:
  explicit Init_StateInstantiation_autonomy(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_userdata_keys autonomy(::flexbe_msgs::msg::StateInstantiation::_autonomy_type arg)
  {
    msg_.autonomy = std::move(arg);
    return Init_StateInstantiation_userdata_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_transitions
{
public:
  explicit Init_StateInstantiation_transitions(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_autonomy transitions(::flexbe_msgs::msg::StateInstantiation::_transitions_type arg)
  {
    msg_.transitions = std::move(arg);
    return Init_StateInstantiation_autonomy(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_outcomes
{
public:
  explicit Init_StateInstantiation_outcomes(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_transitions outcomes(::flexbe_msgs::msg::StateInstantiation::_outcomes_type arg)
  {
    msg_.outcomes = std::move(arg);
    return Init_StateInstantiation_transitions(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_position
{
public:
  explicit Init_StateInstantiation_position(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_outcomes position(::flexbe_msgs::msg::StateInstantiation::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_StateInstantiation_outcomes(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_parameter_values
{
public:
  explicit Init_StateInstantiation_parameter_values(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_position parameter_values(::flexbe_msgs::msg::StateInstantiation::_parameter_values_type arg)
  {
    msg_.parameter_values = std::move(arg);
    return Init_StateInstantiation_position(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_parameter_names
{
public:
  explicit Init_StateInstantiation_parameter_names(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_parameter_values parameter_names(::flexbe_msgs::msg::StateInstantiation::_parameter_names_type arg)
  {
    msg_.parameter_names = std::move(arg);
    return Init_StateInstantiation_parameter_values(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_behavior_class
{
public:
  explicit Init_StateInstantiation_behavior_class(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_parameter_names behavior_class(::flexbe_msgs::msg::StateInstantiation::_behavior_class_type arg)
  {
    msg_.behavior_class = std::move(arg);
    return Init_StateInstantiation_parameter_names(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_cond_transition
{
public:
  explicit Init_StateInstantiation_cond_transition(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_behavior_class cond_transition(::flexbe_msgs::msg::StateInstantiation::_cond_transition_type arg)
  {
    msg_.cond_transition = std::move(arg);
    return Init_StateInstantiation_behavior_class(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_cond_outcome
{
public:
  explicit Init_StateInstantiation_cond_outcome(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_cond_transition cond_outcome(::flexbe_msgs::msg::StateInstantiation::_cond_outcome_type arg)
  {
    msg_.cond_outcome = std::move(arg);
    return Init_StateInstantiation_cond_transition(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_output_keys
{
public:
  explicit Init_StateInstantiation_output_keys(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_cond_outcome output_keys(::flexbe_msgs::msg::StateInstantiation::_output_keys_type arg)
  {
    msg_.output_keys = std::move(arg);
    return Init_StateInstantiation_cond_outcome(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_input_keys
{
public:
  explicit Init_StateInstantiation_input_keys(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_output_keys input_keys(::flexbe_msgs::msg::StateInstantiation::_input_keys_type arg)
  {
    msg_.input_keys = std::move(arg);
    return Init_StateInstantiation_output_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_initial_state_name
{
public:
  explicit Init_StateInstantiation_initial_state_name(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_input_keys initial_state_name(::flexbe_msgs::msg::StateInstantiation::_initial_state_name_type arg)
  {
    msg_.initial_state_name = std::move(arg);
    return Init_StateInstantiation_input_keys(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_state_class
{
public:
  explicit Init_StateInstantiation_state_class(::flexbe_msgs::msg::StateInstantiation & msg)
  : msg_(msg)
  {}
  Init_StateInstantiation_initial_state_name state_class(::flexbe_msgs::msg::StateInstantiation::_state_class_type arg)
  {
    msg_.state_class = std::move(arg);
    return Init_StateInstantiation_initial_state_name(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

class Init_StateInstantiation_state_path
{
public:
  Init_StateInstantiation_state_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateInstantiation_state_class state_path(::flexbe_msgs::msg::StateInstantiation::_state_path_type arg)
  {
    msg_.state_path = std::move(arg);
    return Init_StateInstantiation_state_class(msg_);
  }

private:
  ::flexbe_msgs::msg::StateInstantiation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::msg::StateInstantiation>()
{
  return flexbe_msgs::msg::builder::Init_StateInstantiation_state_path();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__BUILDER_HPP_
