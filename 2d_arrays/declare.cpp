#include <iostream>
using namespace std;

// Passed by reference
// While taking input you have to define the maximum number of columns
void print_2d(int arr[][100], int n, int m)
{
  // Print loops
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  // Constraint that 2D cannot be greater than 100 Rows and 100 Cols
  // <datatype> arr_name[rows][cols];
  int arr[100][100];

  // n rows, m columns
  int n, m;
  cin >> n >> m;

  // Take input
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  print_2d(arr, n, m);

  return 0;
}

/* 2D Arrays can be stored in two ways
 1. Row major
 2. Column major
*/