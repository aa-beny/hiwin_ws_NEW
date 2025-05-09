// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flexbe_msgs:msg/SynthesisRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__FUNCTIONS_H_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flexbe_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flexbe_msgs/msg/detail/synthesis_request__struct.h"

/// Initialize msg/SynthesisRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flexbe_msgs__msg__SynthesisRequest
 * )) before or use
 * flexbe_msgs__msg__SynthesisRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__init(flexbe_msgs__msg__SynthesisRequest * msg);

/// Finalize msg/SynthesisRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__SynthesisRequest__fini(flexbe_msgs__msg__SynthesisRequest * msg);

/// Create msg/SynthesisRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flexbe_msgs__msg__SynthesisRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__SynthesisRequest *
flexbe_msgs__msg__SynthesisRequest__create();

/// Destroy msg/SynthesisRequest message.
/**
 * It calls
 * flexbe_msgs__msg__SynthesisRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__SynthesisRequest__destroy(flexbe_msgs__msg__SynthesisRequest * msg);

/// Check for msg/SynthesisRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__are_equal(const flexbe_msgs__msg__SynthesisRequest * lhs, const flexbe_msgs__msg__SynthesisRequest * rhs);

/// Copy a msg/SynthesisRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__copy(
  const flexbe_msgs__msg__SynthesisRequest * input,
  flexbe_msgs__msg__SynthesisRequest * output);

/// Initialize array of msg/SynthesisRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * flexbe_msgs__msg__SynthesisRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__Sequence__init(flexbe_msgs__msg__SynthesisRequest__Sequence * array, size_t size);

/// Finalize array of msg/SynthesisRequest messages.
/**
 * It calls
 * flexbe_msgs__msg__SynthesisRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__SynthesisRequest__Sequence__fini(flexbe_msgs__msg__SynthesisRequest__Sequence * array);

/// Create array of msg/SynthesisRequest messages.
/**
 * It allocates the memory for the array and calls
 * flexbe_msgs__msg__SynthesisRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__SynthesisRequest__Sequence *
flexbe_msgs__msg__SynthesisRequest__Sequence__create(size_t size);

/// Destroy array of msg/SynthesisRequest messages.
/**
 * It calls
 * flexbe_msgs__msg__SynthesisRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__SynthesisRequest__Sequence__destroy(flexbe_msgs__msg__SynthesisRequest__Sequence * array);

/// Check for msg/SynthesisRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__Sequence__are_equal(const flexbe_msgs__msg__SynthesisRequest__Sequence * lhs, const flexbe_msgs__msg__SynthesisRequest__Sequence * rhs);

/// Copy an array of msg/SynthesisRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__SynthesisRequest__Sequence__copy(
  const flexbe_msgs__msg__SynthesisRequest__Sequence * input,
  flexbe_msgs__msg__SynthesisRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_REQUEST__FUNCTIONS_H_
