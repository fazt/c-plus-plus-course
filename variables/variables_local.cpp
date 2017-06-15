#include <iostream>

using namespace std;

void MultiplyNumbers() {

  cout << "Enter the first Number";
  int firstNumber = 0; // local variable
  cin >> firstNumber;

  cout << "Enter the second Number";
  int secondNumber = 0; // local variable
  cin >> secondNumber;

  int multiplicationResult = firstNumber * secondNumber;

  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multiplicationResult << endl;

}

int main() {
  cout << "This programs will Help you to multiply two number" << endl;

  MultiplyNumbers();

  // here we are using local variables
  // cout << firstNumber << " x " << secondNumber; // variables not declared in this scope
  // cout << " = " << multiplicationResult << endl; // variables not declared in this scope

  return 0;
}
