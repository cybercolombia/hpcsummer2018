#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
  printf("How many pieces of cake do you want?");
  int pieces;
  cin >> pieces;

  /*
   *
   */
  switch(pieces){
  case 0:
    printf("Come on, have some!\n");
    break;
  case 1:
    printf("Here you go...\n");
    break;
  case 2:
    printf("Hungry, aren't we?\n");
    break;
  default:
    printf("You shouldn't eat that much.\n");
    break;
  }
  
  
  return 0;
}
