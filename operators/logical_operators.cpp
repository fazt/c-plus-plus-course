#include <iostream>

using namespace std;

int main() {
  cout << boolalpha;
  // Equality 
  cout << (1 == 1) << endl; // 1
  cout << (1 == 3) << endl; // 0

  // String Equality
  cout << ("Hello world" == "Hello world") << endl; // 1
  cout << ("Hello world" == "hello World") << endl; // 0

  // Inequality
  cout << (1 != 1) << endl; // 0
  cout << (1 != 3) << endl; // 1

  // Comparison
  cout << (1 < 3) << endl; // 1 - true
  cout << (1 > 3) << endl; // 0 - false
  cout << (1 <= 3) << endl; // 1 - true
  cout << (1 >= 3) << endl; // 0 - false

  // Multiple Comparisons
  cout << (1 < 3 && 1 < 2) << endl; // 1 - true
  cout << (1 < 3 && 1 > 2) << endl; // 0 - false
  cout << (1 < 3 || 1 > 2) << endl; // 1 - true
  cout << (1 > 3 || 1 > 2) << endl; // 0 - false
}