#include <stdio.h>
#include "printn.h"
#include <stdlib.h>

int main(int argc, char* argv[])
{
  printn(argv[1]);
  if(argc == 4)
  {
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    printf("soma:%d\n", a+b);
  }
  return 0;
}
