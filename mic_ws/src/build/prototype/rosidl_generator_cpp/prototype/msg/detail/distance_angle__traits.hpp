// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__TRAITS_HPP_
#define PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "prototype/msg/detail/distance_angle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace prototype
{

namespace msg
{

inline void to_flow_style_yaml(
  const DistanceAngle & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistanceAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistanceAngle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::msg::DistanceAngle & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::msg::to_yaml() instead")]]
inline std::string to_yaml(const prototype::msg::DistanceAngle & msg)
{
  return prototype::msg::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::msg::DistanceAngle>()
{
  return "prototype::msg::DistanceAngle";
}

template<>
inline const char * name<prototype::msg::DistanceAngle>()
{
  return "prototype/msg/DistanceAngle";
}

template<>
struct has_fixed_size<prototype::msg::DistanceAngle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype::msg::DistanceAngle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype::msg::DistanceAngle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__TRAITS_HPP_
