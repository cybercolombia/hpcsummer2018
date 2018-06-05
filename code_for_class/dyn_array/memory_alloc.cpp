#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
  int size = 50;
  double *myDynarr;
  
  try{
    /* 
     * 
     */
    myDynarr = new double[size];
  }catch(bad_alloc &e){
    cout << "bad_alloc caught allocating myDynarr.\n"
	 << "Explanatory string: " << e.what() << endl;
  }

  /*
   *
   */
  for(int i = 0; i < size; i++){
    myDynarr[i] = 0.;
  }

  for(int i = 0; i < size; i++)
    printf("%.1f ", myDynarr[i]);
  printf("\n");
  
  /*
   *
   */
  delete[] myDynarr;
  
  return 0;
}
