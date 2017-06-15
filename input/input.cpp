#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declare a varible to store a Integer
  int inputNumber;

  cout << "Enter a Integer: ";

  // Store a integer given user input
  cin >> inputNumber;

  // The same with text i.e. string data
  cout << "Enter your Name: ";
  string inputName;

  // store a single integer, if you want to store a line use 'getline()'
  cin >> inputName;
  cout << inputName << " entetered " << inputNumber << endl;

  return 0;
}
