// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/state_instantiation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flexbe_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flexbe_msgs/msg/detail/state_instantiation__struct.h"
#include "flexbe_msgs/msg/detail/state_instantiation__functions.h"
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

#include "flexbe_msgs/msg/detail/outcome_condition__functions.h"  // cond_transition
#include "rosidl_runtime_c/primitives_sequence.h"  // autonomy
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // autonomy
#include "rosidl_runtime_c/string.h"  // behavior_class, cond_outcome, initial_state_name, input_keys, outcomes, output_keys, parameter_names, parameter_values, state_class, state_path, transitions, userdata_keys, userdata_remapping
#include "rosidl_runtime_c/string_functions.h"  // behavior_class, cond_outcome, initial_state_name, input_keys, outcomes, output_keys, parameter_names, parameter_values, state_class, state_path, transitions, userdata_keys, userdata_remapping

// forward declare type support functions
size_t get_serialized_size_flexbe_msgs__msg__OutcomeCondition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_flexbe_msgs__msg__OutcomeCondition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, OutcomeCondition)();


using _StateInstantiation__ros_msg_type = flexbe_msgs__msg__StateInstantiation;

static bool _StateInstantiation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateInstantiation__ros_msg_type * ros_message = static_cast<const _StateInstantiation__ros_msg_type *>(untyped_ros_message);
  // Field name: state_path
  {
    const rosidl_runtime_c__String * str = &ros_message->state_path;
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

  // Field name: state_class
  {
    const rosidl_runtime_c__String * str = &ros_message->state_class;
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

  // Field name: initial_state_name
  {
    const rosidl_runtime_c__String * str = &ros_message->initial_state_name;
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

  // Field name: input_keys
  {
    size_t size = ros_message->input_keys.size;
    auto array_ptr = ros_message->input_keys.data;
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

  // Field name: output_keys
  {
    size_t size = ros_message->output_keys.size;
    auto array_ptr = ros_message->output_keys.data;
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

  // Field name: cond_outcome
  {
    size_t size = ros_message->cond_outcome.size;
    auto array_ptr = ros_message->cond_outcome.data;
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

  // Field name: cond_transition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, OutcomeCondition
      )()->data);
    size_t size = ros_message->cond_transition.size;
    auto array_ptr = ros_message->cond_transition.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: behavior_class
  {
    const rosidl_runtime_c__String * str = &ros_message->behavior_class;
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

  // Field name: parameter_names
  {
    size_t size = ros_message->parameter_names.size;
    auto array_ptr = ros_message->parameter_names.data;
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

  // Field name: parameter_values
  {
    size_t size = ros_message->parameter_values.size;
    auto array_ptr = ros_message->parameter_values.data;
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

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: outcomes
  {
    size_t size = ros_message->outcomes.size;
    auto array_ptr = ros_message->outcomes.data;
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

  // Field name: transitions
  {
    size_t size = ros_message->transitions.size;
    auto array_ptr = ros_message->transitions.data;
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

  // Field name: autonomy
  {
    size_t size = ros_message->autonomy.size;
    auto array_ptr = ros_message->autonomy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: userdata_keys
  {
    size_t size = ros_message->userdata_keys.size;
    auto array_ptr = ros_message->userdata_keys.data;
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

  // Field name: userdata_remapping
  {
    size_t size = ros_message->userdata_remapping.size;
    auto array_ptr = ros_message->userdata_remapping.data;
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

static bool _StateInstantiation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateInstantiation__ros_msg_type * ros_message = static_cast<_StateInstantiation__ros_msg_type *>(untyped_ros_message);
  // Field name: state_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state_path.data) {
      rosidl_runtime_c__String__init(&ros_message->state_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state_path'\n");
      return false;
    }
  }

  // Field name: state_class
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state_class.data) {
      rosidl_runtime_c__String__init(&ros_message->state_class);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state_class,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state_class'\n");
      return false;
    }
  }

  // Field name: initial_state_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->initial_state_name.data) {
      rosidl_runtime_c__String__init(&ros_message->initial_state_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->initial_state_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'initial_state_name'\n");
      return false;
    }
  }

  // Field name: input_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_keys.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->input_keys);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->input_keys, size)) {
      fprintf(stderr, "failed to create array for field 'input_keys'");
      return false;
    }
    auto array_ptr = ros_message->input_keys.data;
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
        fprintf(stderr, "failed to assign string into field 'input_keys'\n");
        return false;
      }
    }
  }

  // Field name: output_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->output_keys.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->output_keys);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->output_keys, size)) {
      fprintf(stderr, "failed to create array for field 'output_keys'");
      return false;
    }
    auto array_ptr = ros_message->output_keys.data;
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
        fprintf(stderr, "failed to assign string into field 'output_keys'\n");
        return false;
      }
    }
  }

  // Field name: cond_outcome
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cond_outcome.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->cond_outcome);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->cond_outcome, size)) {
      fprintf(stderr, "failed to create array for field 'cond_outcome'");
      return false;
    }
    auto array_ptr = ros_message->cond_outcome.data;
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
        fprintf(stderr, "failed to assign string into field 'cond_outcome'\n");
        return false;
      }
    }
  }

  // Field name: cond_transition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, OutcomeCondition
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cond_transition.data) {
      flexbe_msgs__msg__OutcomeCondition__Sequence__fini(&ros_message->cond_transition);
    }
    if (!flexbe_msgs__msg__OutcomeCondition__Sequence__init(&ros_message->cond_transition, size)) {
      fprintf(stderr, "failed to create array for field 'cond_transition'");
      return false;
    }
    auto array_ptr = ros_message->cond_transition.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: behavior_class
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->behavior_class.data) {
      rosidl_runtime_c__String__init(&ros_message->behavior_class);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->behavior_class,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'behavior_class'\n");
      return false;
    }
  }

  // Field name: parameter_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parameter_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->parameter_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->parameter_names, size)) {
      fprintf(stderr, "failed to create array for field 'parameter_names'");
      return false;
    }
    auto array_ptr = ros_message->parameter_names.data;
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
        fprintf(stderr, "failed to assign string into field 'parameter_names'\n");
        return false;
      }
    }
  }

  // Field name: parameter_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parameter_values.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->parameter_values);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->parameter_values, size)) {
      fprintf(stderr, "failed to create array for field 'parameter_values'");
      return false;
    }
    auto array_ptr = ros_message->parameter_values.data;
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
        fprintf(stderr, "failed to assign string into field 'parameter_values'\n");
        return false;
      }
    }
  }

  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: outcomes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->outcomes.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->outcomes);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->outcomes, size)) {
      fprintf(stderr, "failed to create array for field 'outcomes'");
      return false;
    }
    auto array_ptr = ros_message->outcomes.data;
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
        fprintf(stderr, "failed to assign string into field 'outcomes'\n");
        return false;
      }
    }
  }

  // Field name: transitions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->transitions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->transitions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->transitions, size)) {
      fprintf(stderr, "failed to create array for field 'transitions'");
      return false;
    }
    auto array_ptr = ros_message->transitions.data;
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
        fprintf(stderr, "failed to assign string into field 'transitions'\n");
        return false;
      }
    }
  }

  // Field name: autonomy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->autonomy.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->autonomy);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->autonomy, size)) {
      fprintf(stderr, "failed to create array for field 'autonomy'");
      return false;
    }
    auto array_ptr = ros_message->autonomy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: userdata_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->userdata_keys.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->userdata_keys);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->userdata_keys, size)) {
      fprintf(stderr, "failed to create array for field 'userdata_keys'");
      return false;
    }
    auto array_ptr = ros_message->userdata_keys.data;
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
        fprintf(stderr, "failed to assign string into field 'userdata_keys'\n");
        return false;
      }
    }
  }

  // Field name: userdata_remapping
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->userdata_remapping.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->userdata_remapping);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->userdata_remapping, size)) {
      fprintf(stderr, "failed to create array for field 'userdata_remapping'");
      return false;
    }
    auto array_ptr = ros_message->userdata_remapping.data;
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
        fprintf(stderr, "failed to assign string into field 'userdata_remapping'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t get_serialized_size_flexbe_msgs__msg__StateInstantiation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateInstantiation__ros_msg_type * ros_message = static_cast<const _StateInstantiation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_path.size + 1);
  // field.name state_class
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_class.size + 1);
  // field.name initial_state_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->initial_state_name.size + 1);
  // field.name input_keys
  {
    size_t array_size = ros_message->input_keys.size;
    auto array_ptr = ros_message->input_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name output_keys
  {
    size_t array_size = ros_message->output_keys.size;
    auto array_ptr = ros_message->output_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name cond_outcome
  {
    size_t array_size = ros_message->cond_outcome.size;
    auto array_ptr = ros_message->cond_outcome.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name cond_transition
  {
    size_t array_size = ros_message->cond_transition.size;
    auto array_ptr = ros_message->cond_transition.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_flexbe_msgs__msg__OutcomeCondition(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name behavior_class
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behavior_class.size + 1);
  // field.name parameter_names
  {
    size_t array_size = ros_message->parameter_names.size;
    auto array_ptr = ros_message->parameter_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name parameter_values
  {
    size_t array_size = ros_message->parameter_values.size;
    auto array_ptr = ros_message->parameter_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outcomes
  {
    size_t array_size = ros_message->outcomes.size;
    auto array_ptr = ros_message->outcomes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name transitions
  {
    size_t array_size = ros_message->transitions.size;
    auto array_ptr = ros_message->transitions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name autonomy
  {
    size_t array_size = ros_message->autonomy.size;
    auto array_ptr = ros_message->autonomy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name userdata_keys
  {
    size_t array_size = ros_message->userdata_keys.size;
    auto array_ptr = ros_message->userdata_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name userdata_remapping
  {
    size_t array_size = ros_message->userdata_remapping.size;
    auto array_ptr = ros_message->userdata_remapping.data;
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

static uint32_t _StateInstantiation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flexbe_msgs__msg__StateInstantiation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flexbe_msgs
size_t max_serialized_size_flexbe_msgs__msg__StateInstantiation(
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

  // member: state_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: state_class
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: initial_state_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: input_keys
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
  // member: output_keys
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
  // member: cond_outcome
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
  // member: cond_transition
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_flexbe_msgs__msg__OutcomeCondition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: behavior_class
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: parameter_names
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
  // member: parameter_values
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
  // member: position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: outcomes
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
  // member: transitions
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
  // member: autonomy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: userdata_keys
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
  // member: userdata_remapping
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
    using DataType = flexbe_msgs__msg__StateInstantiation;
    is_plain =
      (
      offsetof(DataType, userdata_remapping) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StateInstantiation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flexbe_msgs__msg__StateInstantiation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateInstantiation = {
  "flexbe_msgs::msg",
  "StateInstantiation",
  _StateInstantiation__cdr_serialize,
  _StateInstantiation__cdr_deserialize,
  _StateInstantiation__get_serialized_size,
  _StateInstantiation__max_serialized_size
};

static rosidl_message_type_support_t _StateInstantiation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateInstantiation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flexbe_msgs, msg, StateInstantiation)() {
  return &_StateInstantiation__type_support;
}

#if defined(__cplusplus)
}
#endif
