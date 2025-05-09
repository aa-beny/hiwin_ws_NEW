// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexbe_msgs/msg/detail/behavior_selection__struct.hpp"
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

void BehaviorSelection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexbe_msgs::msg::BehaviorSelection(_init);
}

void BehaviorSelection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexbe_msgs::msg::BehaviorSelection *>(message_memory);
  typed_message->~BehaviorSelection();
}

size_t size_function__BehaviorSelection__arg_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSelection__arg_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSelection__arg_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSelection__arg_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BehaviorSelection__arg_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSelection__arg_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BehaviorSelection__arg_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSelection__arg_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviorSelection__arg_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSelection__arg_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSelection__arg_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSelection__arg_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BehaviorSelection__arg_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSelection__arg_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BehaviorSelection__arg_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSelection__arg_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviorSelection__input_keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSelection__input_keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSelection__input_keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSelection__input_keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BehaviorSelection__input_keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSelection__input_keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BehaviorSelection__input_keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSelection__input_keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviorSelection__input_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSelection__input_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSelection__input_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSelection__input_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__BehaviorSelection__input_values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSelection__input_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__BehaviorSelection__input_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSelection__input_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviorSelection__modifications(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<flexbe_msgs::msg::BehaviorModification> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviorSelection__modifications(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<flexbe_msgs::msg::BehaviorModification> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviorSelection__modifications(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<flexbe_msgs::msg::BehaviorModification> *>(untyped_member);
  return &member[index];
}

void fetch_function__BehaviorSelection__modifications(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const flexbe_msgs::msg::BehaviorModification *>(
    get_const_function__BehaviorSelection__modifications(untyped_member, index));
  auto & value = *reinterpret_cast<flexbe_msgs::msg::BehaviorModification *>(untyped_value);
  value = item;
}

void assign_function__BehaviorSelection__modifications(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<flexbe_msgs::msg::BehaviorModification *>(
    get_function__BehaviorSelection__modifications(untyped_member, index));
  const auto & value = *reinterpret_cast<const flexbe_msgs::msg::BehaviorModification *>(untyped_value);
  item = value;
}

void resize_function__BehaviorSelection__modifications(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<flexbe_msgs::msg::BehaviorModification> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviorSelection_message_member_array[8] = {
  {
    "behavior_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, behavior_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "behavior_checksum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, behavior_checksum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "autonomy_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, autonomy_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arg_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, arg_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSelection__arg_keys,  // size() function pointer
    get_const_function__BehaviorSelection__arg_keys,  // get_const(index) function pointer
    get_function__BehaviorSelection__arg_keys,  // get(index) function pointer
    fetch_function__BehaviorSelection__arg_keys,  // fetch(index, &value) function pointer
    assign_function__BehaviorSelection__arg_keys,  // assign(index, value) function pointer
    resize_function__BehaviorSelection__arg_keys  // resize(index) function pointer
  },
  {
    "arg_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, arg_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSelection__arg_values,  // size() function pointer
    get_const_function__BehaviorSelection__arg_values,  // get_const(index) function pointer
    get_function__BehaviorSelection__arg_values,  // get(index) function pointer
    fetch_function__BehaviorSelection__arg_values,  // fetch(index, &value) function pointer
    assign_function__BehaviorSelection__arg_values,  // assign(index, value) function pointer
    resize_function__BehaviorSelection__arg_values  // resize(index) function pointer
  },
  {
    "input_keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, input_keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSelection__input_keys,  // size() function pointer
    get_const_function__BehaviorSelection__input_keys,  // get_const(index) function pointer
    get_function__BehaviorSelection__input_keys,  // get(index) function pointer
    fetch_function__BehaviorSelection__input_keys,  // fetch(index, &value) function pointer
    assign_function__BehaviorSelection__input_keys,  // assign(index, value) function pointer
    resize_function__BehaviorSelection__input_keys  // resize(index) function pointer
  },
  {
    "input_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, input_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSelection__input_values,  // size() function pointer
    get_const_function__BehaviorSelection__input_values,  // get_const(index) function pointer
    get_function__BehaviorSelection__input_values,  // get(index) function pointer
    fetch_function__BehaviorSelection__input_values,  // fetch(index, &value) function pointer
    assign_function__BehaviorSelection__input_values,  // assign(index, value) function pointer
    resize_function__BehaviorSelection__input_values  // resize(index) function pointer
  },
  {
    "modifications",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexbe_msgs::msg::BehaviorModification>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexbe_msgs::msg::BehaviorSelection, modifications),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviorSelection__modifications,  // size() function pointer
    get_const_function__BehaviorSelection__modifications,  // get_const(index) function pointer
    get_function__BehaviorSelection__modifications,  // get(index) function pointer
    fetch_function__BehaviorSelection__modifications,  // fetch(index, &value) function pointer
    assign_function__BehaviorSelection__modifications,  // assign(index, value) function pointer
    resize_function__BehaviorSelection__modifications  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviorSelection_message_members = {
  "flexbe_msgs::msg",  // message namespace
  "BehaviorSelection",  // message name
  8,  // number of fields
  sizeof(flexbe_msgs::msg::BehaviorSelection),
  BehaviorSelection_message_member_array,  // message members
  BehaviorSelection_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviorSelection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviorSelection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviorSelection_message_members,
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
get_message_type_support_handle<flexbe_msgs::msg::BehaviorSelection>()
{
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorSelection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexbe_msgs, msg, BehaviorSelection)() {
  return &::flexbe_msgs::msg::rosidl_typesupport_introspection_cpp::BehaviorSelection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
