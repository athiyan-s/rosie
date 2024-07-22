// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from prototype:action/AiCamera.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_HPP_
#define PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_Goal __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_Goal __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_Goal_
{
  using Type = AiCamera_Goal_<ContainerAllocator>;

  explicit AiCamera_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_request = "";
    }
  }

  explicit AiCamera_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_request = "";
    }
  }

  // field types and members
  using _user_request_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_request_type user_request;

  // setters for named parameter idiom
  Type & set__user_request(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_Goal
    std::shared_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_Goal
    std::shared_ptr<prototype::action::AiCamera_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_Goal_ & other) const
  {
    if (this->user_request != other.user_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_Goal_

// alias to use template instance with default allocator
using AiCamera_Goal =
  prototype::action::AiCamera_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_Result __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_Result __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_Result_
{
  using Type = AiCamera_Result_<ContainerAllocator>;

  explicit AiCamera_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ai_end = "";
    }
  }

  explicit AiCamera_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ai_end(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ai_end = "";
    }
  }

  // field types and members
  using _ai_end_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ai_end_type ai_end;

  // setters for named parameter idiom
  Type & set__ai_end(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ai_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_Result
    std::shared_ptr<prototype::action::AiCamera_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_Result
    std::shared_ptr<prototype::action::AiCamera_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_Result_ & other) const
  {
    if (this->ai_end != other.ai_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_Result_

// alias to use template instance with default allocator
using AiCamera_Result =
  prototype::action::AiCamera_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_Feedback __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_Feedback_
{
  using Type = AiCamera_Feedback_<ContainerAllocator>;

  explicit AiCamera_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ai_response = "";
    }
  }

  explicit AiCamera_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ai_response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ai_response = "";
    }
  }

  // field types and members
  using _ai_response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ai_response_type ai_response;

  // setters for named parameter idiom
  Type & set__ai_response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ai_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_Feedback
    std::shared_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_Feedback
    std::shared_ptr<prototype::action::AiCamera_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_Feedback_ & other) const
  {
    if (this->ai_response != other.ai_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_Feedback_

// alias to use template instance with default allocator
using AiCamera_Feedback =
  prototype::action::AiCamera_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "prototype/action/detail/ai_camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_SendGoal_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_SendGoal_Request_
{
  using Type = AiCamera_SendGoal_Request_<ContainerAllocator>;

  explicit AiCamera_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit AiCamera_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    prototype::action::AiCamera_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const prototype::action::AiCamera_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_SendGoal_Request
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_SendGoal_Request
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_SendGoal_Request_

// alias to use template instance with default allocator
using AiCamera_SendGoal_Request =
  prototype::action::AiCamera_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_SendGoal_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_SendGoal_Response_
{
  using Type = AiCamera_SendGoal_Response_<ContainerAllocator>;

  explicit AiCamera_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit AiCamera_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_SendGoal_Response
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_SendGoal_Response
    std::shared_ptr<prototype::action::AiCamera_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_SendGoal_Response_

// alias to use template instance with default allocator
using AiCamera_SendGoal_Response =
  prototype::action::AiCamera_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct AiCamera_SendGoal
{
  using Request = prototype::action::AiCamera_SendGoal_Request;
  using Response = prototype::action::AiCamera_SendGoal_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_GetResult_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_GetResult_Request_
{
  using Type = AiCamera_GetResult_Request_<ContainerAllocator>;

  explicit AiCamera_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit AiCamera_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_GetResult_Request
    std::shared_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_GetResult_Request
    std::shared_ptr<prototype::action::AiCamera_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_GetResult_Request_

// alias to use template instance with default allocator
using AiCamera_GetResult_Request =
  prototype::action::AiCamera_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/ai_camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_GetResult_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_GetResult_Response_
{
  using Type = AiCamera_GetResult_Response_<ContainerAllocator>;

  explicit AiCamera_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit AiCamera_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    prototype::action::AiCamera_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const prototype::action::AiCamera_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_GetResult_Response
    std::shared_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_GetResult_Response
    std::shared_ptr<prototype::action::AiCamera_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_GetResult_Response_

// alias to use template instance with default allocator
using AiCamera_GetResult_Response =
  prototype::action::AiCamera_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct AiCamera_GetResult
{
  using Request = prototype::action::AiCamera_GetResult_Request;
  using Response = prototype::action::AiCamera_GetResult_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/ai_camera__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__AiCamera_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__AiCamera_FeedbackMessage __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AiCamera_FeedbackMessage_
{
  using Type = AiCamera_FeedbackMessage_<ContainerAllocator>;

  explicit AiCamera_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit AiCamera_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    prototype::action::AiCamera_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const prototype::action::AiCamera_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__AiCamera_FeedbackMessage
    std::shared_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__AiCamera_FeedbackMessage
    std::shared_ptr<prototype::action::AiCamera_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCamera_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCamera_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCamera_FeedbackMessage_

// alias to use template instance with default allocator
using AiCamera_FeedbackMessage =
  prototype::action::AiCamera_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace prototype
{

namespace action
{

struct AiCamera
{
  /// The goal message defined in the action definition.
  using Goal = prototype::action::AiCamera_Goal;
  /// The result message defined in the action definition.
  using Result = prototype::action::AiCamera_Result;
  /// The feedback message defined in the action definition.
  using Feedback = prototype::action::AiCamera_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = prototype::action::AiCamera_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = prototype::action::AiCamera_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = prototype::action::AiCamera_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct AiCamera AiCamera;

}  // namespace action

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__AI_CAMERA__STRUCT_HPP_
