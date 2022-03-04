#include <iostream>
using namespace std;

// Brute Force
// O(n^3)
int largestSubArraySum1(int arr[], int n)
{
  int largest_sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int current_sum = 0;
      for (int k = i; k < j; k++)
      {
        current_sum += arr[k];
      }
      largest_sum = max(current_sum, largest_sum);
    }
  }
  return largest_sum;
}

// Prefix Array Method
// O(n^2)
int largetSumPrefix(int arr[], int n)
{
  int pf[n] = {arr[0]};
  for (int i = 1; i < n; i++)
  {
    pf[i] = pf[i - 1] + arr[i];
  }

  int global_max = arr[0];

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int current_sum = i > 0 ? (pf[j] - pf[i - 1]) : pf[j];
      global_max = max(global_max, current_sum);
    }
  }

  return global_max;
}

// Kadane's Algorithm
// O(n)

int MSSKadane(int arr[], int n)
{
  int cs = 0, ms = 0;
  for (int i = 0; i < n; i++)
  {
    cs += arr[i];
    if (cs < 0)
      cs = 0;

    ms = max(ms, cs);
  }
  return ms;
}

int main()
{
  int arr[] = {-2, 3, 9, 12, -4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  cout << largestSubArraySum1(arr, n) << endl;
  cout << largetSumPrefix(arr, n) << endl;
  cout << MSSKadane(arr, n) << endl;
}