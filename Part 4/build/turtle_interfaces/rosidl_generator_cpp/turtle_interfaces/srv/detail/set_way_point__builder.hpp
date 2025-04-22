// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/set_way_point.hpp"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/set_way_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWayPoint_Request_y
{
public:
  explicit Init_SetWayPoint_Request_y(::turtle_interfaces::srv::SetWayPoint_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::SetWayPoint_Request y(::turtle_interfaces::srv::SetWayPoint_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Request msg_;
};

class Init_SetWayPoint_Request_x
{
public:
  Init_SetWayPoint_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWayPoint_Request_y x(::turtle_interfaces::srv::SetWayPoint_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetWayPoint_Request_y(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetWayPoint_Request>()
{
  return turtle_interfaces::srv::builder::Init_SetWayPoint_Request_x();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWayPoint_Response_success
{
public:
  Init_SetWayPoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::SetWayPoint_Response success(::turtle_interfaces::srv::SetWayPoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetWayPoint_Response>()
{
  return turtle_interfaces::srv::builder::Init_SetWayPoint_Response_success();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetWayPoint_Event_response
{
public:
  explicit Init_SetWayPoint_Event_response(::turtle_interfaces::srv::SetWayPoint_Event & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::SetWayPoint_Event response(::turtle_interfaces::srv::SetWayPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Event msg_;
};

class Init_SetWayPoint_Event_request
{
public:
  explicit Init_SetWayPoint_Event_request(::turtle_interfaces::srv::SetWayPoint_Event & msg)
  : msg_(msg)
  {}
  Init_SetWayPoint_Event_response request(::turtle_interfaces::srv::SetWayPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetWayPoint_Event_response(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Event msg_;
};

class Init_SetWayPoint_Event_info
{
public:
  Init_SetWayPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWayPoint_Event_request info(::turtle_interfaces::srv::SetWayPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetWayPoint_Event_request(msg_);
  }

private:
  ::turtle_interfaces::srv::SetWayPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetWayPoint_Event>()
{
  return turtle_interfaces::srv::builder::Init_SetWayPoint_Event_info();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__BUILDER_HPP_
