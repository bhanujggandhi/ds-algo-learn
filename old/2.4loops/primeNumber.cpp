
#include <bits/stdc++.h>
using namespace std;

//Perfect squares are made
// Like 1*2 == 2*1
// 1*3 == 3*1
//

int main()
{
  int number;
  cout << "Enter a number to check?\n";
  cin >> number;

  int count = 0;

  for (int i = 2; i <= number / 2; i++)
  {
    if (number % i == 0)
    {
      count++;
      break;
    }
  }

  if (count == 0)
  {
    cout << "Yes, the number is prime\n";
  }
  else
  {
    cout << "No, the number is prime\n";
  }

  return 0;
}