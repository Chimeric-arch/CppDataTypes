#pragma once

template <typename T, size_t s>
class Array
{
private:
  unsigned long m_length;
  T *m_data_struct;

public:
  Array()
  {
    m_length = s;
    m_data_struct = new T[m_length];
  }

public:
  bool isEmpty() { return m_data_struct == nullptr || !m_length; }



};