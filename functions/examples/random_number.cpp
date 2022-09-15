#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int randomNumber(int max = 100)
{
  srand(time(0));
  return rand() % max;
}

int main()
{
  cout << "random number:" <<  randomNumber() << endl;
  cout << "random number:" <<  randomNumber(10) << endl;
  cout << "random number:" <<  randomNumber(30) << endl;
}