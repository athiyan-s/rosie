// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from prototype:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__GO_TO__STRUCT_HPP_
#define PROTOTYPE__ACTION__DETAIL__GO_TO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_Goal __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_Goal __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Goal_
{
  using Type = GoTo_Goal_<ContainerAllocator>;

  explicit GoTo_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  explicit GoTo_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _w_type =
    double;
  _w_type w;

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
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const double & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_Goal
    std::shared_ptr<prototype::action::GoTo_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_Goal
    std::shared_ptr<prototype::action::GoTo_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Goal_

// alias to use template instance with default allocator
using GoTo_Goal =
  prototype::action::GoTo_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_Result __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_Result __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Result_
{
  using Type = GoTo_Result_<ContainerAllocator>;

  explicit GoTo_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit GoTo_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_Result
    std::shared_ptr<prototype::action::GoTo_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_Result
    std::shared_ptr<prototype::action::GoTo_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Result_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Result_

// alias to use template instance with default allocator
using GoTo_Result =
  prototype::action::GoTo_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_Feedback __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Feedback_
{
  using Type = GoTo_Feedback_<ContainerAllocator>;

  explicit GoTo_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_left = 0.0;
    }
  }

  explicit GoTo_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_left = 0.0;
    }
  }

  // field types and members
  using _distance_left_type =
    double;
  _distance_left_type distance_left;

  // setters for named parameter idiom
  Type & set__distance_left(
    const double & _arg)
  {
    this->distance_left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_Feedback
    std::shared_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_Feedback
    std::shared_ptr<prototype::action::GoTo_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Feedback_ & other) const
  {
    if (this->distance_left != other.distance_left) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Feedback_

// alias to use template instance with default allocator
using GoTo_Feedback =
  prototype::action::GoTo_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "prototype/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_SendGoal_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_SendGoal_Request_
{
  using Type = GoTo_SendGoal_Request_<ContainerAllocator>;

  explicit GoTo_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoTo_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::GoTo_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const prototype::action::GoTo_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_SendGoal_Request
    std::shared_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_SendGoal_Request
    std::shared_ptr<prototype::action::GoTo_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_SendGoal_Request_

// alias to use template instance with default allocator
using GoTo_SendGoal_Request =
  prototype::action::GoTo_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_SendGoal_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_SendGoal_Response_
{
  using Type = GoTo_SendGoal_Response_<ContainerAllocator>;

  explicit GoTo_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoTo_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_SendGoal_Response
    std::shared_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_SendGoal_Response
    std::shared_ptr<prototype::action::GoTo_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_SendGoal_Response_

// alias to use template instance with default allocator
using GoTo_SendGoal_Response =
  prototype::action::GoTo_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct GoTo_SendGoal
{
  using Request = prototype::action::GoTo_SendGoal_Request;
  using Response = prototype::action::GoTo_SendGoal_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_GetResult_Request __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_GetResult_Request_
{
  using Type = GoTo_GetResult_Request_<ContainerAllocator>;

  explicit GoTo_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoTo_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::GoTo_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_GetResult_Request
    std::shared_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_GetResult_Request
    std::shared_ptr<prototype::action::GoTo_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_GetResult_Request_

// alias to use template instance with default allocator
using GoTo_GetResult_Request =
  prototype::action::GoTo_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_GetResult_Response __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_GetResult_Response_
{
  using Type = GoTo_GetResult_Response_<ContainerAllocator>;

  explicit GoTo_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoTo_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::GoTo_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const prototype::action::GoTo_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_GetResult_Response
    std::shared_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_GetResult_Response
    std::shared_ptr<prototype::action::GoTo_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_GetResult_Response_

// alias to use template instance with default allocator
using GoTo_GetResult_Response =
  prototype::action::GoTo_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace prototype

namespace prototype
{

namespace action
{

struct GoTo_GetResult
{
  using Request = prototype::action::GoTo_GetResult_Request;
  using Response = prototype::action::GoTo_GetResult_Response;
};

}  // namespace action

}  // namespace prototype


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__prototype__action__GoTo_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__prototype__action__GoTo_FeedbackMessage __declspec(deprecated)
#endif

namespace prototype
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_FeedbackMessage_
{
  using Type = GoTo_FeedbackMessage_<ContainerAllocator>;

  explicit GoTo_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoTo_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    prototype::action::GoTo_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const prototype::action::GoTo_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__action__GoTo_FeedbackMessage
    std::shared_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__action__GoTo_FeedbackMessage
    std::shared_ptr<prototype::action::GoTo_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_FeedbackMessage_

// alias to use template instance with default allocator
using GoTo_FeedbackMessage =
  prototype::action::GoTo_FeedbackMessage_<std::allocator<void>>;

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

struct GoTo
{
  /// The goal message defined in the action definition.
  using Goal = prototype::action::GoTo_Goal;
  /// The result message defined in the action definition.
  using Result = prototype::action::GoTo_Result;
  /// The feedback message defined in the action definition.
  using Feedback = prototype::action::GoTo_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = prototype::action::GoTo_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = prototype::action::GoTo_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = prototype::action::GoTo_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoTo GoTo;

}  // namespace action

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__GO_TO__STRUCT_HPP_
