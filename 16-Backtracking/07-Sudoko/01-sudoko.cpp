#include <iostream>
#include <vector>
using namespace std;
void printSudoko(vector<vector<int>> &board)
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "------------";
}
bool isSafe(vector<vector<int>> &board, int row, int col, int num)
{
  for (int i = 0; i < 9; i++)
  {
    if (board[i][col] == num)
    {
      return false;
    }
  }
  for (int i = 0; i < 9; i++)
  {
    if (board[row][i] == num)
    {
      return false;
    }
  }
  int startRow = (row / 3) * 3;
  int startCol = (col / 3) * 3;
  for (int i = startRow; i < startRow + 3; i++)
  {
    for (int j = startCol; j < startCol + 3; j++)
    {
      if (board[i][j] == num)
        return false;
    }
  }
  return true;
}
bool sudokoSolver(vector<vector<int>> &board, int row, int col)
{
  if (col == 9)
  {
    return sudokoSolver(board, row + 1, 0);
  }
  if (row == 9)
  {
    printSudoko(board);
    return true;
  }
  if (board[row][col] != -1)
  {
    return sudokoSolver(board, row, col + 1);
  }
  for (int digit = 1; digit <= 9; digit++)
  {
    // int num = 1;
    if (board[row][col] == -1)
    {
      if (isSafe(board, row, col, digit))
      {
        board[row][col] = digit;
        if (sudokoSolver(board, row, col + 1))
        {
          return true;
        }
        board[row][col] = -1;
      }
    }
  }
  return false;
}
int main()
{
  vector<vector<int>> board = {
      {5, 3, -1, -1, 7, -1, -1, -1, -1},
      {6, -1, -1, 1, 9, 5, -1, -1, -1},
      {-1, 9, 8, -1, -1, -1, -1, 6, -1},
      {8, -1, -1, -1, 6, -1, -1, -1, 3},
      {4, -1, -1, 8, -1, 3, -1, -1, 1},
      {7, -1, -1, -1, 2, -1, -1, -1, 6},
      {-1, 6, -1, -1, -1, -1, 2, 8, -1},
      {-1, -1, -1, 4, 1, 9, -1, -1, 5},
      {-1, -1, -1, -1, 8, -1, -1, 7, 9}};
  sudokoSolver(board, 0, 0);
  return 0;
}