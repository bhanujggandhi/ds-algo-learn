/*
C++ has an header file called <algorithm>
It has a sort() function which takes two necessary params
1. arr start (arr)
2. arr end (arr+n)

It also takes 3rd optional parameter which is a comparator function
bool compare(int a, int b)
{
  return a < b;
}
It must have a return type of boolean and compare both elements.
a<b: asc
a>b: desc
_________________________________________________
There is an inbuilt comparator
  greater<int>()
_________________________________________________
Another method to sort in descending order is use reverse method
reverse(arr_start, arr_end);

*/
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
  return a < b;
}

int main()
{
  int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
  int n = sizeof(arr) / sizeof(int);

  // 1.
  // sort(arr, arr + n, compare);

  // 2.
  sort(arr, arr + n, greater<int>());

  // 3.
  // sort(arr, arr + n);
  // reverse(arr, arr + n);

  // print array
  for (auto x : arr)
  {
    cout << x << " ";
  }
}