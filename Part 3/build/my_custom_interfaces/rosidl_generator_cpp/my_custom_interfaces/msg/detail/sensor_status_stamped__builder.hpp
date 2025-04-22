// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interfaces:msg/SensorStatusStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/sensor_status_stamped.hpp"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__BUILDER_HPP_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interfaces/msg/detail/sensor_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorStatusStamped_enable
{
public:
  explicit Init_SensorStatusStamped_enable(::my_custom_interfaces::msg::SensorStatusStamped & msg)
  : msg_(msg)
  {}
  ::my_custom_interfaces::msg::SensorStatusStamped enable(::my_custom_interfaces::msg::SensorStatusStamped::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatusStamped msg_;
};

class Init_SensorStatusStamped_value
{
public:
  explicit Init_SensorStatusStamped_value(::my_custom_interfaces::msg::SensorStatusStamped & msg)
  : msg_(msg)
  {}
  Init_SensorStatusStamped_enable value(::my_custom_interfaces::msg::SensorStatusStamped::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_SensorStatusStamped_enable(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatusStamped msg_;
};

class Init_SensorStatusStamped_status
{
public:
  explicit Init_SensorStatusStamped_status(::my_custom_interfaces::msg::SensorStatusStamped & msg)
  : msg_(msg)
  {}
  Init_SensorStatusStamped_value status(::my_custom_interfaces::msg::SensorStatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SensorStatusStamped_value(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatusStamped msg_;
};

class Init_SensorStatusStamped_header
{
public:
  Init_SensorStatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatusStamped_status header(::my_custom_interfaces::msg::SensorStatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorStatusStamped_status(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::msg::SensorStatusStamped>()
{
  return my_custom_interfaces::msg::builder::Init_SensorStatusStamped_header();
}

}  // namespace my_custom_interfaces

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__BUILDER_HPP_
