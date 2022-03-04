#include <iostream>
using namespace std;

int main()
{
  double cost;
  int distance;

  cout << "Enter the distance, please?\n";
  cin >> distance;

  if (distance >= 0 && distance < 100)
  {
    cost = 5.00;
  }
  else if (distance >= 100 && distance < 500)
  {
    cost = 8.00;
  }
  else if (distance >= 500 && distance < 1000)
  {
    cost = 10.00;
  }
  else
  {
    cost = 12.00;
  }

  cout << "Estimated fare of the journey will be " << cost << endl;

  return 0;
}