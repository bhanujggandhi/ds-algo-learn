#include <iostream>
using namespace std;

int main()
{
  // Creating an array. We can use any method. If we initialize some elements say first or first two then rest all elements will be automatically be 0. We do not then there may be some garbage value.

  int marks[100];

  int n;
  cout << "Enter the number of students\n";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> marks[i];

    // Update
    marks[i] = marks[i] * 2;
  }

  // If we don't keep i < n then all the unitialized values upto 100 elements will be shown as 0
  for (int i = 0; i < 100; i++)
  {
    cout << marks[i] << " ,";
  }

  cout << endl;

  return 0;
}