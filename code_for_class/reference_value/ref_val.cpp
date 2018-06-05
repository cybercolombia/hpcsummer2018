#include <stdio.h>
#include "foos.hpp"
using namespace std;


int main(){
  /*
   *
   */
  int num1 = 0;
  printf("By value----------\nBefore: %d\n", num1);
  foo_by_value(num1);
  printf("After: %d\n\n", num1);

  /*
   *
   */
  int num2 = 0;
  printf("By reference------\nBefore: %d\n", num2);
  foo_by_reference(num2);
  printf("After: %d\n", num2);

  return 0;
}



