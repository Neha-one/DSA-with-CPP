#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void setMismtach(vector<int> nums)
{
  sort(nums.begin(), nums.end());
  int duplicate = -1, miss = -1;
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] == nums[i - 1])
    {
      duplicate = nums[i - 1];
    }
    else if (nums[i] - nums[i - 1] > 1)
    {
      miss = nums[i - 1] + 1;
    }
    if (nums[0] != 1 && miss == -1)
    {
      miss = 1;
    }
    if (nums[nums.size() - 1] != nums.size() && miss == -1)
    {
      miss = nums.size();
    }
  }
  cout << duplicate << " " << miss;
  return;
}
int main()
{
  vector<int> nums = {1, 2, 2, 3};
  setMismtach(nums);
  return 0;
}