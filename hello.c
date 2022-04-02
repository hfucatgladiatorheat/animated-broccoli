/** @file hello.c */
#include <stdio.h>
#include "arithmetic.h"

int main(){
  printf("Halloechen Anwender\n");
  int x = increase(twice(3));
  printf("x = %i\n", x);
  return 0;
}
