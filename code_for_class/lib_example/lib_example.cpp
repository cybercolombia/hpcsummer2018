#include <stdio.h>
#include <iostream>
#include "arithmetic.hpp"
using namespace std;


int main(){
  double x, y;
  
  printf("Enter a real number: ");
  cin >> x;
  printf("Enter another: ");
  cin >> y;
  
  /*
   *
   */
  double sum = add(x, y);

  /*
   *
   */
  double product = multiply(x, y);

  printf("The sum of %.2f and %.2f is %.2f\n", x,y,sum);
  printf("and their product is %.2f\n", product);
  
  return 0;
}
