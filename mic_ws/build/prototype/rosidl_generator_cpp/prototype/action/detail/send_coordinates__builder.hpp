// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:action/SendCoordinates.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__BUILDER_HPP_
#define PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/action/detail/send_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_Goal_y
{
public:
  explicit Init_SendCoordinates_Goal_y(::prototype::action::SendCoordinates_Goal & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_Goal y(::prototype::action::SendCoordinates_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_Goal msg_;
};

class Init_SendCoordinates_Goal_x
{
public:
  Init_SendCoordinates_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_Goal_y x(::prototype::action::SendCoordinates_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SendCoordinates_Goal_y(msg_);
  }

private:
  ::prototype::action::SendCoordinates_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_Goal>()
{
  return prototype::action::builder::Init_SendCoordinates_Goal_x();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_Result_success
{
public:
  Init_SendCoordinates_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::SendCoordinates_Result success(::prototype::action::SendCoordinates_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_Result>()
{
  return prototype::action::builder::Init_SendCoordinates_Result_success();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_Feedback_current_y
{
public:
  explicit Init_SendCoordinates_Feedback_current_y(::prototype::action::SendCoordinates_Feedback & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_Feedback current_y(::prototype::action::SendCoordinates_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_Feedback msg_;
};

class Init_SendCoordinates_Feedback_current_x
{
public:
  Init_SendCoordinates_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_Feedback_current_y current_x(::prototype::action::SendCoordinates_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_SendCoordinates_Feedback_current_y(msg_);
  }

private:
  ::prototype::action::SendCoordinates_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_Feedback>()
{
  return prototype::action::builder::Init_SendCoordinates_Feedback_current_x();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_SendGoal_Request_goal
{
public:
  explicit Init_SendCoordinates_SendGoal_Request_goal(::prototype::action::SendCoordinates_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_SendGoal_Request goal(::prototype::action::SendCoordinates_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_SendGoal_Request msg_;
};

class Init_SendCoordinates_SendGoal_Request_goal_id
{
public:
  Init_SendCoordinates_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_SendGoal_Request_goal goal_id(::prototype::action::SendCoordinates_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendCoordinates_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype::action::SendCoordinates_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_SendGoal_Request>()
{
  return prototype::action::builder::Init_SendCoordinates_SendGoal_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_SendGoal_Response_stamp
{
public:
  explicit Init_SendCoordinates_SendGoal_Response_stamp(::prototype::action::SendCoordinates_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_SendGoal_Response stamp(::prototype::action::SendCoordinates_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_SendGoal_Response msg_;
};

class Init_SendCoordinates_SendGoal_Response_accepted
{
public:
  Init_SendCoordinates_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_SendGoal_Response_stamp accepted(::prototype::action::SendCoordinates_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SendCoordinates_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype::action::SendCoordinates_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_SendGoal_Response>()
{
  return prototype::action::builder::Init_SendCoordinates_SendGoal_Response_accepted();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_GetResult_Request_goal_id
{
public:
  Init_SendCoordinates_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::SendCoordinates_GetResult_Request goal_id(::prototype::action::SendCoordinates_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_GetResult_Request>()
{
  return prototype::action::builder::Init_SendCoordinates_GetResult_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_GetResult_Response_result
{
public:
  explicit Init_SendCoordinates_GetResult_Response_result(::prototype::action::SendCoordinates_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_GetResult_Response result(::prototype::action::SendCoordinates_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_GetResult_Response msg_;
};

class Init_SendCoordinates_GetResult_Response_status
{
public:
  Init_SendCoordinates_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_GetResult_Response_result status(::prototype::action::SendCoordinates_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SendCoordinates_GetResult_Response_result(msg_);
  }

private:
  ::prototype::action::SendCoordinates_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_GetResult_Response>()
{
  return prototype::action::builder::Init_SendCoordinates_GetResult_Response_status();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_SendCoordinates_FeedbackMessage_feedback
{
public:
  explicit Init_SendCoordinates_FeedbackMessage_feedback(::prototype::action::SendCoordinates_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype::action::SendCoordinates_FeedbackMessage feedback(::prototype::action::SendCoordinates_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::SendCoordinates_FeedbackMessage msg_;
};

class Init_SendCoordinates_FeedbackMessage_goal_id
{
public:
  Init_SendCoordinates_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCoordinates_FeedbackMessage_feedback goal_id(::prototype::action::SendCoordinates_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendCoordinates_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype::action::SendCoordinates_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::SendCoordinates_FeedbackMessage>()
{
  return prototype::action::builder::Init_SendCoordinates_FeedbackMessage_goal_id();
}

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__BUILDER_HPP_
