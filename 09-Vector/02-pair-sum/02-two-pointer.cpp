#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target)
{
  int s = 0;
  int e = arr.size() - 1;
  while (s < e)
  {
    int sum = arr[s] + arr[e];
    if (sum == target)
    {
      return {s, e};
    }
    else if (sum > target)
    {
      e--;
    }
    else
    {
      s++;
    }
  }
  return {};
}
int main()
{
  vector<int> arr = {2, 7, 11, 15};
  int target;
  cout << "enter target value: ";
  cin >> target;
  vector<int> ans = pairSum(arr, target);
  cout << ans[0] << " " << ans[1];
  return 0;
}