#include <iostream>

using namespace std;

int main() {

  cout << "This program will help you multiply two numbers" << endl;

  cout << "Enter the first Number: ";
  int firstNumber = 0;
  cin >> firstNumber;

  cout << "Enter the second Number: ";
  int secondNumber = 0;
  cin >> secondNumber;

  int multplicationResult = firstNumber * secondNumber;

  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multplicationResult << endl;

  return 0;
}
