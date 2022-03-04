#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r)
{
  int i = l;
  int j = l;
  int size = r - l + 1;

  while (j < size)
  {
    if (arr[j] < arr[l])
    {
      i++;
      swap(arr[j], arr[i]);
    }
    j++;
  }

  swap(arr[i], arr[l]);

  return i;
}

int kthSmallest(int arr[], int l, int r, int k)
{
  int p = partition(arr, l, r);

  if (k == 1)
  {
    return arr[0];
  }

  if (p == k - 1)
  {
    return arr[p];
  }

  if (p < k - 1)
  {
    return kthSmallest(arr + p + 1, 0, r - p - 1, k - p - 1);
  }

  return 0;
}

int main()
{
  int arr[] = {7, 10, 4, 20, 15};
  int k = 4;
  int size = sizeof(arr) / sizeof(int);
  int ans = kthSmallest(arr, 0, size - 1, k);

  cout << "Answer is: " << ans << endl;
}