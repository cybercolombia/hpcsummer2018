#include <stdio.h>
using namespace std;


int main(){
  /*
   *
   */
  int myVariable = 5;
  
  /*
   *
   */
  int *myPointer;
  myPointer = &myVariable;

  /*
   *
   */
  int val = *myPointer;

  printf("Value of myVariable: %d\n", myVariable);
  printf("Value of myPointer: %p\n", myPointer);
  printf("Value pointed to by myPointer: %d\n", val);
  
  return 0;
}
