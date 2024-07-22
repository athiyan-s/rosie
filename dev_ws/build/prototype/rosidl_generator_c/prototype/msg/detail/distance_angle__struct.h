// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_H_
#define PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DistanceAngle in the package prototype.
typedef struct prototype__msg__DistanceAngle
{
  double distance;
  double angle;
  double orientation;
} prototype__msg__DistanceAngle;

// Struct for a sequence of prototype__msg__DistanceAngle.
typedef struct prototype__msg__DistanceAngle__Sequence
{
  prototype__msg__DistanceAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__msg__DistanceAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__MSG__DETAIL__DISTANCE_ANGLE__STRUCT_H_
