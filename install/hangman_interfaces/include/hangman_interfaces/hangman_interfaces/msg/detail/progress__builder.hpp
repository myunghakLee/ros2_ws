// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__BUILDER_HPP_
#define HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hangman_interfaces/msg/detail/progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hangman_interfaces
{

namespace msg
{

namespace builder
{

class Init_Progress_won
{
public:
  explicit Init_Progress_won(::hangman_interfaces::msg::Progress & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::msg::Progress won(::hangman_interfaces::msg::Progress::_won_type arg)
  {
    msg_.won = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::msg::Progress msg_;
};

class Init_Progress_game_over
{
public:
  explicit Init_Progress_game_over(::hangman_interfaces::msg::Progress & msg)
  : msg_(msg)
  {}
  Init_Progress_won game_over(::hangman_interfaces::msg::Progress::_game_over_type arg)
  {
    msg_.game_over = std::move(arg);
    return Init_Progress_won(msg_);
  }

private:
  ::hangman_interfaces::msg::Progress msg_;
};

class Init_Progress_attempts_left
{
public:
  explicit Init_Progress_attempts_left(::hangman_interfaces::msg::Progress & msg)
  : msg_(msg)
  {}
  Init_Progress_game_over attempts_left(::hangman_interfaces::msg::Progress::_attempts_left_type arg)
  {
    msg_.attempts_left = std::move(arg);
    return Init_Progress_game_over(msg_);
  }

private:
  ::hangman_interfaces::msg::Progress msg_;
};

class Init_Progress_current_state
{
public:
  Init_Progress_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_attempts_left current_state(::hangman_interfaces::msg::Progress::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_Progress_attempts_left(msg_);
  }

private:
  ::hangman_interfaces::msg::Progress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::msg::Progress>()
{
  return hangman_interfaces::msg::builder::Init_Progress_current_state();
}

}  // namespace hangman_interfaces

#endif  // HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__BUILDER_HPP_
