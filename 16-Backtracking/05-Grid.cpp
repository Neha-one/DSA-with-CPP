#include <iostream>
using namespace std;
int gridFind(int row, int col, int n, int m)
{
  if (row == n - 1 && col == m - 1)
  {
    return 1;
  }
  if (row >= n || col >= m)
  {
    return 0;
  }
  int val1 = gridFind(row, col + 1, n, m);
  int val2 = gridFind(row + 1, col, n, m);
  return val1 + val2;
}
int main()
{
  int n = 3;
  int m = 3;
  cout << gridFind(0, 0, n, m);
  return 0;
}