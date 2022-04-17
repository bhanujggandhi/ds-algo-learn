#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
  int firstSub = mid - start + 1;
  int secondSub = end - (mid + 1) - 1;

  int leftSub[firstSub];
  int rightSub[secondSub];

  for (int k = 0; k < firstSub; k++)
  {
    leftSub[k] = arr[start + k];
  }
  for (int k = 0; k < firstSub; k++)
  {
    rightSub[k] = arr[mid + 1 + k];
  }

  // for (auto x : leftSub)
  // {
  //   cout << x << ", ";
  // }

  int i = 0, j = 0, k = start;

  while (i < firstSub and j < secondSub)
  {
    if (leftSub[i] <= rightSub[j])
    {
      arr[k] = leftSub[i];
      i++;
    }
    else
    {
      arr[k] = rightSub[j];
      j++;
    }
    k++;
  }

  while (i < firstSub)
  {
    arr[k] = leftSub[i];
    i++;
    k++;
  }

  while (j < secondSub)
  {
    arr[k] = rightSub[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r)
{
  if (l == r)
    return;

  int mid = l + (r - l) / 2;

  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);

  merge(arr, l, mid, r);
}

int main()
{

  int arr[] = {6, 5, 12, 10, 9, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, n - 1);

  for (auto x : arr)
  {
    cout << x << ", ";
  }
  return 0;
}
