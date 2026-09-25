#include <iostream>
#include <vector>
using namespace std;
void printVec(vector<int> ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
void pairSum(vector<int> v, int target)
{
  vector<int> ans;
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v.size(); j++)
    {
      if (i == j)
      {
        break;
      }
      if (v[i] + v[j] == target)
      {
        ans.push_back(j);
        ans.push_back(i);
      }
    }
  }
  printVec(ans);
}
int main()
{
  vector<int> v = {2, 7, 11, 15};
  int target = 18;
  pairSum(v, target);
  return 0;
}