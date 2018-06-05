/*
 * Write a function "order" that recieves an array of integers and orders
 * it from lower to higher number. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


/*
 * Write the prototype for the "order" function.
 * Remember that arrays are passed by reference by dafault.
 */


int main(){
  int size = 20;

  //Initialize and print the array
  srand(time(NULL));
  int int_array[size];
  for(int i = 0; i < size; i++){
    int_array[i] = rand() % size + 1;
    printf("%d ", int_array[i]);
  }
  printf("\n");

  //Order the array
  order(int_array);

  //Print the ordered array
  for(int i = 0; i < size; i++){
    printf("%d ", int_array[i]);
  }
  printf("\n");
  
  return 0;
}
  

/*
 * Write the implementation of the function
 */
