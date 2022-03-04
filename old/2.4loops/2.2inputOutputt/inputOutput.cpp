// To get total amount in child's hand after getting pocket money from mom and dad.

#include <iostream>
using namespace std;

int main()
{
  int amount1;
  cout << "Amount by mother?\n";
  cin >> amount1;

  int amount2;
  cout << "Amount by father?\n";
  cin >> amount2;

  cout << "Total amount child have is " << amount1 + amount2 << endl;

  return 0;
}