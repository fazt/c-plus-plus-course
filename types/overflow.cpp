#include <iostream>

using namespace std;

int main() {

  unsigned short uShortValue = 65535;
  cout << "Incrementing unsigned short " << uShortValue << " gives: ";
  cout << ++uShortValue << endl; //0

  short signedShort = 32767;
  cout << "Incrementing signed short " << signedShort << " gives: ";
  cout << ++signedShort << endl;// -32768

  return 0;
}
