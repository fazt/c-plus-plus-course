//  size is the amount of memory that compiler
// reserves when the programmer declares a variable

#include <iostream>

int main(){

  using namespace std;
  //  all outputs are in bytes
  cout << "Computing the size of some C++ inbuilt variable types" << endl;
  cout << "size of bool: " << sizeof(bool) << endl;
  cout << "size of char: " << sizeof(char) << endl;
  cout << "size of unsigned short int: " << sizeof(unsigned short) << endl;
  cout << "size of short int: " << sizeof(short) << endl;
  cout << "size of unsigned long: " << sizeof(unsigned long) << endl;
  cout << "size of long: " << sizeof(long) << endl;
  cout << "size of int: " << sizeof(int) << endl;
  cout << "size of unsigned long long: " << sizeof(unsigned long long) << endl;
  cout << "size of long long: " << sizeof(long long) << endl;
  cout << "size of unsigned int: " << sizeof(unsigned int) << endl;
  cout << "size of float: " << sizeof(float) << endl;
  cout << "size of double: " << sizeof(double) << endl;
  cout << "The output changes with compiler, hardware and OS" << endl;

  return 0;
}
