#ifndef __DYNARRAY_HPP
#define __DYNARRAY_HPP

#include <iostream>
using namespace std;

/*
 *
 */
class Dynarray {
private:
  double *m_data; //Pointer to the data
  int m_size; //size of the array

public:
  //Constructors
  Dynarray();
  Dynarray(int size);
  //Destructor
  ~Dynarray();

  //setters/getters
  void set_size(int size);
  int get_size();

  void set_element(int i, double el);
  double get_element(int i);
};


#endif
