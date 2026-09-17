#include <iostream>
#include <vector>
using namespace std;
void ThreeSum(int arr[], int n)
{
  vector<vector<int>> ans;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum == 0)
        {
          ans.push_back({arr[i], arr[j], arr[k]});
        }
      }
    }
  }
  for (vector<int> triplet : ans)
  {
    for (int x : triplet)
    {
      cout << x << " ";
    }
    cout << endl;
  }
}
int main()
{
  int arr[] = {-1, 0, 1, 2, -1, 4};
  ThreeSum(arr, 6);
  return 0;
}