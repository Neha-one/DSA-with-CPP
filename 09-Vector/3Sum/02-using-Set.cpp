#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void ThreeSum(int arr[], int n)
{
  set<vector<int>> ans;

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        int sum = arr[i] + arr[j] + arr[k];

        if (sum == 0)
        {
          vector<int> triplet = {arr[i], arr[j], arr[k]};
          sort(triplet.begin(), triplet.end());

          ans.insert(triplet);
        }
      }
    }
  }

  for (auto triplet : ans)
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