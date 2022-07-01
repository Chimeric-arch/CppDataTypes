#pragma once

#include <cstdlib>

typedef unsigned int data;

struct element
{
  data _data;
  element *next;
};

namespace Types
{
  class FIFO
  {
  private:
    element *__first__;
    element *__last__;
    unsigned long __len__;

  public:
    data Get();
    void Insert(data __data);
    data Remove();
    // unsigned char isEmpty();
    // unsigned long getLength();

  public:
    FIFO();
    //~FIFO();
  };
}
