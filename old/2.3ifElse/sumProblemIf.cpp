#include <iostream>
using namespace std;

int main()
{
  int opCode;
  cin >> opCode;

  if (opCode == 1)
  {
    double X;
    double Y;
    cin >> X >> Y;
    cout << "Sum of numbers is: " << X + Y << endl;
  }

  return 0;
}