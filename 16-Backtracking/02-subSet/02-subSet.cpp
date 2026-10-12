#include <iostream>
#include <vector>
using namespace std;
void subSet(vector<int> arr, int i, vector<int> ans)
{
  if (i == arr.size())
  {
    for (int x : ans)
    {
      cout << x << " ";
    }
    cout << endl;
    return;
  }
  // include:----
  ans.push_back(arr[i]);
  subSet(arr, i + 1, ans);

  // backtracking:-----
  ans.pop_back();

  // exclude:--------
  subSet(arr, i + 1, ans);
}
int main()
{
  vector<int> arr = {1, 2};
  vector<int> ans;
  subSet(arr, 0, ans);
  return 0;
}