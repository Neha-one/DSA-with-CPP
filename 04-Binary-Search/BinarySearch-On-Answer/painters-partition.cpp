#include <iostream>
using namespace std;
bool ispossible(int arr[], int k, int n, int mid)
{
  int boradSum = 0;
  int painter = 1;
  for (int i = 0; i < n; i++)
  {
    if (boradSum + arr[i] <= mid)
    {
      boradSum += arr[i];
    }
    else
    {
      painter++;
      if (painter > k || arr[i] > mid)
      {
        return false;
      }
      boradSum = arr[i];
    }
  }
  return true;
}
int painterPartition(int arr[], int k, int n)
{
  int totalBoards = 0;
  for (int i = 0; i < n; i++)
  {
    totalBoards += arr[i];
  }
  int s = 0;
  int e = totalBoards;
  int mid = s + (e - s) / 2;
  int ans = 0;
  while (s <= e)
  {
    if (ispossible(arr, k, n, mid))
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
  int arr[] = {5, 10, 15, 20};
  int k = 2;
  int n = sizeof(arr) / sizeof(int);
  cout << painterPartition(arr, k, n);
}