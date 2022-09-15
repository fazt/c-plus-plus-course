#include <iostream>

using namespace std;

int main()
{
  int temperature;
  cout << "Please enter a temperature: ";
  cin >> temperature;

  if (temperature > 30)
  {
    cout << "It is hot" << endl;
  }
  else if (temperature <= 0)
  {
    cout << "It is freezing" << endl;
  }
  else
  {
    cout << "It is warm" << endl;
  }

  return 0;
}
