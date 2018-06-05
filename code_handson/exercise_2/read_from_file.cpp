/*
 * Write a function "read_file" that recieves an integer array,
 * reads the contents of the "prime_numbers.txt" file and saves 
 * them to the integer array passed.
 */

#include <stdio.h>
using namespace std;

/*
 * Write the prototype of the function
 */


int main(){
  int size = 10;
  
  int int_array[size];

  read_file(int_array);

  for(int i = 0; i < size; i++){
    printf("%d ", int_array[i]);
  }
  printf("\n");
  
  return 0;
}


/*
 * Write the implementation of the "read_file" function
 */
