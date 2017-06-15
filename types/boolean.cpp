#include <iostream>
#include <string>

using namespace std;

int main() {
  string userSelection = "yes";

  //a declaration of an initialized boolean
  bool deleteFile = (userSelection == "yes");

  cout << deleteFile << endl;

  return 0;
}
