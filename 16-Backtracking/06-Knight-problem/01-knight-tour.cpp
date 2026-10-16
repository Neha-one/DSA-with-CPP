#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void printBoard(vector<vector<int>> &board)
{
  int n = board.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "-------------------------";
}
bool isSafe(int row, int col, vector<vector<int>> &board)
{
  int n = board.size();
  if (row >= 0 && row < n && col >= 0 && col < n && board[row][col] == -1)
  {
    return true;
  }
  return false;
}
bool solveKt(int row, int col, vector<vector<int>> &board, int moves)
{
  int N = board.size();
  if (moves == N * N)
  {
    return true;
  }
  for (int i = 0; i < 8; i++)
  {
    int uRow = row + dx[i];
    int uCol = col + dy[i];

    if (isSafe(uRow, uCol, board))
    {
      board[uRow][uCol] = moves;
      if (solveKt(uRow, uCol, board, moves + 1))
        return true;
      board[uRow][uCol] = -1;
    }
  }
  return false;
}
int main()
{
  int n = 8;
  vector<vector<int>> board(n, vector<int>(n, -1));
  board[0][0] = 0;
  if (solveKt(0, 0, board, 1))
  {
    printBoard(board);
  };
  return 0;
}