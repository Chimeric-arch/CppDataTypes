#include <iostream>
#include "FIFO.hpp"

using namespace Types;


int main()
{
  FIFO fila;

  fila.Insert(124);
  fila.Insert(2);
  fila.Insert(3);
  fila.Insert(4);

  std::cout << fila.Get() << std::endl;

  return 0;
}