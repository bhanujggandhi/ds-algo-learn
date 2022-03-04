#include <iostream>
using namespace std;

int main()
{
  bool leapYear = false;
  int year;

  cout << "Please enter the year?\n";
  cin >> year;

  if (year % 4 == 0)
  {
    leapYear = true;
  }
  else if (year % 100 == 0)
  {
    if (year % 400 == 0)
    {
      leapYear = true;
    }
  }

  if (leapYear)
  {
    cout << year << " is a leap year!!\n";
  }
  else
  {
    cout << "Uh oh! " << year << " is not a leap year!!\n";
  }

  return 0;
}