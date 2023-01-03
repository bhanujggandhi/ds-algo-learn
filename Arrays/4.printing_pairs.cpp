#include <iostream>
using namespace std;

// Brute force
void printPairs(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      cout << arr[i] << " ," << arr[j] << " | ";
    }
    cout << endl;
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  printPairs(arr, n);

  // For each syntax
  // for (int x : arr)
  // {
  //   cout << x << " ,";
  // }

  return 0;
}