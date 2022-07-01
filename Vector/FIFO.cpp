#include "FIFO.hpp"

Types::FIFO::FIFO()
{
  __first__ = nullptr;
  __last__ = nullptr;
  __len__ = 0x00;
}

data Types::FIFO::Get()
{
  if (__first__ == nullptr)
    return -0x01;
  return __first__->_data;
}

void Types::FIFO::Insert(data __data)
{
  element *new_data = (element *)calloc(1, sizeof(element));
  new_data->_data = __data;
  new_data->next = nullptr;

  if (!__len__)
  {
    __first__ = new_data;
    __last__ = __first__;
    __len__++;
    return;
  }
  __first__->next = new_data;
  __last__ = __first__->next;
  __len__++;
}

data Types::FIFO::Remove()
{
  
}