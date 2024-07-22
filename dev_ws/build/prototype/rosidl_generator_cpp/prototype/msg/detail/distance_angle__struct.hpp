// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_HPP_
#define PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__prototype__msg__DistanceAngle __attribute__((deprecated))
#else
# define DEPRECATED__prototype__msg__DistanceAngle __declspec(deprecated)
#endif

namespace prototype
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DistanceAngle_
{
  using Type = DistanceAngle_<ContainerAllocator>;

  explicit DistanceAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      this->angle = 0.0;
      this->orientation = 0.0;
    }
  }

  explicit DistanceAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      this->angle = 0.0;
      this->orientation = 0.0;
    }
  }

  // field types and members
  using _distance_type =
    double;
  _distance_type distance;
  using _angle_type =
    double;
  _angle_type angle;
  using _orientation_type =
    double;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__orientation(
    const double & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::msg::DistanceAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::msg::DistanceAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::msg::DistanceAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::msg::DistanceAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::msg::DistanceAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::msg::DistanceAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::msg::DistanceAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::msg::DistanceAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::msg::DistanceAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::msg::DistanceAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__msg__DistanceAngle
    std::shared_ptr<prototype::msg::DistanceAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__msg__DistanceAngle
    std::shared_ptr<prototype::msg::DistanceAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanceAngle_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanceAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanceAngle_

// alias to use template instance with default allocator
using DistanceAngle =
  prototype::msg::DistanceAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace prototype

#endif  // PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_HPP_
