#include <iostream>
#include <fstream>
using namespace std;


int main(){
  int N = 100;

  /*
   *
   */
  ofstream myFile;
  myFile.exceptions(ofstream::failbit | ofstream::badbit);
  
  try{
    /*
     *
     */
    myFile.open("my_file.txt");
    
    for(int i = 0; i < N; i++){
      /*
       *
       */
      myFile << i << " " << i+1 << " " << i+2 << endl;
    }

    /*
     *
     */
    myFile.close();
    
  }catch(const ofstream::failure  &e){
    cout << "Exception opening/writing my_file.txt.\n"
    	 << "Explanatory string: " << e.what() << endl;
  }

  return 0;
}
