// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/sensor_status.h"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorStatus in the package my_custom_interfaces.
typedef struct my_custom_interfaces__msg__SensorStatus
{
  rosidl_runtime_c__String status;
  double value;
  bool enable;
} my_custom_interfaces__msg__SensorStatus;

// Struct for a sequence of my_custom_interfaces__msg__SensorStatus.
typedef struct my_custom_interfaces__msg__SensorStatus__Sequence
{
  my_custom_interfaces__msg__SensorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interfaces__msg__SensorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
