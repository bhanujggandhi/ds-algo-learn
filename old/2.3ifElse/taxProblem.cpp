#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout << "Input the amount\n";
  cin >> amount;

  char taxCode;
  cout << "Input tax code\n";
  cin >> taxCode;

  if (taxCode == 'T')
  {
    int tax;
    cout << "Input the tax percentage\n";
    cin >> tax;

    int total = amount + (amount * tax / 100);
    cout << "Total amount is: " << total << endl;
  }
  return 0;
}