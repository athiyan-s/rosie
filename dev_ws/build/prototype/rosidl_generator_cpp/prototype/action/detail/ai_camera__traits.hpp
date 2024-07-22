// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from prototype:action/AiCamera.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__AI_CAMERA__TRAITS_HPP_
#define PROTOTYPE__ACTION__DETAIL__AI_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "prototype/action/detail/ai_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: user_request
  {
    out << "user_request: ";
    rosidl_generator_traits::value_to_yaml(msg.user_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: user_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_request: ";
    rosidl_generator_traits::value_to_yaml(msg.user_request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_Goal & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_Goal>()
{
  return "prototype::action::AiCamera_Goal";
}

template<>
inline const char * name<prototype::action::AiCamera_Goal>()
{
  return "prototype/action/AiCamera_Goal";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<prototype::action::AiCamera_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: ai_end
  {
    out << "ai_end: ";
    rosidl_generator_traits::value_to_yaml(msg.ai_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ai_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ai_end: ";
    rosidl_generator_traits::value_to_yaml(msg.ai_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_Result & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_Result>()
{
  return "prototype::action::AiCamera_Result";
}

template<>
inline const char * name<prototype::action::AiCamera_Result>()
{
  return "prototype/action/AiCamera_Result";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<prototype::action::AiCamera_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: ai_response
  {
    out << "ai_response: ";
    rosidl_generator_traits::value_to_yaml(msg.ai_response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ai_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ai_response: ";
    rosidl_generator_traits::value_to_yaml(msg.ai_response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_Feedback & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_Feedback>()
{
  return "prototype::action::AiCamera_Feedback";
}

template<>
inline const char * name<prototype::action::AiCamera_Feedback>()
{
  return "prototype/action/AiCamera_Feedback";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<prototype::action::AiCamera_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "prototype/action/detail/ai_camera__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_SendGoal_Request & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_SendGoal_Request>()
{
  return "prototype::action::AiCamera_SendGoal_Request";
}

template<>
inline const char * name<prototype::action::AiCamera_SendGoal_Request>()
{
  return "prototype/action/AiCamera_SendGoal_Request";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<prototype::action::AiCamera_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<prototype::action::AiCamera_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::AiCamera_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_SendGoal_Response & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_SendGoal_Response>()
{
  return "prototype::action::AiCamera_SendGoal_Response";
}

template<>
inline const char * name<prototype::action::AiCamera_SendGoal_Response>()
{
  return "prototype/action/AiCamera_SendGoal_Response";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<prototype::action::AiCamera_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype::action::AiCamera_SendGoal>()
{
  return "prototype::action::AiCamera_SendGoal";
}

template<>
inline const char * name<prototype::action::AiCamera_SendGoal>()
{
  return "prototype/action/AiCamera_SendGoal";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype::action::AiCamera_SendGoal_Request>::value &&
    has_fixed_size<prototype::action::AiCamera_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype::action::AiCamera_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype::action::AiCamera_SendGoal_Request>::value &&
    has_bounded_size<prototype::action::AiCamera_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<prototype::action::AiCamera_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<prototype::action::AiCamera_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype::action::AiCamera_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_GetResult_Request & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_GetResult_Request>()
{
  return "prototype::action::AiCamera_GetResult_Request";
}

template<>
inline const char * name<prototype::action::AiCamera_GetResult_Request>()
{
  return "prototype/action/AiCamera_GetResult_Request";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::AiCamera_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/ai_camera__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_GetResult_Response & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_GetResult_Response>()
{
  return "prototype::action::AiCamera_GetResult_Response";
}

template<>
inline const char * name<prototype::action::AiCamera_GetResult_Response>()
{
  return "prototype/action/AiCamera_GetResult_Response";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<prototype::action::AiCamera_Result>::value> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<prototype::action::AiCamera_Result>::value> {};

template<>
struct is_message<prototype::action::AiCamera_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype::action::AiCamera_GetResult>()
{
  return "prototype::action::AiCamera_GetResult";
}

template<>
inline const char * name<prototype::action::AiCamera_GetResult>()
{
  return "prototype/action/AiCamera_GetResult";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype::action::AiCamera_GetResult_Request>::value &&
    has_fixed_size<prototype::action::AiCamera_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype::action::AiCamera_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype::action::AiCamera_GetResult_Request>::value &&
    has_bounded_size<prototype::action::AiCamera_GetResult_Response>::value
  >
{
};

template<>
struct is_service<prototype::action::AiCamera_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<prototype::action::AiCamera_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype::action::AiCamera_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/ai_camera__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const AiCamera_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AiCamera_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCamera_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::AiCamera_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::AiCamera_FeedbackMessage & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::AiCamera_FeedbackMessage>()
{
  return "prototype::action::AiCamera_FeedbackMessage";
}

template<>
inline const char * name<prototype::action::AiCamera_FeedbackMessage>()
{
  return "prototype/action/AiCamera_FeedbackMessage";
}

template<>
struct has_fixed_size<prototype::action::AiCamera_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<prototype::action::AiCamera_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::AiCamera_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<prototype::action::AiCamera_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::AiCamera_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<prototype::action::AiCamera>
  : std::true_type
{
};

template<>
struct is_action_goal<prototype::action::AiCamera_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<prototype::action::AiCamera_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<prototype::action::AiCamera_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOTYPE__ACTION__DETAIL__AI_CAMERA__TRAITS_HPP_
