/*
 * Write a function "prime" that recieves an integer "n" and
 * writes all the prime numbers which are < n to a file
 * called "prime_numbers.txt"
 */

#include <stdio.h>
using namespace std;

/*
 * Write the prototype of the function
 */


int main(){
  int n = 1000;

  prime(n);

  return 0;
}



/*
 * Write the implementation of the function "prime".
 * The function opens "prime_numbers.txt" for writing
 * and prints the prime numbers in it.
 * Don't forget to close the file!
 */
