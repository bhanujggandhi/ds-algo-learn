/*
1. Find a min. Swap with the 0th.
2. Find a min from 1 to n element swap with 1st
3. Repeat this loop n-1 times.
*/
#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
  // We need to run this loop n-1 times only as if n-1 elements are sorted then definitely nth element will be sorted.
  for (int i = 0; i < n - 1; i++)
  {
    int current_min = i;
    for (int j = i; j < n; j++)
    {
      if (a[current_min] > a[j])
        current_min = j;
    }
    swap(a[i], a[current_min]);
  }
}

int main()
{
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  selection_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << ", ";
  }

  return 0;
}