#include <iostream>

using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int multplicationResult = 0;

void MultiplyNumbers(){

  cout << "Enter the First Number: ";
  cin >> firstNumber;

  cout << "Enter the Second Number: ";
  cin >> secondNumber;

  multplicationResult = firstNumber * secondNumber;

  cout << "Displaying from MultiplyNumbers()";
  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multplicationResult << endl;

}

int main () {

  cout << "This program will help you multiply two numbers" << endl;

  MultiplyNumbers();

  cout << firstNumber << " x " << secondNumber;
  cout << " = " << multplicationResult << endl;

  return 0;
}
