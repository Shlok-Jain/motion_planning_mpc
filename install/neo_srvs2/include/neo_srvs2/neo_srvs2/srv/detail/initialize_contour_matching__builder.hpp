// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/InitializeContourMatching.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/initialize_contour_matching__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_InitializeContourMatching_Request_init_pose
{
public:
  Init_InitializeContourMatching_Request_init_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::InitializeContourMatching_Request init_pose(::neo_srvs2::srv::InitializeContourMatching_Request::_init_pose_type arg)
  {
    msg_.init_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::InitializeContourMatching_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::InitializeContourMatching_Request>()
{
  return neo_srvs2::srv::builder::Init_InitializeContourMatching_Request_init_pose();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_InitializeContourMatching_Response_success
{
public:
  Init_InitializeContourMatching_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::InitializeContourMatching_Response success(::neo_srvs2::srv::InitializeContourMatching_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::InitializeContourMatching_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::InitializeContourMatching_Response>()
{
  return neo_srvs2::srv::builder::Init_InitializeContourMatching_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__BUILDER_HPP_
