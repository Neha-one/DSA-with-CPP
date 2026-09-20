#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rotateImage(vector<vector<int>> arr)
{
  int n = arr.size();
  vector<vector<int>> mat(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      mat[i][j] = arr[n - j - 1][i];
    }
  }
  return mat;
}
int main()
{
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> ans = rotateImage(arr);

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans.size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}