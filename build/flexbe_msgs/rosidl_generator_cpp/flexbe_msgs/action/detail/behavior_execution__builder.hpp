// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:action/BehaviorExecution.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__BUILDER_HPP_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/action/detail/behavior_execution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_Goal_input_values
{
public:
  explicit Init_BehaviorExecution_Goal_input_values(::flexbe_msgs::action::BehaviorExecution_Goal & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorExecution_Goal input_values(::flexbe_msgs::action::BehaviorExecution_Goal::_input_values_type arg)
  {
    msg_.input_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Goal msg_;
};

class Init_BehaviorExecution_Goal_input_keys
{
public:
  explicit Init_BehaviorExecution_Goal_input_keys(::flexbe_msgs::action::BehaviorExecution_Goal & msg)
  : msg_(msg)
  {}
  Init_BehaviorExecution_Goal_input_values input_keys(::flexbe_msgs::action::BehaviorExecution_Goal::_input_keys_type arg)
  {
    msg_.input_keys = std::move(arg);
    return Init_BehaviorExecution_Goal_input_values(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Goal msg_;
};

class Init_BehaviorExecution_Goal_arg_values
{
public:
  explicit Init_BehaviorExecution_Goal_arg_values(::flexbe_msgs::action::BehaviorExecution_Goal & msg)
  : msg_(msg)
  {}
  Init_BehaviorExecution_Goal_input_keys arg_values(::flexbe_msgs::action::BehaviorExecution_Goal::_arg_values_type arg)
  {
    msg_.arg_values = std::move(arg);
    return Init_BehaviorExecution_Goal_input_keys(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Goal msg_;
};

class Init_BehaviorExecution_Goal_arg_keys
{
public:
  explicit Init_BehaviorExecution_Goal_arg_keys(::flexbe_msgs::action::BehaviorExecution_Goal & msg)
  : msg_(msg)
  {}
  Init_BehaviorExecution_Goal_arg_values arg_keys(::flexbe_msgs::action::BehaviorExecution_Goal::_arg_keys_type arg)
  {
    msg_.arg_keys = std::move(arg);
    return Init_BehaviorExecution_Goal_arg_values(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Goal msg_;
};

class Init_BehaviorExecution_Goal_behavior_name
{
public:
  Init_BehaviorExecution_Goal_behavior_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorExecution_Goal_arg_keys behavior_name(::flexbe_msgs::action::BehaviorExecution_Goal::_behavior_name_type arg)
  {
    msg_.behavior_name = std::move(arg);
    return Init_BehaviorExecution_Goal_arg_keys(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_Goal>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_Goal_behavior_name();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_Result_outcome
{
public:
  Init_BehaviorExecution_Result_outcome()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorExecution_Result outcome(::flexbe_msgs::action::BehaviorExecution_Result::_outcome_type arg)
  {
    msg_.outcome = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_Result>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_Result_outcome();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_Feedback_current_state
{
public:
  Init_BehaviorExecution_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorExecution_Feedback current_state(::flexbe_msgs::action::BehaviorExecution_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_Feedback>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_Feedback_current_state();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_SendGoal_Request_goal
{
public:
  explicit Init_BehaviorExecution_SendGoal_Request_goal(::flexbe_msgs::action::BehaviorExecution_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Request goal(::flexbe_msgs::action::BehaviorExecution_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Request msg_;
};

class Init_BehaviorExecution_SendGoal_Request_goal_id
{
public:
  Init_BehaviorExecution_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorExecution_SendGoal_Request_goal goal_id(::flexbe_msgs::action::BehaviorExecution_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorExecution_SendGoal_Request_goal(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_SendGoal_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_SendGoal_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_SendGoal_Response_stamp
{
public:
  explicit Init_BehaviorExecution_SendGoal_Response_stamp(::flexbe_msgs::action::BehaviorExecution_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Response stamp(::flexbe_msgs::action::BehaviorExecution_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Response msg_;
};

class Init_BehaviorExecution_SendGoal_Response_accepted
{
public:
  Init_BehaviorExecution_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorExecution_SendGoal_Response_stamp accepted(::flexbe_msgs::action::BehaviorExecution_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BehaviorExecution_SendGoal_Response_stamp(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_SendGoal_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_SendGoal_Response_accepted();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_GetResult_Request_goal_id
{
public:
  Init_BehaviorExecution_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorExecution_GetResult_Request goal_id(::flexbe_msgs::action::BehaviorExecution_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_GetResult_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_GetResult_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_GetResult_Response_result
{
public:
  explicit Init_BehaviorExecution_GetResult_Response_result(::flexbe_msgs::action::BehaviorExecution_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorExecution_GetResult_Response result(::flexbe_msgs::action::BehaviorExecution_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_GetResult_Response msg_;
};

class Init_BehaviorExecution_GetResult_Response_status
{
public:
  Init_BehaviorExecution_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorExecution_GetResult_Response_result status(::flexbe_msgs::action::BehaviorExecution_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BehaviorExecution_GetResult_Response_result(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_GetResult_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_GetResult_Response_status();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorExecution_FeedbackMessage_feedback
{
public:
  explicit Init_BehaviorExecution_FeedbackMessage_feedback(::flexbe_msgs::action::BehaviorExecution_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorExecution_FeedbackMessage feedback(::flexbe_msgs::action::BehaviorExecution_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_FeedbackMessage msg_;
};

class Init_BehaviorExecution_FeedbackMessage_goal_id
{
public:
  Init_BehaviorExecution_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorExecution_FeedbackMessage_feedback goal_id(::flexbe_msgs::action::BehaviorExecution_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorExecution_FeedbackMessage_feedback(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorExecution_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorExecution_FeedbackMessage>()
{
  return flexbe_msgs::action::builder::Init_BehaviorExecution_FeedbackMessage_goal_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_EXECUTION__BUILDER_HPP_
