#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   for (int num = 1; num <= 250; num++)
//   {
//     int count = 0;
//     for (int j = 2; j < num; j++)
//     {
//       if (num % j == 0)
//       {
//         count++;
//         break;
//       }
//     }
//     if (count == 0 && num != 1)
//     {
//       int n = pow(2, num - 1) * ((pow(2, num) - 1));
//       if (n > 0 && n <= 500)
//       {

//         cout << n << endl;
//       }
//     }
//   }
// }

// ____________________________________________________

int main()
{
  int sum = 0;
  cout << "\nThe perfect numbers between 1 to 500 are: \n";
  for (int number = 1; number <= 500; number++)
  {
    for (int i = 1; i < number; i++)
    {
      if (number % i == 0)
      {
        sum = sum + i;
      }
    }
    if (sum == number)
    {

      cout << number << endl;
    }
    sum = 0;
  }
  return 0;
}