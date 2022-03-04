#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
  // Starting from index 1 we want to put n-1 elements in their right  position. (As 0th index element is always sorted)

  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int prev_index = i - 1;

    // This loop will find the correct position of the element to be inserted
    // Means for every we are going back to check where should this element come
    while (prev_index >= 0 && arr[prev_index] > current)
    {
      arr[prev_index + 1] = arr[prev_index];
      prev_index = prev_index - 1;
    }
    arr[prev_index + 1] = current;
  }
}

int main()
{
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  insertion_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << ", ";
  }

  return 0;
}
