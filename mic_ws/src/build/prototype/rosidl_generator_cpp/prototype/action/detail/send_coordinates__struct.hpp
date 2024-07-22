// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from prototype:action/SendCoordinates.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__STRUCT_HPP_
#define PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_Goal __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_Goal __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_Goal_
{
  using Type = SendCoordinates_Goal_<ContainerAllocator>;

  explicit SendCoordinates_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit SendCoordinates_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_Goal
    std::shared_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_Goal
    std::shared_ptr<prototype::action::SendCoordinates_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_Goal_

// alias to use template instance with default allocator
using SendCoordinates_Goal =
  prototype::action::SendCoordinates_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_Result __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_Result __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_Result_
{
  using Type = SendCoordinates_Result_<ContainerAllocator>;

  explicit SendCoordinates_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SendCoordinates_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_Result
    std::shared_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_Result
    std::shared_ptr<prototype::action::SendCoordinates_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_Result_

// alias to use template instance with default allocator
using SendCoordinates_Result =
  prototype::action::SendCoordinates_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_Feedback __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_Feedback_
{
  using Type = SendCoordinates_Feedback_<ContainerAllocator>;

  explicit SendCoordinates_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
    }
  }

  explicit SendCoordinates_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
    }
  }

  // field types and members
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;

  // setters for named parameter idiom
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_Feedback
    std::shared_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_Feedback
    std::shared_ptr<prototype::action::SendCoordinates_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_Feedback_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_Feedback_

// alias to use template instance with default allocator
using SendCoordinates_Feedback =
  prototype::action::SendCoordinates_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "prototype/action/detail/send_coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_SendGoal_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_SendGoal_Request_
{
  using Type = SendCoordinates_SendGoal_Request_<ContainerAllocator>;

  explicit SendCoordinates_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SendCoordinates_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::SendCoordinates_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const prototype::action::SendCoordinates_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_SendGoal_Request
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_SendGoal_Request
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_SendGoal_Request_

// alias to use template instance with default allocator
using SendCoordinates_SendGoal_Request =
  prototype::action::SendCoordinates_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_SendGoal_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_SendGoal_Response_
{
  using Type = SendCoordinates_SendGoal_Response_<ContainerAllocator>;

  explicit SendCoordinates_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SendCoordinates_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_SendGoal_Response
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_SendGoal_Response
    std::shared_ptr<prototype::action::SendCoordinates_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_SendGoal_Response_

// alias to use template instance with default allocator
using SendCoordinates_SendGoal_Response =
  prototype::action::SendCoordinates_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct SendCoordinates_SendGoal
{
  using Request = prototype::action::SendCoordinates_SendGoal_Request;
  using Response = prototype::action::SendCoordinates_SendGoal_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_GetResult_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_GetResult_Request_
{
  using Type = SendCoordinates_GetResult_Request_<ContainerAllocator>;

  explicit SendCoordinates_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SendCoordinates_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_GetResult_Request
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_GetResult_Request
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_GetResult_Request_

// alias to use template instance with default allocator
using SendCoordinates_GetResult_Request =
  prototype::action::SendCoordinates_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/send_coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_GetResult_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_GetResult_Response_
{
  using Type = SendCoordinates_GetResult_Response_<ContainerAllocator>;

  explicit SendCoordinates_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SendCoordinates_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::SendCoordinates_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const prototype::action::SendCoordinates_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_GetResult_Response
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_GetResult_Response
    std::shared_ptr<prototype::action::SendCoordinates_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_GetResult_Response_

// alias to use template instance with default allocator
using SendCoordinates_GetResult_Response =
  prototype::action::SendCoordinates_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct SendCoordinates_GetResult
{
  using Request = prototype::action::SendCoordinates_GetResult_Request;
  using Response = prototype::action::SendCoordinates_GetResult_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/send_coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__SendCoordinates_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__SendCoordinates_FeedbackMessage __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SendCoordinates_FeedbackMessage_
{
  using Type = SendCoordinates_FeedbackMessage_<ContainerAllocator>;

  explicit SendCoordinates_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SendCoordinates_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::SendCoordinates_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const prototype::action::SendCoordinates_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__SendCoordinates_FeedbackMessage
    std::shared_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__SendCoordinates_FeedbackMessage
    std::shared_ptr<prototype::action::SendCoordinates_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCoordinates_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCoordinates_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCoordinates_FeedbackMessage_

// alias to use template instance with default allocator
using SendCoordinates_FeedbackMessage =
  prototype::action::SendCoordinates_FeedbackMessage_<std::allocator<void>>;

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

struct SendCoordinates
{
  /// The goal message defined in the action definition.
  using Goal = prototype::action::SendCoordinates_Goal;
  /// The result message defined in the action definition.
  using Result = prototype::action::SendCoordinates_Result;
  /// The feedback message defined in the action definition.
  using Feedback = prototype::action::SendCoordinates_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = prototype::action::SendCoordinates_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = prototype::action::SendCoordinates_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = prototype::action::SendCoordinates_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SendCoordinates SendCoordinates;

}  // namespace action

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__SEND_COORDINATES__STRUCT_HPP_
