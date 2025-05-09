// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/msg/detail/state_instantiation__struct.hpp"
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

void StateInstantiation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::msg::StateInstantiation(_init);
}

void StateInstantiation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::msg::StateInstantiation *>(message_memory);
  typed_message->~StateInstantiation();
}

size_t size_function__StateInstantiation__input_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__input_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__input_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__input_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__input_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__input_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__output_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__output_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__output_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__output_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__output_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__output_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__output_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__output_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__cond_outcome(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__cond_outcome(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__cond_outcome(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__cond_outcome(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__cond_outcome(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__cond_outcome(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__cond_outcome(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__cond_outcome(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__cond_transition(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::msg::OutcomeCondition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__cond_transition(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::msg::OutcomeCondition> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__cond_transition(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::msg::OutcomeCondition> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__cond_transition(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::msg::OutcomeCondition *>(
    get_const_function__StateInstantiation__cond_transition(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::msg::OutcomeCondition *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__cond_transition(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::msg::OutcomeCondition *>(
    get_function__StateInstantiation__cond_transition(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::msg::OutcomeCondition *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__cond_transition(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::msg::OutcomeCondition> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__parameter_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__parameter_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__parameter_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__parameter_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__parameter_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__parameter_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__parameter_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__parameter_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__parameter_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__parameter_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__parameter_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__parameter_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__parameter_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__parameter_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__parameter_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__parameter_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__StateInstantiation__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__StateInstantiation__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__StateInstantiation__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__StateInstantiation__outcomes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__outcomes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__outcomes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__outcomes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__outcomes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__outcomes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__transitions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__transitions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__transitions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__transitions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__transitions(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__transitions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__transitions(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__transitions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__autonomy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__autonomy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__autonomy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__autonomy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__StateInstantiation__autonomy(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__autonomy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__StateInstantiation__autonomy(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__autonomy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__userdata_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__userdata_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__userdata_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__userdata_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__userdata_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__userdata_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__userdata_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__userdata_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateInstantiation__userdata_remapping(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateInstantiation__userdata_remapping(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StateInstantiation__userdata_remapping(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateInstantiation__userdata_remapping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__StateInstantiation__userdata_remapping(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__StateInstantiation__userdata_remapping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__StateInstantiation__userdata_remapping(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__StateInstantiation__userdata_remapping(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StateInstantiation_message_member_array[16] = {
  {
    "state_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, state_path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, state_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_state_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, initial_state_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, input_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__input_keys,  // size() function pointer
    get_const_function__StateInstantiation__input_keys,  // get_const(index) function pointer
    get_function__StateInstantiation__input_keys,  // get(index) function pointer
    fetch_function__StateInstantiation__input_keys,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__input_keys,  // assign(index, value) function pointer
    resize_function__StateInstantiation__input_keys  // resize(index) function pointer
  },
  {
    "output_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, output_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__output_keys,  // size() function pointer
    get_const_function__StateInstantiation__output_keys,  // get_const(index) function pointer
    get_function__StateInstantiation__output_keys,  // get(index) function pointer
    fetch_function__StateInstantiation__output_keys,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__output_keys,  // assign(index, value) function pointer
    resize_function__StateInstantiation__output_keys  // resize(index) function pointer
  },
  {
    "cond_outcome",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, cond_outcome),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__cond_outcome,  // size() function pointer
    get_const_function__StateInstantiation__cond_outcome,  // get_const(index) function pointer
    get_function__StateInstantiation__cond_outcome,  // get(index) function pointer
    fetch_function__StateInstantiation__cond_outcome,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__cond_outcome,  // assign(index, value) function pointer
    resize_function__StateInstantiation__cond_outcome  // resize(index) function pointer
  },
  {
    "cond_transition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::OutcomeCondition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, cond_transition),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__cond_transition,  // size() function pointer
    get_const_function__StateInstantiation__cond_transition,  // get_const(index) function pointer
    get_function__StateInstantiation__cond_transition,  // get(index) function pointer
    fetch_function__StateInstantiation__cond_transition,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__cond_transition,  // assign(index, value) function pointer
    resize_function__StateInstantiation__cond_transition  // resize(index) function pointer
  },
  {
    "behavior_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, behavior_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameter_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, parameter_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__parameter_names,  // size() function pointer
    get_const_function__StateInstantiation__parameter_names,  // get_const(index) function pointer
    get_function__StateInstantiation__parameter_names,  // get(index) function pointer
    fetch_function__StateInstantiation__parameter_names,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__parameter_names,  // assign(index, value) function pointer
    resize_function__StateInstantiation__parameter_names  // resize(index) function pointer
  },
  {
    "parameter_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, parameter_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__parameter_values,  // size() function pointer
    get_const_function__StateInstantiation__parameter_values,  // get_const(index) function pointer
    get_function__StateInstantiation__parameter_values,  // get(index) function pointer
    fetch_function__StateInstantiation__parameter_values,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__parameter_values,  // assign(index, value) function pointer
    resize_function__StateInstantiation__parameter_values  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__position,  // size() function pointer
    get_const_function__StateInstantiation__position,  // get_const(index) function pointer
    get_function__StateInstantiation__position,  // get(index) function pointer
    fetch_function__StateInstantiation__position,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "outcomes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, outcomes),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__outcomes,  // size() function pointer
    get_const_function__StateInstantiation__outcomes,  // get_const(index) function pointer
    get_function__StateInstantiation__outcomes,  // get(index) function pointer
    fetch_function__StateInstantiation__outcomes,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__outcomes,  // assign(index, value) function pointer
    resize_function__StateInstantiation__outcomes  // resize(index) function pointer
  },
  {
    "transitions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, transitions),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__transitions,  // size() function pointer
    get_const_function__StateInstantiation__transitions,  // get_const(index) function pointer
    get_function__StateInstantiation__transitions,  // get(index) function pointer
    fetch_function__StateInstantiation__transitions,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__transitions,  // assign(index, value) function pointer
    resize_function__StateInstantiation__transitions  // resize(index) function pointer
  },
  {
    "autonomy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, autonomy),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__autonomy,  // size() function pointer
    get_const_function__StateInstantiation__autonomy,  // get_const(index) function pointer
    get_function__StateInstantiation__autonomy,  // get(index) function pointer
    fetch_function__StateInstantiation__autonomy,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__autonomy,  // assign(index, value) function pointer
    resize_function__StateInstantiation__autonomy  // resize(index) function pointer
  },
  {
    "userdata_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, userdata_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__userdata_keys,  // size() function pointer
    get_const_function__StateInstantiation__userdata_keys,  // get_const(index) function pointer
    get_function__StateInstantiation__userdata_keys,  // get(index) function pointer
    fetch_function__StateInstantiation__userdata_keys,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__userdata_keys,  // assign(index, value) function pointer
    resize_function__StateInstantiation__userdata_keys  // resize(index) function pointer
  },
  {
    "userdata_remapping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::StateInstantiation, userdata_remapping),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateInstantiation__userdata_remapping,  // size() function pointer
    get_const_function__StateInstantiation__userdata_remapping,  // get_const(index) function pointer
    get_function__StateInstantiation__userdata_remapping,  // get(index) function pointer
    fetch_function__StateInstantiation__userdata_remapping,  // fetch(index, &value) function pointer
    assign_function__StateInstantiation__userdata_remapping,  // assign(index, value) function pointer
    resize_function__StateInstantiation__userdata_remapping  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StateInstantiation_message_members = {
  "flexbe_msgs::msg",  // message namespace
  "StateInstantiation",  // message name
  16,  // number of fields
  sizeof(flexbe_msgs::msg::StateInstantiation),
  StateInstantiation_message_member_array,  // message members
  StateInstantiation_init_function,  // function to initialize message memory (memory has to be allocated)
  StateInstantiation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StateInstantiation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StateInstantiation_message_members,
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
get_message_type_support_handle<flexbe_msgs::msg::StateInstantiation>()
{
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::StateInstantiation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, msg, StateInstantiation)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::StateInstantiation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
