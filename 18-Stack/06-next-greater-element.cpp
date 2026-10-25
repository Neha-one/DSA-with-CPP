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
    s.push(arr[i]);
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> arr = {6, 8, 0, 1, 3}; //{ 8 -1 1 3 -1}
  // vector<int> arr = {9, 8, 7, 6, 3}; //{ -1 -1 -1 -1 -1}
  // vector<int> arr = {2, 3, 45, 66, 77}; //{ 3 45 66 77 -1}
  vector<int> ans = {0, 0, 0, 0, 0};
  nextGreater(arr, ans);
  return 0;
}