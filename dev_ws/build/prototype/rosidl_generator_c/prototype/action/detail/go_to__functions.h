// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from prototype:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__GO_TO__FUNCTIONS_H_
#define PROTOTYPE__ACTION__DETAIL__GO_TO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "prototype/msg/rosidl_generator_c__visibility_control.h"

#include "prototype/action/detail/go_to__struct.h"

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_Goal
 * )) before or use
 * prototype__action__GoTo_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Goal__init(prototype__action__GoTo_Goal * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Goal__fini(prototype__action__GoTo_Goal * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Goal *
prototype__action__GoTo_Goal__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Goal__destroy(prototype__action__GoTo_Goal * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Goal__are_equal(const prototype__action__GoTo_Goal * lhs, const prototype__action__GoTo_Goal * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_Goal__copy(
  const prototype__action__GoTo_Goal * input,
  prototype__action__GoTo_Goal * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Goal__Sequence__init(prototype__action__GoTo_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Goal__Sequence__fini(prototype__action__GoTo_Goal__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Goal__Sequence *
prototype__action__GoTo_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Goal__Sequence__destroy(prototype__action__GoTo_Goal__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Goal__Sequence__are_equal(const prototype__action__GoTo_Goal__Sequence * lhs, const prototype__action__GoTo_Goal__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_Goal__Sequence__copy(
  const prototype__action__GoTo_Goal__Sequence * input,
  prototype__action__GoTo_Goal__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_Result
 * )) before or use
 * prototype__action__GoTo_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Result__init(prototype__action__GoTo_Result * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Result__fini(prototype__action__GoTo_Result * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Result *
prototype__action__GoTo_Result__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Result__destroy(prototype__action__GoTo_Result * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Result__are_equal(const prototype__action__GoTo_Result * lhs, const prototype__action__GoTo_Result * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_Result__copy(
  const prototype__action__GoTo_Result * input,
  prototype__action__GoTo_Result * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Result__Sequence__init(prototype__action__GoTo_Result__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Result__Sequence__fini(prototype__action__GoTo_Result__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Result__Sequence *
prototype__action__GoTo_Result__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Result__Sequence__destroy(prototype__action__GoTo_Result__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Result__Sequence__are_equal(const prototype__action__GoTo_Result__Sequence * lhs, const prototype__action__GoTo_Result__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_Result__Sequence__copy(
  const prototype__action__GoTo_Result__Sequence * input,
  prototype__action__GoTo_Result__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_Feedback
 * )) before or use
 * prototype__action__GoTo_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Feedback__init(prototype__action__GoTo_Feedback * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Feedback__fini(prototype__action__GoTo_Feedback * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Feedback *
prototype__action__GoTo_Feedback__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Feedback__destroy(prototype__action__GoTo_Feedback * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Feedback__are_equal(const prototype__action__GoTo_Feedback * lhs, const prototype__action__GoTo_Feedback * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_Feedback__copy(
  const prototype__action__GoTo_Feedback * input,
  prototype__action__GoTo_Feedback * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Feedback__Sequence__init(prototype__action__GoTo_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Feedback__Sequence__fini(prototype__action__GoTo_Feedback__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_Feedback__Sequence *
prototype__action__GoTo_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_Feedback__Sequence__destroy(prototype__action__GoTo_Feedback__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_Feedback__Sequence__are_equal(const prototype__action__GoTo_Feedback__Sequence * lhs, const prototype__action__GoTo_Feedback__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_Feedback__Sequence__copy(
  const prototype__action__GoTo_Feedback__Sequence * input,
  prototype__action__GoTo_Feedback__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_SendGoal_Request
 * )) before or use
 * prototype__action__GoTo_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Request__init(prototype__action__GoTo_SendGoal_Request * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Request__fini(prototype__action__GoTo_SendGoal_Request * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_SendGoal_Request *
prototype__action__GoTo_SendGoal_Request__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Request__destroy(prototype__action__GoTo_SendGoal_Request * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Request__are_equal(const prototype__action__GoTo_SendGoal_Request * lhs, const prototype__action__GoTo_SendGoal_Request * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_SendGoal_Request__copy(
  const prototype__action__GoTo_SendGoal_Request * input,
  prototype__action__GoTo_SendGoal_Request * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Request__Sequence__init(prototype__action__GoTo_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Request__Sequence__fini(prototype__action__GoTo_SendGoal_Request__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_SendGoal_Request__Sequence *
prototype__action__GoTo_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Request__Sequence__destroy(prototype__action__GoTo_SendGoal_Request__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Request__Sequence__are_equal(const prototype__action__GoTo_SendGoal_Request__Sequence * lhs, const prototype__action__GoTo_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_SendGoal_Request__Sequence__copy(
  const prototype__action__GoTo_SendGoal_Request__Sequence * input,
  prototype__action__GoTo_SendGoal_Request__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_SendGoal_Response
 * )) before or use
 * prototype__action__GoTo_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Response__init(prototype__action__GoTo_SendGoal_Response * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Response__fini(prototype__action__GoTo_SendGoal_Response * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_SendGoal_Response *
prototype__action__GoTo_SendGoal_Response__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Response__destroy(prototype__action__GoTo_SendGoal_Response * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Response__are_equal(const prototype__action__GoTo_SendGoal_Response * lhs, const prototype__action__GoTo_SendGoal_Response * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_SendGoal_Response__copy(
  const prototype__action__GoTo_SendGoal_Response * input,
  prototype__action__GoTo_SendGoal_Response * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Response__Sequence__init(prototype__action__GoTo_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Response__Sequence__fini(prototype__action__GoTo_SendGoal_Response__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_SendGoal_Response__Sequence *
prototype__action__GoTo_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_SendGoal_Response__Sequence__destroy(prototype__action__GoTo_SendGoal_Response__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_SendGoal_Response__Sequence__are_equal(const prototype__action__GoTo_SendGoal_Response__Sequence * lhs, const prototype__action__GoTo_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_SendGoal_Response__Sequence__copy(
  const prototype__action__GoTo_SendGoal_Response__Sequence * input,
  prototype__action__GoTo_SendGoal_Response__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_GetResult_Request
 * )) before or use
 * prototype__action__GoTo_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Request__init(prototype__action__GoTo_GetResult_Request * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Request__fini(prototype__action__GoTo_GetResult_Request * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_GetResult_Request *
prototype__action__GoTo_GetResult_Request__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Request__destroy(prototype__action__GoTo_GetResult_Request * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Request__are_equal(const prototype__action__GoTo_GetResult_Request * lhs, const prototype__action__GoTo_GetResult_Request * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_GetResult_Request__copy(
  const prototype__action__GoTo_GetResult_Request * input,
  prototype__action__GoTo_GetResult_Request * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Request__Sequence__init(prototype__action__GoTo_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Request__Sequence__fini(prototype__action__GoTo_GetResult_Request__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_GetResult_Request__Sequence *
prototype__action__GoTo_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Request__Sequence__destroy(prototype__action__GoTo_GetResult_Request__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Request__Sequence__are_equal(const prototype__action__GoTo_GetResult_Request__Sequence * lhs, const prototype__action__GoTo_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_GetResult_Request__Sequence__copy(
  const prototype__action__GoTo_GetResult_Request__Sequence * input,
  prototype__action__GoTo_GetResult_Request__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_GetResult_Response
 * )) before or use
 * prototype__action__GoTo_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Response__init(prototype__action__GoTo_GetResult_Response * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Response__fini(prototype__action__GoTo_GetResult_Response * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_GetResult_Response *
prototype__action__GoTo_GetResult_Response__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Response__destroy(prototype__action__GoTo_GetResult_Response * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Response__are_equal(const prototype__action__GoTo_GetResult_Response * lhs, const prototype__action__GoTo_GetResult_Response * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_GetResult_Response__copy(
  const prototype__action__GoTo_GetResult_Response * input,
  prototype__action__GoTo_GetResult_Response * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Response__Sequence__init(prototype__action__GoTo_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Response__Sequence__fini(prototype__action__GoTo_GetResult_Response__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_GetResult_Response__Sequence *
prototype__action__GoTo_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_GetResult_Response__Sequence__destroy(prototype__action__GoTo_GetResult_Response__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_GetResult_Response__Sequence__are_equal(const prototype__action__GoTo_GetResult_Response__Sequence * lhs, const prototype__action__GoTo_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_GetResult_Response__Sequence__copy(
  const prototype__action__GoTo_GetResult_Response__Sequence * input,
  prototype__action__GoTo_GetResult_Response__Sequence * output);

/// Initialize action/GoTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__action__GoTo_FeedbackMessage
 * )) before or use
 * prototype__action__GoTo_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_FeedbackMessage__init(prototype__action__GoTo_FeedbackMessage * msg);

/// Finalize action/GoTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_FeedbackMessage__fini(prototype__action__GoTo_FeedbackMessage * msg);

/// Create action/GoTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__action__GoTo_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_FeedbackMessage *
prototype__action__GoTo_FeedbackMessage__create();

/// Destroy action/GoTo message.
/**
 * It calls
 * prototype__action__GoTo_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_FeedbackMessage__destroy(prototype__action__GoTo_FeedbackMessage * msg);

/// Check for action/GoTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_FeedbackMessage__are_equal(const prototype__action__GoTo_FeedbackMessage * lhs, const prototype__action__GoTo_FeedbackMessage * rhs);

/// Copy a action/GoTo message.
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
prototype__action__GoTo_FeedbackMessage__copy(
  const prototype__action__GoTo_FeedbackMessage * input,
  prototype__action__GoTo_FeedbackMessage * output);

/// Initialize array of action/GoTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__action__GoTo_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_FeedbackMessage__Sequence__init(prototype__action__GoTo_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_FeedbackMessage__Sequence__fini(prototype__action__GoTo_FeedbackMessage__Sequence * array);

/// Create array of action/GoTo messages.
/**
 * It allocates the memory for the array and calls
 * prototype__action__GoTo_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__action__GoTo_FeedbackMessage__Sequence *
prototype__action__GoTo_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoTo messages.
/**
 * It calls
 * prototype__action__GoTo_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__action__GoTo_FeedbackMessage__Sequence__destroy(prototype__action__GoTo_FeedbackMessage__Sequence * array);

/// Check for action/GoTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__action__GoTo_FeedbackMessage__Sequence__are_equal(const prototype__action__GoTo_FeedbackMessage__Sequence * lhs, const prototype__action__GoTo_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoTo messages.
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
prototype__action__GoTo_FeedbackMessage__Sequence__copy(
  const prototype__action__GoTo_FeedbackMessage__Sequence * input,
  prototype__action__GoTo_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__ACTION__DETAIL__GO_TO__FUNCTIONS_H_
