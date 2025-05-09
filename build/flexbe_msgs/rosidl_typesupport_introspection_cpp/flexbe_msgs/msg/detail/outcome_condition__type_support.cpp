// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/msg/detail/outcome_condition__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexbe_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OutcomeCondition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::msg::OutcomeCondition(_init);
}

void OutcomeCondition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::msg::OutcomeCondition *>(message_memory);
  typed_message->~OutcomeCondition();
}

size_t size_function__OutcomeCondition__state_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OutcomeCondition__state_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OutcomeCondition__state_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OutcomeCondition__state_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OutcomeCondition__state_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OutcomeCondition__state_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OutcomeCondition__state_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OutcomeCondition__state_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OutcomeCondition__state_outcome(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OutcomeCondition__state_outcome(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OutcomeCondition__state_outcome(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OutcomeCondition__state_outcome(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OutcomeCondition__state_outcome(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OutcomeCondition__state_outcome(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OutcomeCondition__state_outcome(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OutcomeCondition__state_outcome(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OutcomeCondition_message_member_array[2] = {
  {
    "state_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::OutcomeCondition, state_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__OutcomeCondition__state_name,  // size() function pointer
    get_const_function__OutcomeCondition__state_name,  // get_const(index) function pointer
    get_function__OutcomeCondition__state_name,  // get(index) function pointer
    fetch_function__OutcomeCondition__state_name,  // fetch(index, &value) function pointer
    assign_function__OutcomeCondition__state_name,  // assign(index, value) function pointer
    resize_function__OutcomeCondition__state_name  // resize(index) function pointer
  },
  {
    "state_outcome",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::OutcomeCondition, state_outcome),  // bytes offset in struct
    nullptr,  // default value
    size_function__OutcomeCondition__state_outcome,  // size() function pointer
    get_const_function__OutcomeCondition__state_outcome,  // get_const(index) function pointer
    get_function__OutcomeCondition__state_outcome,  // get(index) function pointer
    fetch_function__OutcomeCondition__state_outcome,  // fetch(index, &value) function pointer
    assign_function__OutcomeCondition__state_outcome,  // assign(index, value) function pointer
    resize_function__OutcomeCondition__state_outcome  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OutcomeCondition_message_members = {
  "flexbe_msgs::msg",  // message namespace
  "OutcomeCondition",  // message name
  2,  // number of fields
  sizeof(flexbe_msgs::msg::OutcomeCondition),
  OutcomeCondition_message_member_array,  // message members
  OutcomeCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  OutcomeCondition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OutcomeCondition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OutcomeCondition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace flexbe_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::msg::OutcomeCondition>()
{
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::OutcomeCondition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, msg, OutcomeCondition)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::OutcomeCondition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
