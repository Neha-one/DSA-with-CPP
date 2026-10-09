#include <iostream>
#include <vector>
using namespace std;

//-------TC: - O(n)   SC : O(1);
int majorityElement2(vector<int> &nums)
{
  int count = 0,  element = 0;
  for (int n : nums)
  {
    if (count == 0)
    {
      element = n;
    }
    if (n == element)
    {
      count++;
    }
    else
      count--;
  }
  return element;
}
//-------approach 02 ------- using recursion but -------TC: O(n) and SC: O(n) due to call stack;
int majorityElement(vector<int> &nums, int i, int count, int element)
{
  if (i >= nums.size())
    return element;

  if (count == 0)
  {
    element = nums[i];
  }
  if (nums[i] == element)
  {
    count++;
  }
  else
  {
    count--;
  }
  return majorityElement(nums, i + 1, count, element);
}
int main()
{
  vector<int> nums = {3, 2, 3};
  cout << majorityElement2(nums)<<endl;
  cout << majorityElement(nums, 0, 0, 0) << endl;
  return 0;
}