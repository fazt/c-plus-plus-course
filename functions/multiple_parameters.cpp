#include <iostream>

using namespace std;

int sum(int x, int y) {
  return  x + y;
}

int main() {
  cout << "Result:" << sum(2, 3) << endl; 
  cout << "Result:" << sum(5, 6) << endl;
  cout << "Result:" << sum(10, 20) << endl;
}