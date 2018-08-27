#include <stdio.h>
#include <string.h>
#include "../include/functions.h"


int main(int argc, char *argv[])
{
  int number = 0;
  if(function_x(&number))
  {
    printf("Random number: %d\n", number);
  }
  
  return 0;
}
