#include "rectangle_c.h"

using namespace shapes;

Rectangle::Rectangle(int X0, int Y0, int X1, int Y1){
  x0 = X0;
  y0 = Y0;
  x1 = X1;
  y1 = Y1;
}

Rectangle::~Rectangle(void){
}

int Rectangle::getLength(void){
  return (x1 - x0);
}

int Rectangle::getHeight(void){
  return (y1 - y0);
}

int Rectangle::getArea(void){
  return (x1 - x0) * (y1 - y0);
}

void Rectangle::move(int dx, int dy){
  x0 += dx;
  y0 += dy;
  x1 += dx;
  y1 += dy;
}
