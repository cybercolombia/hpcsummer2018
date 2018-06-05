#import <stdio.h>
#import <iostream>
using namespace std;

/*
 *
 */
double add(double a, double b);

/*
 *
 */
double multiply(double a, double b);



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

  printf("The sum of %.2f and %.2f is %.2f\n", sum);
  printf("and their product is %.2f\n", product);
  
  return 0;
}


/*
 *
 */
double add(double a, double b){
  double result = a + b;
  return result;
}

/*
 *
 */
double multiply(double a, double b){
  double result = a * b;
  return result;
}
