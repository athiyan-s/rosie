// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__BUILDER_HPP_
#define PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/msg/detail/distance_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace msg
{

namespace builder
{

class Init_DistanceAngle_orientation
{
public:
  explicit Init_DistanceAngle_orientation(::prototype::msg::DistanceAngle & msg)
  : msg_(msg)
  {}
  ::prototype::msg::DistanceAngle orientation(::prototype::msg::DistanceAngle::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::msg::DistanceAngle msg_;
};

class Init_DistanceAngle_angle
{
public:
  explicit Init_DistanceAngle_angle(::prototype::msg::DistanceAngle & msg)
  : msg_(msg)
  {}
  Init_DistanceAngle_orientation angle(::prototype::msg::DistanceAngle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_DistanceAngle_orientation(msg_);
  }

private:
  ::prototype::msg::DistanceAngle msg_;
};

class Init_DistanceAngle_distance
{
public:
  Init_DistanceAngle_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanceAngle_angle distance(::prototype::msg::DistanceAngle::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_DistanceAngle_angle(msg_);
  }

private:
  ::prototype::msg::DistanceAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::msg::DistanceAngle>()
{
  return prototype::msg::builder::Init_DistanceAngle_distance();
}

}  // namespace prototype

#endif  // PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__BUILDER_HPP_
