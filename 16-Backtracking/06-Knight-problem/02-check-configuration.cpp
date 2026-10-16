#include <iostream>
#include <vector>
using namespace std;
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {1, -1, -2, 2, -2, 2, -1, 1};
bool isSafe(int row, int col, vector<vector<int>> &board)
{
  int n = board.size();
  if (row >= 0 && row < n && col < n && col >= 0)
  {
    return true;
  }
  return false;
}
bool solveKT(int row, int col, vector<vector<int>> &board, int moves)
{
  int N = board.size();
  if (moves == N * N)
  {
    return true;
  }
  for (int i = 0; i < 8; i++)
  {
    int urow = row + dx[i];
    int ucol = col + dy[i];
    if (isSafe(urow, ucol, board) && board[urow][ucol] == moves)
    {
      if (solveKT(urow, ucol, board, moves + 1))
      {
        return true;
      }
    }
  }
  return false;
}
int main()
{
  vector<vector<int>> board = {{0, 11, 16, 5, 20}, {17, 4, 19, 10, 15}, {12, 1, 8, 21, 6}, {3, 18, 23, 14, 9}, {24, 13, 2, 7, 22}};

  if (solveKT(0, 0, board, 1))
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "not exists" << endl;
  };
  return 0;
}