#include <iostream>
#include <string>
using namespace std;
void gridWays(int row, int col, int n, int m, string ans)
{
  if (row == n - 1 && col == m - 1)
  {
    cout << ans << endl;
    return;
  }
  if (row >= n || col >= m)
  {
    return;
  }
  gridWays(row, col + 1, n, m, ans + "Right ");
  gridWays(row + 1, col, n, m, ans + "Down ");
}
int main()
{
  int n = 2;
  int m = 3;
  gridWays(0, 0, n, m, "");
  return 0;
}