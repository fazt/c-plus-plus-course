#include <iostream>

using namespace std;

/*
  Types:
    - bool
    - char
    - unsigned short int
*/

int main() {
  // Boolean variable
  bool young = false;

  // Char variable, 256 character values
  char theFirstLetterOfMyName = 70; // F

  // unsigned short int allows 0 - 65535
  unsigned short int justAUsignedShortNumber = 32768;

  // short int allows -32768 to 32767
  short int justAShortNumber = 32767;

  //0 - 4294967295
  unsigned long int justALongNumber = 4294967297;

  cout << justALongNumber << endl; // 1 if it's true, or 0 if it's false

  return 0;
}
