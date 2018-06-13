#include <stdio.h>
using namespace std;


int main(){
  int N = 100;

  /*
   *
   */
  FILE *myFile;
  /*
   *
   */
  if( !(myFile = fopen("my_file.txt", "w")) ){
    perror("Error opening my_file.txt.\n");
    return 1;
  }
  
  for(int i = 0; i < N; i++){
    /*
     *
     */
    fprintf(myFile, "%d %d %d\n", i, i+1, i+2);
  }

  /*
   *
   */
  fclose(myFile);

  return 0;
}
