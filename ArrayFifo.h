#pragma once

#include "ContainerAllocator.h"
#include "ArrayContainer.h"
#include "SimpleContainer.h"

template <typename T>
class ArrayFifo : virtual public ArrayContainer<T>, virtual public SimpleContainer<T>
{
public:
  ~ArrayFifo() { this->cDelete(); }

public:
  // Capacity
  bool isEmpty() const override { return this->cIsEmpty(); }

  unsigned long Size() const override { return this->cSize(); }

  // Element Acess
  T First() const override { return this->cGet(0x00); }

  T Last() const override { return this->cGet(this->cSize() - 1); }

  T Error() const override { return this->cError(); }

  // Modifiers
  T Push(T value) override { return this->cPushBack(value); }

  T Pop() override { return this->cPopFront(); }

  // Operations
  void Reset() override { this->cReset(); }

  void Delete() override { this->cDelete(); }
};