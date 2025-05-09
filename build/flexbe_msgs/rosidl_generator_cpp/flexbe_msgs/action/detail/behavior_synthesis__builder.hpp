// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:action/BehaviorSynthesis.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__BUILDER_HPP_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_Goal_request
{
public:
  Init_BehaviorSynthesis_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_Goal request(::flexbe_msgs::action::BehaviorSynthesis_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_Goal>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_Goal_request();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_Result_states
{
public:
  explicit Init_BehaviorSynthesis_Result_states(::flexbe_msgs::action::BehaviorSynthesis_Result & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_Result states(::flexbe_msgs::action::BehaviorSynthesis_Result::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_Result msg_;
};

class Init_BehaviorSynthesis_Result_error_code
{
public:
  Init_BehaviorSynthesis_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_Result_states error_code(::flexbe_msgs::action::BehaviorSynthesis_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_BehaviorSynthesis_Result_states(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_Result>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_Result_error_code();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_Feedback_progress
{
public:
  explicit Init_BehaviorSynthesis_Feedback_progress(::flexbe_msgs::action::BehaviorSynthesis_Feedback & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_Feedback progress(::flexbe_msgs::action::BehaviorSynthesis_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_Feedback msg_;
};

class Init_BehaviorSynthesis_Feedback_status
{
public:
  Init_BehaviorSynthesis_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_Feedback_progress status(::flexbe_msgs::action::BehaviorSynthesis_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BehaviorSynthesis_Feedback_progress(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_Feedback>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_Feedback_status();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_SendGoal_Request_goal
{
public:
  explicit Init_BehaviorSynthesis_SendGoal_Request_goal(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request goal(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request msg_;
};

class Init_BehaviorSynthesis_SendGoal_Request_goal_id
{
public:
  Init_BehaviorSynthesis_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_SendGoal_Request_goal goal_id(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorSynthesis_SendGoal_Request_goal(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_SendGoal_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_SendGoal_Response_stamp
{
public:
  explicit Init_BehaviorSynthesis_SendGoal_Response_stamp(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response stamp(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response msg_;
};

class Init_BehaviorSynthesis_SendGoal_Response_accepted
{
public:
  Init_BehaviorSynthesis_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_SendGoal_Response_stamp accepted(::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BehaviorSynthesis_SendGoal_Response_stamp(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_SendGoal_Response_accepted();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_GetResult_Request_goal_id
{
public:
  Init_BehaviorSynthesis_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Request goal_id(::flexbe_msgs::action::BehaviorSynthesis_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_GetResult_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_GetResult_Response_result
{
public:
  explicit Init_BehaviorSynthesis_GetResult_Response_result(::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response result(::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response msg_;
};

class Init_BehaviorSynthesis_GetResult_Response_status
{
public:
  Init_BehaviorSynthesis_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_GetResult_Response_result status(::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BehaviorSynthesis_GetResult_Response_result(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_GetResult_Response_status();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorSynthesis_FeedbackMessage_feedback
{
public:
  explicit Init_BehaviorSynthesis_FeedbackMessage_feedback(::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage feedback(::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage msg_;
};

class Init_BehaviorSynthesis_FeedbackMessage_goal_id
{
public:
  Init_BehaviorSynthesis_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorSynthesis_FeedbackMessage_feedback goal_id(::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorSynthesis_FeedbackMessage_feedback(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>()
{
  return flexbe_msgs::action::builder::Init_BehaviorSynthesis_FeedbackMessage_goal_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_SYNTHESIS__BUILDER_HPP_
