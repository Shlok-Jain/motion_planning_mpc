// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetLED.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LED__STRUCT_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'led_state'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Request __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Request __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayBoardSetLED_Request_
{
  using Type = RelayBoardSetLED_Request_<ContainerAllocator>;

  explicit RelayBoardSetLED_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led_state(_init)
  {
    (void)_init;
  }

  explicit RelayBoardSetLED_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _led_state_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _led_state_type led_state;

  // setters for named parameter idiom
  Type & set__led_state(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->led_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Request
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Request
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardSetLED_Request_ & other) const
  {
    if (this->led_state != other.led_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardSetLED_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardSetLED_Request_

// alias to use template instance with default allocator
using RelayBoardSetLED_Request =
  neo_srvs2::srv::RelayBoardSetLED_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2


#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Response __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Response __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayBoardSetLED_Response_
{
  using Type = RelayBoardSetLED_Response_<ContainerAllocator>;

  explicit RelayBoardSetLED_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RelayBoardSetLED_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Response
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetLED_Response
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetLED_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardSetLED_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardSetLED_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardSetLED_Response_

// alias to use template instance with default allocator
using RelayBoardSetLED_Response =
  neo_srvs2::srv::RelayBoardSetLED_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2

namespace neo_srvs2
{

namespace srv
{

struct RelayBoardSetLED
{
  using Request = neo_srvs2::srv::RelayBoardSetLED_Request;
  using Response = neo_srvs2::srv::RelayBoardSetLED_Response;
};

}  // namespace srv

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_LED__STRUCT_HPP_
