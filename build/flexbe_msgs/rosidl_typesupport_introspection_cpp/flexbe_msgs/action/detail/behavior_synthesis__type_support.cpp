// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:action/BehaviorSynthesis.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_Goal(_init);
}

void BehaviorSynthesis_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_Goal *>(message_memory);
  typed_message->~BehaviorSynthesis_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_Goal_message_member_array[1] = {
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::SynthesisRequest>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_Goal, request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_Goal_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_Goal",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_Goal),
  BehaviorSynthesis_Goal_message_member_array,  // message members
  BehaviorSynthesis_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Goal>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_Goal)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_Result(_init);
}

void BehaviorSynthesis_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_Result *>(message_memory);
  typed_message->~BehaviorSynthesis_Result();
}

size_t size_function__BehaviorSynthesis_Result__states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::msg::StateInstantiation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSynthesis_Result__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::msg::StateInstantiation> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSynthesis_Result__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::msg::StateInstantiation> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSynthesis_Result__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::msg::StateInstantiation *>(
    get_const_function__BehaviorSynthesis_Result__states(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::msg::StateInstantiation *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSynthesis_Result__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::msg::StateInstantiation *>(
    get_function__BehaviorSynthesis_Result__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::msg::StateInstantiation *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSynthesis_Result__states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::msg::StateInstantiation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_Result_message_member_array[2] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::SynthesisErrorCodes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::StateInstantiation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_Result, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSynthesis_Result__states,  // size() function pointer
    get_const_function__BehaviorSynthesis_Result__states,  // get_const(index) function pointer
    get_function__BehaviorSynthesis_Result__states,  // get(index) function pointer
    fetch_function__BehaviorSynthesis_Result__states,  // fetch(index, &value) function pointer
    assign_function__BehaviorSynthesis_Result__states,  // assign(index, value) function pointer
    resize_function__BehaviorSynthesis_Result__states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_Result_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_Result",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_Result),
  BehaviorSynthesis_Result_message_member_array,  // message members
  BehaviorSynthesis_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Result>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_Result)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_Feedback(_init);
}

void BehaviorSynthesis_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_Feedback *>(message_memory);
  typed_message->~BehaviorSynthesis_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_Feedback_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_Feedback, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_Feedback, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_Feedback_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_Feedback",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_Feedback),
  BehaviorSynthesis_Feedback_message_member_array,  // message members
  BehaviorSynthesis_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Feedback>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_Feedback)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request(_init);
}

void BehaviorSynthesis_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request *>(message_memory);
  typed_message->~BehaviorSynthesis_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_SendGoal_Request_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request),
  BehaviorSynthesis_SendGoal_Request_message_member_array,  // message members
  BehaviorSynthesis_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_SendGoal_Request)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response(_init);
}

void BehaviorSynthesis_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response *>(message_memory);
  typed_message->~BehaviorSynthesis_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_SendGoal_Response_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response),
  BehaviorSynthesis_SendGoal_Response_message_member_array,  // message members
  BehaviorSynthesis_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_SendGoal_Response)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers BehaviorSynthesis_SendGoal_service_members = {
  "flexbe_msgs::action",  // service namespace
  "BehaviorSynthesis_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t BehaviorSynthesis_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::action::BehaviorSynthesis_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_GetResult_Request(_init);
}

void BehaviorSynthesis_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request *>(message_memory);
  typed_message->~BehaviorSynthesis_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_GetResult_Request_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_GetResult_Request),
  BehaviorSynthesis_GetResult_Request_message_member_array,  // message members
  BehaviorSynthesis_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_GetResult_Request>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_GetResult_Request)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_GetResult_Response(_init);
}

void BehaviorSynthesis_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response *>(message_memory);
  typed_message->~BehaviorSynthesis_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_GetResult_Response_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_GetResult_Response),
  BehaviorSynthesis_GetResult_Response_message_member_array,  // message members
  BehaviorSynthesis_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_GetResult_Response>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_GetResult_Response)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers BehaviorSynthesis_GetResult_service_members = {
  "flexbe_msgs::action",  // service namespace
  "BehaviorSynthesis_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t BehaviorSynthesis_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::flexbe_msgs::action::BehaviorSynthesis_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "flexbe_msgs/action/detail/behavior_synthesis__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void BehaviorSynthesis_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage(_init);
}

void BehaviorSynthesis_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage *>(message_memory);
  typed_message->~BehaviorSynthesis_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSynthesis_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSynthesis_FeedbackMessage_message_members = {
  "flexbe_msgs::action",  // message namespace
  "BehaviorSynthesis_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage),
  BehaviorSynthesis_FeedbackMessage_message_member_array,  // message members
  BehaviorSynthesis_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSynthesis_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSynthesis_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSynthesis_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::action::BehaviorSynthesis_FeedbackMessage>()
{
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, action, BehaviorSynthesis_FeedbackMessage)() {
  return &::flexbe_msgs::action::rosidl_typesupport_introspection_cpp::BehaviorSynthesis_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
