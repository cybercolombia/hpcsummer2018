#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
  int no_of_chocolates;
  /*
   *
   */
  printf("How many chocolates did you ate? ");
  /*
   *
   */
  scanf("%d", &no_of_chocolates);
  /*
   *
   */
  printf("so you ate %d chocolates...\n", no_of_chocolates);

  
  int no_of_berries;
  /*
   *
   */
  cout << "How many berries did you ate? ";
  /*
   *
   */
  cin >> no_of_berries;
  /*
   *
   */
  cout << "...and you ate " << no_of_berries << " berries.\n";
  
  return 0;
}
