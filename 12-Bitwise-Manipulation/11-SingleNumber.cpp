#include <iostream>
#include <vector>
using namespace std;
int CheckSingleNum(vector<int> nums)
{
  int singleNum = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    singleNum = nums[i] ^ singleNum;
  }
  return singleNum;
}
int main()
{
  vector<int> nums = {10, 9, 7, 14, 9, 7, 10};
  cout << CheckSingleNum(nums);
  return 0;
}