// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flexbe_msgs:msg/OutcomeCondition.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/outcome_condition__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flexbe_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flexbe_msgs/msg/detail/outcome_condition__struct.h"
#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // state_name, state_outcome
#include "rosidl_runtime_c/string_functions.h"  // state_name, state_outcome

// forward declare type support functions


using _OutcomeCondition__ros_msg_type = flexbe_msgs__msg__OutcomeCondition;

static bool _OutcomeCondition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OutcomeCondition__ros_msg_type * ros_message = static_cast<const _OutcomeCondition__ros_msg_type *>(untyped_ros_message);
  // Field name: state_name
  {
    size_t size = ros_message->state_name.size;
    auto array_ptr = ros_message->state_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: state_outcome
  {
    size_t size = ros_message->state_outcome.size;
    auto array_ptr = ros_message->state_outcome.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _OutcomeCondition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OutcomeCondition__ros_msg_type * ros_message = static_cast<_OutcomeCondition__ros_msg_type *>(untyped_ros_message);
  // Field name: state_name
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->state_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->state_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->state_name, size)) {
      fprintf(stderr, "failed to create array for field 'state_name'");
      return false;
    }
    auto array_ptr = ros_message->state_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'state_name'\n");
        return false;
      }
    }
  }

  // Field name: state_outcome
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->state_outcome.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->state_outcome);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->state_outcome, size)) {
      fprintf(stderr, "failed to create array for field 'state_outcome'");
      return false;
    }
    auto array_ptr = ros_message->state_outcome.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'state_outcome'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_flexbe_msgs__msg__OutcomeCondition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OutcomeCondition__ros_msg_type * ros_message = static_cast<const _OutcomeCondition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_name
  {
    size_t array_size = ros_message->state_name.size;
    auto array_ptr = ros_message->state_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name state_outcome
  {
    size_t array_size = ros_message->state_outcome.size;
    auto array_ptr = ros_message->state_outcome.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OutcomeCondition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flexbe_msgs__msg__OutcomeCondition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_flexbe_msgs__msg__OutcomeCondition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: state_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: state_outcome
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs__msg__OutcomeCondition;
    is_plain =
      (
      offsetof(DataType, state_outcome) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OutcomeCondition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flexbe_msgs__msg__OutcomeCondition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OutcomeCondition = {
  "flexbe_msgs::msg",
  "OutcomeCondition",
  _OutcomeCondition__cdr_serialize,
  _OutcomeCondition__cdr_deserialize,
  _OutcomeCondition__get_serialized_size,
  _OutcomeCondition__max_serialized_size
};

static rosidl_message_type_support_t _OutcomeCondition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OutcomeCondition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, OutcomeCondition)() {
  return &_OutcomeCondition__type_support;
}

#if defined(__cplusplus)
}
#endif
