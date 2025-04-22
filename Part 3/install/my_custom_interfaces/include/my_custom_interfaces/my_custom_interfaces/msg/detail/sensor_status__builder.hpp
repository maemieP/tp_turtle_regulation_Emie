// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/sensor_status.hpp"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interfaces/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorStatus_enable
{
public:
  explicit Init_SensorStatus_enable(::my_custom_interfaces::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  ::my_custom_interfaces::msg::SensorStatus enable(::my_custom_interfaces::msg::SensorStatus::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatus msg_;
};

class Init_SensorStatus_value
{
public:
  explicit Init_SensorStatus_value(::my_custom_interfaces::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  Init_SensorStatus_enable value(::my_custom_interfaces::msg::SensorStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_SensorStatus_enable(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatus msg_;
};

class Init_SensorStatus_status
{
public:
  Init_SensorStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatus_value status(::my_custom_interfaces::msg::SensorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SensorStatus_value(msg_);
  }

private:
  ::my_custom_interfaces::msg::SensorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::msg::SensorStatus>()
{
  return my_custom_interfaces::msg::builder::Init_SensorStatus_status();
}

}  // namespace my_custom_interfaces

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
