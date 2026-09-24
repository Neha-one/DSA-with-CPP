#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> setMismatch(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  int n = nums.size();
  vector<int> count(n + 1, 0);
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++)
  {
    count[nums[i]]++;
  }
  for (int i = 1; i <= n; i++)
  {
    if (count[i] == 2)
    {
      ans.push_back(i);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (count[i] == 0)
    {
      ans.push_back(i);
    }
  }
  return ans;
}
int main()
{
  vector<int> nums = {2, 2};
  vector<int> ans = setMismatch(nums);
  cout << ans[0] << " " << ans[1];
  return 0;
}