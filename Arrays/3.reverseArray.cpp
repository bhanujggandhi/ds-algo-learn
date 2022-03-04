#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
  int temp = 0;
  for (int i = 0; i < n / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
  int n = sizeof(arr) / sizeof(int);

  reverseArray(arr, n);
  printArray(arr, n);

  return 0;
}