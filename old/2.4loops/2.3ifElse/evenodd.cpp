#include <iostream>
using namespace std;

int main()
{
  int number;
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "It is an even number!\n";
  }
  else
  {
    cout << "It is an odd number!\n";
  }

  return 0;
}