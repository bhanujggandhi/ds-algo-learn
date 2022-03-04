#include <iostream>
using namespace std;

int main()
{
  int currentNumber;

  cout << "Please enter the number?\n";
  cin >> currentNumber;

  if (currentNumber % 2 != 0)
  {
    currentNumber = (currentNumber * 3) + 1;
    cout << "Rounded number is: " << currentNumber << endl;
  }
  else
  {
    currentNumber = currentNumber / 2;
    cout << "Rounded number is: " << currentNumber << endl;
  }

  return 0;
}