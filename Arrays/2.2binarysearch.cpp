#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key)
{
  int mid;

  if (l <= r)
    mid = (l + r) / 2;
  else
    return -1;

  if (arr[mid] == key)
  {
    return mid;
  }
  else if (arr[mid] > key)
  {
    r = mid - 1;
    return binarySearch(arr, l, r, key);
  }
  else if (arr[mid] < key)
  {
    l = mid + 1;
    return binarySearch(arr, l, r, key);
  }
}

// Iterative way

int binarySearchIterative(int arr[], int n, int key)
{
  int l = 0;
  int r = n - 1;

  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      r = mid - 1;
    }
    else if (arr[mid] < key)
    {
      l = mid + 1;
    }
  }

  return -1;
}

int main()
{
  int arr[] = {2, 10, 21, 23, 32, 44, 54, 95};
  int n = sizeof(arr) / sizeof(int);
  int key;

  cout << "Enter the key" << endl;
  cin >> key;

  int l = 0, r = n - 1;

  // int result = binarySearch(arr, l, r, key);
  int result = binarySearchIterative(arr, n, key);

  (result == -1)
      ? cout << "Key is not present" << endl
      : cout << "Your key is at " << result << endl;
}