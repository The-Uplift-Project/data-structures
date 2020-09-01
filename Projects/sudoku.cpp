/*Author: Prince Gupta */


#include <bits/stdc++.h>
using namespace std;

const int UNASSIGNED = 0; // empty cells in the sudoku table
const int N = 9;          // sudoku grid size

// returns whether or not "number" has been used in particular row
bool usedInRow(int grid[N][N], int row, int number)
{
  for (int col = 0; col < N; col++)
    if (grid[row][col] == number)
      return true;
  return false;
}

// returns whether or not "number" has been used in particular column
bool usedInCol(int grid[N][N], int col, int number)
{
  for (int row = 0; row < N; row++)
    if (grid[row][col] == number)
      return true;
  return false;
}

// returns whether or not "number" has been used in particular box
bool usedInBox(int grid[N][N], int row, int col, int number)
{
  int boxStartRow = row - row % 3;
  int boxStartCol = col - col % 3;
  for (int ii = 0; ii < 3; ii++)
    for (int jj = 0; jj < 3; jj++)
      if (grid[boxStartRow + ii][boxStartCol + jj] == number)
        return true;
  return false;
}

// checks whether or not it is valid to place "number" in the given position
bool isValid(int grid[N][N], int row, int col, int number)
{
  return !usedInRow(grid, row, number) &&
         !usedInCol(grid, col, number) &&
         !usedInBox(grid, row, col, number);
}

// finds the first unassigned or empty cell in sudoku grid. row and column are passed by reference
bool findUnassignedLocation(int grid[N][N], int &row, int &col)
{
  for (row = 0; row < N; row++)
    for (col = 0; col < N; col++)
      if (grid[row][col] == UNASSIGNED)
        return true;
  return false;
}

// main sudoku solver function
bool solveSudoku(int grid[N][N])
{
  int row, col;

  // if there is no unassigned location, then return true - base case
  if (!findUnassignedLocation(grid, row, col))
    return true;

  for (int number = 1; number <= 9; number++)
  {
    // if safe
    if (isValid(grid, row, col, number))
    {
      // assign value
      grid[row][col] = number;

      if (solveSudoku(grid))
        return true;

      grid[row][col] = UNASSIGNED;
    }
  }
  return false; // this triggers backtracking
}

// display the grid
void displayGrid(int grid[N][N])
{
  for (int row = 0; row < N; row++)
  {
    for (int col = 0; col < N; col++)
      cout << grid[row][col] << " ";
    cout << endl;
  }
}

Sudoku_Solver()
{

  int grid[N][N];

  cout << "Enter the Sudoku grid (Use 0 for empty cells): " << endl;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> grid[i][j];
    }
  }
  cout << endl;

  if (solveSudoku(grid) == true)
  {
    cout << "Solution: " << endl;
    displayGrid(grid);
  }
  else
  {
    cout << "No solution exists. " << endl;
    cout << "Are you sure you entered it correctly?" << endl;
  }

  return 0;
}