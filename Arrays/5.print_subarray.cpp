#include <iostream>
using namespace std;

// What is a subarray?
//  Continuous elements of an array. Can be of any size.
// Eg: 1,2,3,4,5,6
// (1), (1, 2), (1, 2 ,3), (1, 2, 3, 4), (1, 2, 3, 4, 5), (1, 2, 3, 4 ,5 ,6)
// (2), (2,3), (2,3,4), (2,3,4,5), (2,3,4,5,6)
// We need to print all the subarrays

void printAllSubarrays(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "[";
      for (int k = i; k <= j; k++)
      {
        cout << arr[k] << ", ";
      }
      cout << "]" << endl;
    }
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  printAllSubarrays(arr, n);

  return 0;
}