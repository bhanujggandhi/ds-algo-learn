#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    // Checking if the element we need is ith element of array
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // Typical way of getting size of array.
  int n = sizeof(arr) / sizeof(int);
  int key;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ,";
  }

  cout << endl;

  cout << "Which element do you want to search?\n";
  cin >> key;

  cout << linearSearch(arr, n, key) << endl;

  return 0;
}