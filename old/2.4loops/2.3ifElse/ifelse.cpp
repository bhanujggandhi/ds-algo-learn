#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  // if (a > b && a > c)
  // {
  //   cout << a << " is the greatest amongst all\n";
  // }
  // else if (b > a && b > c)
  // {
  //   cout << b << " is the greatest amongst all\n";
  // }
  // else
  // {
  //   cout << c << " is the greatest amongst all\n";
  // }

  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is the greatest amongst all\n";
    }
    else
    {
      cout << c << " is the greatest amongst all\n";
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is the greatest amongst all\n";
    }
    else
    {
      cout << c << " is the greatest amongst all\n";
    }
  }

  return 0;
}