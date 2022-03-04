#include <iostream>
using namespace std;

void printArray(int arr[])
{
  cout << "In function " << sizeof(arr) << endl;

  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}

// This confirms that arrays in C++ are passed by reference. That is pointer to the first element is passed in the function. So size of arr in printArray is 8 only as it is giving the address only while size of arr in main is 24 as it has 6 integers of size 4.

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};

  int n = sizeof(arr) / sizeof(int);

  cout << "In Main " << sizeof(arr) << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }

  printArray(arr);

  return 0;
}