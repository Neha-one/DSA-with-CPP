#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
  int student = 1;
  int pageSum = 0;
  for (int i = 0; i < n; i++)
  {
    if (pageSum + arr[i] <= mid)
    {
      pageSum += arr[i];
    }
    else
    {
      student++;
      if (student > m || arr[i] > mid)
      {
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int bookAllocation(int arr[], int n, int m)
{
  int totalPageSum = 0;
  for (int i = 0; i < n; i++)
  {
    totalPageSum += arr[i];
  }
  int s = 0;
  int e = totalPageSum;
  int ans;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (isPossible(arr, n, m, mid))
    {
      ans = mid;
      e = mid - 1;
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
  int arr[] = {10, 20, 30, 40};
  int n = sizeof(arr) / sizeof(int);
  int m = 2;
  cout << bookAllocation(arr, n, m);
}