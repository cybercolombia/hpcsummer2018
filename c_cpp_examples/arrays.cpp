#include <stdio.h>
using namespace std;


int main(){
  /*
   *
   */
  float myArray[5] = {1.1,3.2,-1.5,7.3,-9.0};
  for(int i = 0; i < 5; i++)
    printf("%.2f ", myArray[i]);
  printf("\n");

  /*
   *
   */
  int anotherArray[50];
  for(int i = 0; i < 50; i++){
    anotherArray[i] = 2*i - 25;
  }

  for(int i = 0; i < 50; i++)
    printf("%d ", anotherArray[i]);
  printf("\n");
  
  
  return 0;
}
