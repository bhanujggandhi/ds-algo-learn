#include <iostream>
using namespace std;

int main()
{
  char route[1000];
  cin.getline(route, 1000);

  int x = 0, y = 0, i = 0;

  while (route[i] != '\0')
  {
    switch (route[i])
    {
    case 'N':
      y++;
      break;
    case 'S':
      y--;
      break;
    case 'E':
      x++;
      break;
    case 'W':
      x--;
      break;
    }
    i++;
  }

  cout << "Final x is: " << x << " and final y is: " << y << endl;

  char answer[1000];
  int j = 0;
  if (x > 0)
  {
    while (x != 0)
    {
      answer[j] = 'E';
      x--;
      j++;
    }
  }

  if (x < 0)
  {
    while (x != 0)
    {
      answer[j] = 'W';
      x++;
      j++;
    }
  }

  if (y > 0)
  {
    while (y != 0)
    {
      answer[j] = 'N';
      y--;
      j++;
    }
  }

  if (y < 0)
  {
    while (y != 0)
    {
      answer[j] = 'S';
      y++;
      j++;
    }
  }
  answer[j] = '\0';

  cout << answer << endl;

  return 0;
}