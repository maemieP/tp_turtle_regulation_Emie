// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/sensor_status.hpp"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interfaces/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatus & msg, bool use_flow_style = false)
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

}  // namespace my_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interfaces::msg::SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interfaces::msg::SensorStatus & msg)
{
  return my_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interfaces::msg::SensorStatus>()
{
  return "my_custom_interfaces::msg::SensorStatus";
}

template<>
inline const char * name<my_custom_interfaces::msg::SensorStatus>()
{
  return "my_custom_interfaces/msg/SensorStatus";
}

template<>
struct has_fixed_size<my_custom_interfaces::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interfaces::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interfaces::msg::SensorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
