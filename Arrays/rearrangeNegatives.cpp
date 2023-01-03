#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
  int i = 0, j = i + 1;
  while (j < n)
  {
    if (arr[i] < 0 && arr[j] > 0)
    {
      i++;
      j++;
    }
    else if (arr[i] > 0 && arr[j] < 0)
    {
      swap(arr[i], arr[j]);
      i++;
      j++;
    }
    else if (arr[i] > 0 && arr[j > 0])
    {
      j++;
    }
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  rearrange(arr, n);
  printArray(arr, n);
  return 0;
}