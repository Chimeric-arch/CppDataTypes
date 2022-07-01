#pragma once

template <class T>
class init_list
{
public:
  using value_type = T;
  using reference = const T &;
  using const_reference = const T &;
  using size_type = size_t;

  using iterator = const T *;
  using const_iterator = const T *;

  constexpr init_list() noexcept : _First(nullptr), _Last(nullptr) {}

  constexpr init_list(const T *_First_arg, const T *_Last_arg) noexcept
      : _First(_First_arg), _Last(_Last_arg) {}

  constexpr const T *begin() const noexcept
  {
    return _First;
  }

  constexpr const T *end() const noexcept
  {
    return _Last;
  }

  constexpr size_t size() const noexcept
  {
    return static_cast<size_t>(_Last - _First);
  }

private:
  const T *_First;
  const T *_Last;
};