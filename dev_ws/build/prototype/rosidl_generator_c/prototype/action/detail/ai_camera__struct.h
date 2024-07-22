// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype:action/AiCamera.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_H_
#define PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_request'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_Goal
{
  rosidl_runtime_c__String user_request;
} prototype__action__AiCamera_Goal;

// Struct for a sequence of prototype__action__AiCamera_Goal.
typedef struct prototype__action__AiCamera_Goal__Sequence
{
  prototype__action__AiCamera_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ai_end'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_Result
{
  rosidl_runtime_c__String ai_end;
} prototype__action__AiCamera_Result;

// Struct for a sequence of prototype__action__AiCamera_Result.
typedef struct prototype__action__AiCamera_Result__Sequence
{
  prototype__action__AiCamera_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ai_response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_Feedback
{
  rosidl_runtime_c__String ai_response;
} prototype__action__AiCamera_Feedback;

// Struct for a sequence of prototype__action__AiCamera_Feedback.
typedef struct prototype__action__AiCamera_Feedback__Sequence
{
  prototype__action__AiCamera_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "prototype/action/detail/ai_camera__struct.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype__action__AiCamera_Goal goal;
} prototype__action__AiCamera_SendGoal_Request;

// Struct for a sequence of prototype__action__AiCamera_SendGoal_Request.
typedef struct prototype__action__AiCamera_SendGoal_Request__Sequence
{
  prototype__action__AiCamera_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} prototype__action__AiCamera_SendGoal_Response;

// Struct for a sequence of prototype__action__AiCamera_SendGoal_Response.
typedef struct prototype__action__AiCamera_SendGoal_Response__Sequence
{
  prototype__action__AiCamera_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} prototype__action__AiCamera_GetResult_Request;

// Struct for a sequence of prototype__action__AiCamera_GetResult_Request.
typedef struct prototype__action__AiCamera_GetResult_Request__Sequence
{
  prototype__action__AiCamera_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/ai_camera__struct.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_GetResult_Response
{
  int8_t status;
  prototype__action__AiCamera_Result result;
} prototype__action__AiCamera_GetResult_Response;

// Struct for a sequence of prototype__action__AiCamera_GetResult_Response.
typedef struct prototype__action__AiCamera_GetResult_Response__Sequence
{
  prototype__action__AiCamera_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/ai_camera__struct.h"

/// Struct defined in action/AiCamera in the package prototype.
typedef struct prototype__action__AiCamera_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype__action__AiCamera_Feedback feedback;
} prototype__action__AiCamera_FeedbackMessage;

// Struct for a sequence of prototype__action__AiCamera_FeedbackMessage.
typedef struct prototype__action__AiCamera_FeedbackMessage__Sequence
{
  prototype__action__AiCamera_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__AiCamera_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_H_
