#include <iostream>

using namespace std;

int main()
{
  int user_age = 50;

  if (user_age < 18)
  {
    cout << "You are not an adult yet." << endl;
  }
  else if (user_age >= 18 && user_age < 30)
  {
    cout << "You are an adult below 30." << endl;
  }
  else if (user_age >= 30 && user_age < 40)
  {

    cout << "You are an in your thirties." << endl;
  }
  else
  {
    cout << "You are 40 or more" << endl;
  }

  return 0;
}
