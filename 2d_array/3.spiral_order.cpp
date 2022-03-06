#include <iostream>
using namespace std;

// n: rows, m: cols
void printSpiral(int arr[][10], int n, int m)
{
  // 4 variables
  int startRow = 0;
  int endRow = n - 1;
  int startCol = 0;
  int endCol = m - 1;

  // Traverse Outer boundary
  while (startRow <= endRow and startCol <= endCol)
  {
    // RIGHT
    for (int col = startCol; col <= endCol; col++)
    {
      cout << arr[startRow][col] << " ";
    }

    // BOTTOM
    for (int row = startRow + 1; row <= endRow; row++)
    {
      cout << arr[row][endCol] << " ";
    }

    // LEFT
    for (int col = endCol - 1; col >= startCol; col--)
    {
      if (startRow == endRow)
        break;
      cout << arr[endRow][col] << " ";
    }

    // UP
    for (int row = endRow - 1; row >= startRow + 1; row--)
    {
      if (startCol == endCol)
        break;
      cout << arr[row][startCol] << " ";
    }

    // Update variables to loop next inner boundary
    startRow++;
    endRow--;
    startCol++;
    endCol--;
  }
}

int main()
{
  int arr[][10] = {{1, 2, 3, 4, 17},
                   {5, 6, 7, 8, 18},
                   {9, 10, 11, 12, 19},
                   {13, 14, 15, 16, 20}};

  // Right->bottom->left->up
  // Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

  /*
  Idea: We will cover outer boundary initially, then we will shift to inner next boundary, then we will shift to inner next boundary and so on.
  */

  printSpiral(arr, 4, 5);
  return 0;
}