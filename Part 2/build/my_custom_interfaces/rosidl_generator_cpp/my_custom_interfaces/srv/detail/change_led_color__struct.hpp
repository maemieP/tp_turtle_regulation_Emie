// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interfaces:srv/ChangeLedColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/srv/change_led_color.hpp"


#ifndef MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_HPP_
#define MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Request __declspec(deprecated)
#endif

namespace my_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeLedColor_Request_
{
  using Type = ChangeLedColor_Request_<ContainerAllocator>;

  explicit ChangeLedColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0.0;
      this->green = 0.0;
      this->blue = 0.0;
    }
  }

  explicit ChangeLedColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0.0;
      this->green = 0.0;
      this->blue = 0.0;
    }
  }

  // field types and members
  using _red_type =
    double;
  _red_type red;
  using _green_type =
    double;
  _green_type green;
  using _blue_type =
    double;
  _blue_type blue;

  // setters for named parameter idiom
  Type & set__red(
    const double & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const double & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const double & _arg)
  {
    this->blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Request
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Request
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeLedColor_Request_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeLedColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeLedColor_Request_

// alias to use template instance with default allocator
using ChangeLedColor_Request =
  my_custom_interfaces::srv::ChangeLedColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interfaces


#ifndef _WIN32
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Response __declspec(deprecated)
#endif

namespace my_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeLedColor_Response_
{
  using Type = ChangeLedColor_Response_<ContainerAllocator>;

  explicit ChangeLedColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ChangeLedColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Response
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Response
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeLedColor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeLedColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeLedColor_Response_

// alias to use template instance with default allocator
using ChangeLedColor_Response =
  my_custom_interfaces::srv::ChangeLedColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Event __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Event __declspec(deprecated)
#endif

namespace my_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeLedColor_Event_
{
  using Type = ChangeLedColor_Event_<ContainerAllocator>;

  explicit ChangeLedColor_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChangeLedColor_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_custom_interfaces::srv::ChangeLedColor_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_custom_interfaces::srv::ChangeLedColor_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Event
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interfaces__srv__ChangeLedColor_Event
    std::shared_ptr<my_custom_interfaces::srv::ChangeLedColor_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeLedColor_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeLedColor_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeLedColor_Event_

// alias to use template instance with default allocator
using ChangeLedColor_Event =
  my_custom_interfaces::srv::ChangeLedColor_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_custom_interfaces

namespace my_custom_interfaces
{

namespace srv
{

struct ChangeLedColor
{
  using Request = my_custom_interfaces::srv::ChangeLedColor_Request;
  using Response = my_custom_interfaces::srv::ChangeLedColor_Response;
  using Event = my_custom_interfaces::srv::ChangeLedColor_Event;
};

}  // namespace srv

}  // namespace my_custom_interfaces

#endif  // MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_HPP_
