#include <stdio.h>
using namespace std;


int main(){ 
  /*
   *
   */
  FILE *myFile;
  /*
   *
   */
  if( !(myFile = fopen("my_file.txt", "r")) ){
    perror("Error opening my_file.txt.\n");
    return 1;
  }

  /*
   *
   */
  int num[3];
  while(true){
    /*
     *
     */
    for(int i = 0; i < 3; i++){
      fscanf(myFile, "%d", &num[i]);
    }

    /*
     *
     */
    if(feof(myFile))
      break;

    /*
     *
     */
    for(int i = 0; i < 3; i++){
      printf("%d ", num[i]);
    }
    printf("\n");
  }

  /*
   *
   */
  fclose(myFile);

  return 0;
}
