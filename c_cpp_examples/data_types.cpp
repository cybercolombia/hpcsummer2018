#include <iostream>
#include <limits>
using namespace std;


int main(){
  cout << "type\tsize\tlowest\t\tmin\t\tmax\n\n";
  
  cout << "uchar\t" << sizeof(unsigned char) << "\t"
       << +numeric_limits<unsigned char>::min() << "\t\t"
       << +numeric_limits<unsigned char>::min() << "\t\t"
       << +numeric_limits<unsigned char>::max() << '\n';
  cout << "int\t" << sizeof(int) << '\t'
       << numeric_limits<int>::max()*(-1) << '\t'
       << numeric_limits<int>::min() << '\t'
       << numeric_limits<int>::max() << '\n';
  cout << "float\t" << sizeof(float) << '\t'
       << numeric_limits<float>::max()*(-1) << '\t'
       << numeric_limits<float>::min() << '\t'
       << numeric_limits<float>::max() << '\n';
  cout << "double\t" << sizeof(double) << '\t'
       << numeric_limits<double>::max()*(-1) << '\t'
       << numeric_limits<double>::min() << '\t'
       << numeric_limits<double>::max() << '\n';
  
  return 0;
}
