#include <iostream>
using namespace std;
// Copied, I don't know how the heck this code is doing
int main()
{
  char input, alphabet = 'A';

  cout << "Enter the uppercase character you want to print in last row: ";
  cin >> input;

  for (int i = 1; i <= (input - 'A' + 1); i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << alphabet << " ";
    }
    ++alphabet;
    cout << endl;
  }

  return 0;
}