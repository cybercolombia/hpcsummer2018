#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>
#include <string>
#include <stdlib.h>
using namespace std;


int main(){ 
  string line;

  /*
   *
   */
  ifstream myFile;
  myFile.exceptions(ifstream::failbit | ifstream::badbit);

  try{
    /*
     *
     */
    myFile.open("my_file.txt");
    
    /*
     *
     */
    int num[3];
    while(true){

      if(!getline(myFile, line))
	break;
      
      istringstream iss(line);
      vector<string> result((istream_iterator<string>(iss)),
			    istream_iterator<string>());
      for(int i = 0; i < result.size(); i++){
	num[i] = atoi(result[i].c_str());
      }   

      for(int i = 0; i < result.size(); i++){
	cout << num[i] << " ";
      }
      cout << endl;
    }

    /*
     *
     */
    myFile.close();
    
  }catch(const ifstream::failure  &e){
    cout << "Exception opening/reading my_file.txt.\n"
	 << "Explanatory string: " << e.what() << endl;
  }
  
  return 0;
}
