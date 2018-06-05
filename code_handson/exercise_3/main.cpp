/*
 * Create a small library to compute the area of some 
 * geometric figures.
 * The first function "c_area" recieves a raius and returns the area of the circle.
 * The second "s_area" recieves the leght of a side and returns the area of the square.
 * The third "t_area" recieves heigh and base of a riangle and returns its area.
 * 
 * The prototypes of the functions should be in a file called "geometric.hpp"
 * while the implementations go in a file called "geometric.cpp" 
 */

#include <stdio.h>
#include "geometric.hpp"
using namespace std;


int main(){
  //circle
  double radius = 1.5;
  double circle_area = c_area(radius);
  printf("The area of a circle of radius %0.2f is %0.2f.\n", radius, circle_area);

  //square
  double side = 1.5;
  double square_area = s_area(side);
  printf("The area of a square of side %0.2f is %0.2f.\n", side, square_area);

  //triangle
  double base = 1.;
  double height = 1.5;
  double triangle_area = t_area(base, height);
  printf("The area of a trinangle of base %0.2f and height %0.2f is %0.2f.\n", base, height, triangle_area);

  return 0;
}
