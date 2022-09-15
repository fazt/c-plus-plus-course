#include <iostream>

using namespace std;

void say_hello(string name, int age)
{
  cout << "Hello " << name
       << ", You are " << age << " years old" << endl;
}

int main() {
  cout << __cplusplus << endl;
  say_hello("John", 30);
  say_hello("Jane", 20);
  say_hello("Jack", 40);
}