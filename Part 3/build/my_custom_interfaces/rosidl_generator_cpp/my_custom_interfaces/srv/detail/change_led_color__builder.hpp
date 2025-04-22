// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interfaces:srv/ChangeLedColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/srv/change_led_color.hpp"


#ifndef MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__BUILDER_HPP_
#define MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interfaces/srv/detail/change_led_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeLedColor_Request_blue
{
public:
  explicit Init_ChangeLedColor_Request_blue(::my_custom_interfaces::srv::ChangeLedColor_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_interfaces::srv::ChangeLedColor_Request blue(::my_custom_interfaces::srv::ChangeLedColor_Request::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Request msg_;
};

class Init_ChangeLedColor_Request_green
{
public:
  explicit Init_ChangeLedColor_Request_green(::my_custom_interfaces::srv::ChangeLedColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeLedColor_Request_blue green(::my_custom_interfaces::srv::ChangeLedColor_Request::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_ChangeLedColor_Request_blue(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Request msg_;
};

class Init_ChangeLedColor_Request_red
{
public:
  Init_ChangeLedColor_Request_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeLedColor_Request_green red(::my_custom_interfaces::srv::ChangeLedColor_Request::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_ChangeLedColor_Request_green(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ChangeLedColor_Request>()
{
  return my_custom_interfaces::srv::builder::Init_ChangeLedColor_Request_red();
}

}  // namespace my_custom_interfaces


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeLedColor_Response_success
{
public:
  Init_ChangeLedColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interfaces::srv::ChangeLedColor_Response success(::my_custom_interfaces::srv::ChangeLedColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ChangeLedColor_Response>()
{
  return my_custom_interfaces::srv::builder::Init_ChangeLedColor_Response_success();
}

}  // namespace my_custom_interfaces


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeLedColor_Event_response
{
public:
  explicit Init_ChangeLedColor_Event_response(::my_custom_interfaces::srv::ChangeLedColor_Event & msg)
  : msg_(msg)
  {}
  ::my_custom_interfaces::srv::ChangeLedColor_Event response(::my_custom_interfaces::srv::ChangeLedColor_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Event msg_;
};

class Init_ChangeLedColor_Event_request
{
public:
  explicit Init_ChangeLedColor_Event_request(::my_custom_interfaces::srv::ChangeLedColor_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeLedColor_Event_response request(::my_custom_interfaces::srv::ChangeLedColor_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeLedColor_Event_response(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Event msg_;
};

class Init_ChangeLedColor_Event_info
{
public:
  Init_ChangeLedColor_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeLedColor_Event_request info(::my_custom_interfaces::srv::ChangeLedColor_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeLedColor_Event_request(msg_);
  }

private:
  ::my_custom_interfaces::srv::ChangeLedColor_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ChangeLedColor_Event>()
{
  return my_custom_interfaces::srv::builder::Init_ChangeLedColor_Event_info();
}

}  // namespace my_custom_interfaces

#endif  // MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__BUILDER_HPP_
