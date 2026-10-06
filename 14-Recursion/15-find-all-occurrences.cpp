#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllOccurance(vector<int> arr, int i, int key, vector<int> ans)
{
  if (i == arr.size())
  {
    return ans;
  }
  if (arr[i] == key)
  {
    ans.push_back(i);
    return findAllOccurance(arr, i + 1, key, ans);
  }
  return findAllOccurance(arr, i + 1, key, ans);
}
int main()
{
  vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
  vector<int> ans;
  vector<int> answer = findAllOccurance(arr, 0, 2, ans);
  for (int i : answer)
  {
    cout << i << " ";
  }
  return 0;
}