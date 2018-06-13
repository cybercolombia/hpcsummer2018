#include "dynarray.hpp"

//Default constructor
Dynarray::Dynarray(): m_size(1) {
  try{
    m_data = new double[m_size];
  }catch(bad_alloc &e){
    cout << "bad_alloc caught allocating Dynarray.\n"
	 << "Explanatory string: " << e.what() << endl;
  }
}
//Constructor with size
Dynarray::Dynarray(int size): m_size(size) {
  try{
    m_data = new double[m_size];
  }catch(bad_alloc &e){
    cout << "bad_alloc caught allocating Dynarray.\n"
	 << "Explanatory string: " << e.what() << endl;
  }
}

//Destructor
Dynarray::~Dynarray() {
  delete[] m_data;
}


//Set size
void Dynarray::set_size(int size) {
  delete[] m_data;
  m_size = size;
  try{
    m_data = new double[m_size];
  }catch(bad_alloc &e){
    cout << "bad_alloc caught allocating Dynarray.\n"
	 << "Explanatory string: " << e.what() << endl;
  }
}
//Get size
int Dynarray::get_size(){
  return m_size;
}

//Set element
void Dynarray::set_element(int i, double el){
  if(i < 0 || i >= m_size){
    cout << "set_element out of range.\n"; 
  }
  m_data[i] = el;
}
//Get element
double Dynarray::get_element(int i){
  if(i < 0 || i >= m_size){
    cout << "get_element out of renge.\n"; 
  }
  return m_data[i];
}

