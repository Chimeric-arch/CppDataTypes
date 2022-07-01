using namespace std;

#include <iostream>
#include <string>

#include "ContainerAllocator.h"
#include "ArrayContainer.h"

// Map
#include "Map.h"
// Lista
#include "List.h"
#include "ArrayList.h"
#include "LinkedList.h"
// Estruturas basicas
#include "simpleContainer.h"
// Fifo
#include "ArrayFifo.h"
#include "LinkedFifo.h"
// Lifo
#include "ArrayLifo.h"
#include "LinkedLifo.h"

#include "tst.h"

size_t aloc = 0x00;
void *operator new(size_t n)
{
  cout << "Alocando..." << endl;
  aloc += 1;
  return malloc(n);
}

void operator delete(void *o)
{
  cout << "Desalocando..." << endl;
  aloc--;
  free(o);
}

int main()
{
  return 0;
}
