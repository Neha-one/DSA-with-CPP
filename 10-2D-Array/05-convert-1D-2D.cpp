#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> ConvertArr(vector<int> original, int n, int m)
{
  if (original.size() != m * n)
  {
    return {};
  }
  vector<vector<int>> mat(n, vector<int>(m));
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      mat[i][j] = original[x];
      x++;
    }
  }
  return mat;
}
int main()
{
  vector<int> original = {1, 2, 3, 4};
  int n = 2, m = 2;
  vector<vector<int>> ans = ConvertArr(original, n, m);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
