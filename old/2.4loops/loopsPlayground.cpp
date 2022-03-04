#include <bits/stdc++.h>
using namespace std;

int main()
{
  int number, loopNumber, j, count = 0, num = 0;
  cout << "Enter the starting number" << endl;
  cin >> number;
  if (number == 0 || number == 1)
  {
    cout << "The total number of prime number is 0";
  }
  else
  {
    for (loopNumber = 2; loopNumber <= number; loopNumber++)
    {
      for (j = 2; j <= loopNumber / 2; j++)
      {
        if (loopNumber % j == 0)
        {
          count++;
          break;
        }
      }
      if (count == 0)
      {
        cout << loopNumber << " ";
        num++;
      }
      count = 0;
    }
    cout << "\nThe total number of prime numbers is " << num + 1 << endl;
  }
  return 0;
}