#include <stdio.h>
#include "dynarray.hpp"


int main(){
  int size = 50;
  /*
   *
   */
  Dynarray myDynarr(size);

  /*
   *
   */
  for(int i = 0; i < size; i++){
    myDynarr.set_element(i, 0.);
  }

  for(int i = 0; i < size; i++)
    printf("%.1f ", myDynarr.get_element(i));
  printf("\n");
  
  return 0;
}
