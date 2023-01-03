#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  // This loop will run n-1 times as we want n-1 max to go to the right
  // The last max i.e min element will anyways be at the right place :)
  for (int times = 1; times <= n - 1; times++)
  {
    int flag = 0;
    // This loop manages swapping
    for (int j = 0; j < n - times; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        flag = 1;
      }
    }
    // Optimization to prevent unnecessary rounds.
    if (flag == 0)
    {
      break;
    }
  }
}

int main()
{
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  bubbleSort(arr, n);

  for (auto x : arr)
  {
    cout << x << ", ";
  }

  return 0;
}