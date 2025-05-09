// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexbe_msgs:action/BehaviorInput.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__BUILDER_HPP_
#define FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flexbe_msgs/action/detail/behavior_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_Goal_msg
{
public:
  explicit Init_BehaviorInput_Goal_msg(::flexbe_msgs::action::BehaviorInput_Goal & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_Goal msg(::flexbe_msgs::action::BehaviorInput_Goal::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_Goal msg_;
};

class Init_BehaviorInput_Goal_request_type
{
public:
  Init_BehaviorInput_Goal_request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_Goal_msg request_type(::flexbe_msgs::action::BehaviorInput_Goal::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_BehaviorInput_Goal_msg(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_Goal>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_Goal_request_type();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_Result_data
{
public:
  explicit Init_BehaviorInput_Result_data(::flexbe_msgs::action::BehaviorInput_Result & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_Result data(::flexbe_msgs::action::BehaviorInput_Result::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_Result msg_;
};

class Init_BehaviorInput_Result_result_code
{
public:
  Init_BehaviorInput_Result_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_Result_data result_code(::flexbe_msgs::action::BehaviorInput_Result::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_BehaviorInput_Result_data(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_Result>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_Result_result_code();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_Feedback>()
{
  return ::flexbe_msgs::action::BehaviorInput_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_SendGoal_Request_goal
{
public:
  explicit Init_BehaviorInput_SendGoal_Request_goal(::flexbe_msgs::action::BehaviorInput_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Request goal(::flexbe_msgs::action::BehaviorInput_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Request msg_;
};

class Init_BehaviorInput_SendGoal_Request_goal_id
{
public:
  Init_BehaviorInput_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_SendGoal_Request_goal goal_id(::flexbe_msgs::action::BehaviorInput_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorInput_SendGoal_Request_goal(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_SendGoal_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_SendGoal_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_SendGoal_Response_stamp
{
public:
  explicit Init_BehaviorInput_SendGoal_Response_stamp(::flexbe_msgs::action::BehaviorInput_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Response stamp(::flexbe_msgs::action::BehaviorInput_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Response msg_;
};

class Init_BehaviorInput_SendGoal_Response_accepted
{
public:
  Init_BehaviorInput_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_SendGoal_Response_stamp accepted(::flexbe_msgs::action::BehaviorInput_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BehaviorInput_SendGoal_Response_stamp(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_SendGoal_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_SendGoal_Response_accepted();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_GetResult_Request_goal_id
{
public:
  Init_BehaviorInput_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::flexbe_msgs::action::BehaviorInput_GetResult_Request goal_id(::flexbe_msgs::action::BehaviorInput_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_GetResult_Request>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_GetResult_Request_goal_id();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_GetResult_Response_result
{
public:
  explicit Init_BehaviorInput_GetResult_Response_result(::flexbe_msgs::action::BehaviorInput_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_GetResult_Response result(::flexbe_msgs::action::BehaviorInput_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_GetResult_Response msg_;
};

class Init_BehaviorInput_GetResult_Response_status
{
public:
  Init_BehaviorInput_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_GetResult_Response_result status(::flexbe_msgs::action::BehaviorInput_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BehaviorInput_GetResult_Response_result(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_GetResult_Response>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_GetResult_Response_status();
}

}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace action
{

namespace builder
{

class Init_BehaviorInput_FeedbackMessage_feedback
{
public:
  explicit Init_BehaviorInput_FeedbackMessage_feedback(::flexbe_msgs::action::BehaviorInput_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::flexbe_msgs::action::BehaviorInput_FeedbackMessage feedback(::flexbe_msgs::action::BehaviorInput_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_FeedbackMessage msg_;
};

class Init_BehaviorInput_FeedbackMessage_goal_id
{
public:
  Init_BehaviorInput_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorInput_FeedbackMessage_feedback goal_id(::flexbe_msgs::action::BehaviorInput_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BehaviorInput_FeedbackMessage_feedback(msg_);
  }

private:
  ::flexbe_msgs::action::BehaviorInput_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexbe_msgs::action::BehaviorInput_FeedbackMessage>()
{
  return flexbe_msgs::action::builder::Init_BehaviorInput_FeedbackMessage_goal_id();
}

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__ACTION__DETAIL__BEHAVIOR_INPUT__BUILDER_HPP_
