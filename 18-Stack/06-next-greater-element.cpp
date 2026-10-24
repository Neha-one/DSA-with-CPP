#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void nextGreater(vector<int> &arr, vector<int> &ans)
{
  int n = arr.size();
  stack<int> s;
  for (int i = n - 1; i >= 0; i--)
  {
    while (!s.empty() && arr[i] >= s.top())
    {
      s.pop();
    }
    if (s.empty())
    {
      ans[i] = -1;
    }
    else
    {
      ans[i] = s.top();
    }
    s.push(i);
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {6, 8, 0, 1, 3};
  vector<int> ans = {0, 0, 0, 0, 0};
  nextGreater(arr, ans);
  return 0;
}