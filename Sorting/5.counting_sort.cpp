/*
Used to sort data in a RANGE
1. We create an array freq having number of elements equal to largest element in the array.
2. We update freq array with number of occurences of each element in the original array.
3. Now we put elements in original array according to frequence of freq array
*/

#include <iostream>
using namespace std;

void counting_sort(int a[], int n)
{
  int largest = -1;

  for (int i = 0; i < n; i++)
  {
    largest = max(largest, a[i]);
  }

  // Create a count array/vector
  int freq[largest + 1] = {0};

  // Update the freq array
  for (int i = 0; i < n; i++)
  {
    freq[a[i]]++;
  }

  // Put back according to frequency into original array

  int pos = 0;                       // This will tell where to put next element
  for (int i = 0; i <= largest; i++) // Loop of range
  {
    while (freq[i] > 0) // Until freq of an element is greater than zero put element in the original array and decrease the frequency
    {
      a[pos] = i;
      freq[i]--;
      pos++;
    }
  }
}

int main()
{
  int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
  int n = sizeof(arr) / sizeof(int);

  counting_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ";
  }
}