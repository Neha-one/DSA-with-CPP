#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int h, int mid)
{
  int hour = 1;
  for (int i = 0; i < n; i++)
  {

    if (arr[i] / hour <= mid)
    {
      return true;
    }
    else
    {
      h++;
      arr[i] = arr[i] % mid;
      if (hour > h)
      {
        return false;
      }
    }
  }
}
int first(int arr[], int n, int h)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans;
  // int ans = -1;
  while (s <= e)
  {
    if (ispossible(arr, mid, n, h))
    {
      e = mid - 1;
      ans = mid;
    }
    else
    {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  int arr[] = {3, 6, 7, 11};
  int h = 8;
  int n = sizeof(arr) / sizeof(int);

  // int key = 2;

  cout << first(arr, n,h) << endl;
}
