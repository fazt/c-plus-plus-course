#include <iostream>

using namespace std;

string say_hello(string name) {
  return "Hello " + name;
}

int main() {
  cout << say_hello("John") << endl;
  cout << say_hello("Jane") << endl;
  cout << say_hello("Jack") << endl;
}