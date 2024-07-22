// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__FUNCTIONS_H_
#define PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "prototype/msg/rosidl_generator_c__visibility_control.h"

#include "prototype/msg/detail/distance_angle__struct.h"

/// Initialize msg/DistanceAngle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__msg__DistanceAngle
 * )) before or use
 * prototype__msg__DistanceAngle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__init(prototype__msg__DistanceAngle * msg);

/// Finalize msg/DistanceAngle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__DistanceAngle__fini(prototype__msg__DistanceAngle * msg);

/// Create msg/DistanceAngle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__msg__DistanceAngle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__msg__DistanceAngle *
prototype__msg__DistanceAngle__create();

/// Destroy msg/DistanceAngle message.
/**
 * It calls
 * prototype__msg__DistanceAngle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__DistanceAngle__destroy(prototype__msg__DistanceAngle * msg);

/// Check for msg/DistanceAngle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__are_equal(const prototype__msg__DistanceAngle * lhs, const prototype__msg__DistanceAngle * rhs);

/// Copy a msg/DistanceAngle message.
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
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__copy(
  const prototype__msg__DistanceAngle * input,
  prototype__msg__DistanceAngle * output);

/// Initialize array of msg/DistanceAngle messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__msg__DistanceAngle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__Sequence__init(prototype__msg__DistanceAngle__Sequence * array, size_t size);

/// Finalize array of msg/DistanceAngle messages.
/**
 * It calls
 * prototype__msg__DistanceAngle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__DistanceAngle__Sequence__fini(prototype__msg__DistanceAngle__Sequence * array);

/// Create array of msg/DistanceAngle messages.
/**
 * It allocates the memory for the array and calls
 * prototype__msg__DistanceAngle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__msg__DistanceAngle__Sequence *
prototype__msg__DistanceAngle__Sequence__create(size_t size);

/// Destroy array of msg/DistanceAngle messages.
/**
 * It calls
 * prototype__msg__DistanceAngle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__DistanceAngle__Sequence__destroy(prototype__msg__DistanceAngle__Sequence * array);

/// Check for msg/DistanceAngle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__Sequence__are_equal(const prototype__msg__DistanceAngle__Sequence * lhs, const prototype__msg__DistanceAngle__Sequence * rhs);

/// Copy an array of msg/DistanceAngle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__DistanceAngle__Sequence__copy(
  const prototype__msg__DistanceAngle__Sequence * input,
  prototype__msg__DistanceAngle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__FUNCTIONS_H_
