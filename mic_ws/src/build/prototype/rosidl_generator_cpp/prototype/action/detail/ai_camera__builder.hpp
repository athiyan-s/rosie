// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:action/AiCamera.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__AI_CAMERA__BUILDER_HPP_
#define PROTOTYPE__ACTION__DETAIL__AI_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/action/detail/ai_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_Goal_user_request
{
public:
  Init_AiCamera_Goal_user_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::AiCamera_Goal user_request(::prototype::action::AiCamera_Goal::_user_request_type arg)
  {
    msg_.user_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_Goal>()
{
  return prototype::action::builder::Init_AiCamera_Goal_user_request();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_Result_ai_end
{
public:
  Init_AiCamera_Result_ai_end()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::AiCamera_Result ai_end(::prototype::action::AiCamera_Result::_ai_end_type arg)
  {
    msg_.ai_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_Result>()
{
  return prototype::action::builder::Init_AiCamera_Result_ai_end();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_Feedback_ai_response
{
public:
  Init_AiCamera_Feedback_ai_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::AiCamera_Feedback ai_response(::prototype::action::AiCamera_Feedback::_ai_response_type arg)
  {
    msg_.ai_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_Feedback>()
{
  return prototype::action::builder::Init_AiCamera_Feedback_ai_response();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_SendGoal_Request_goal
{
public:
  explicit Init_AiCamera_SendGoal_Request_goal(::prototype::action::AiCamera_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype::action::AiCamera_SendGoal_Request goal(::prototype::action::AiCamera_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_SendGoal_Request msg_;
};

class Init_AiCamera_SendGoal_Request_goal_id
{
public:
  Init_AiCamera_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AiCamera_SendGoal_Request_goal goal_id(::prototype::action::AiCamera_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AiCamera_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype::action::AiCamera_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_SendGoal_Request>()
{
  return prototype::action::builder::Init_AiCamera_SendGoal_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_SendGoal_Response_stamp
{
public:
  explicit Init_AiCamera_SendGoal_Response_stamp(::prototype::action::AiCamera_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::AiCamera_SendGoal_Response stamp(::prototype::action::AiCamera_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_SendGoal_Response msg_;
};

class Init_AiCamera_SendGoal_Response_accepted
{
public:
  Init_AiCamera_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AiCamera_SendGoal_Response_stamp accepted(::prototype::action::AiCamera_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AiCamera_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype::action::AiCamera_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_SendGoal_Response>()
{
  return prototype::action::builder::Init_AiCamera_SendGoal_Response_accepted();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_GetResult_Request_goal_id
{
public:
  Init_AiCamera_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::AiCamera_GetResult_Request goal_id(::prototype::action::AiCamera_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_GetResult_Request>()
{
  return prototype::action::builder::Init_AiCamera_GetResult_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_GetResult_Response_result
{
public:
  explicit Init_AiCamera_GetResult_Response_result(::prototype::action::AiCamera_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::AiCamera_GetResult_Response result(::prototype::action::AiCamera_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_GetResult_Response msg_;
};

class Init_AiCamera_GetResult_Response_status
{
public:
  Init_AiCamera_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AiCamera_GetResult_Response_result status(::prototype::action::AiCamera_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AiCamera_GetResult_Response_result(msg_);
  }

private:
  ::prototype::action::AiCamera_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_GetResult_Response>()
{
  return prototype::action::builder::Init_AiCamera_GetResult_Response_status();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_AiCamera_FeedbackMessage_feedback
{
public:
  explicit Init_AiCamera_FeedbackMessage_feedback(::prototype::action::AiCamera_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype::action::AiCamera_FeedbackMessage feedback(::prototype::action::AiCamera_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::AiCamera_FeedbackMessage msg_;
};

class Init_AiCamera_FeedbackMessage_goal_id
{
public:
  Init_AiCamera_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AiCamera_FeedbackMessage_feedback goal_id(::prototype::action::AiCamera_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AiCamera_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype::action::AiCamera_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::AiCamera_FeedbackMessage>()
{
  return prototype::action::builder::Init_AiCamera_FeedbackMessage_goal_id();
}

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__AI_CAMERA__BUILDER_HPP_
