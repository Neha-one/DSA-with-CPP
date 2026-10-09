#include <iostream>
using namespace std;
int BS(int arr[], int s, int e)
{
  if (s >= e)
    return s;

  int mid = s + (e - s) / 2;

  if (arr[mid] >= arr[0])
  {
    BS(arr, mid + 1, e);
  }
  else
    BS(arr, s, mid);
}
int search(int arr[], int s, int e, int target)
{
  if (s > e)
  {
    return -1;
  }
  int mid = s + (e - s) / 2;
  if (arr[mid] == target)
  {
    return mid;
  }
  // L1-----
  if (arr[mid] >= arr[s])
  {
    if (arr[s] <= target && target < arr[mid])
    {
      return search(arr, s, mid - 1, target);
    }
    else
    {
      return search(arr, mid + 1, e, target);
    }
  }
  // L2------
  else
  {
    if (arr[mid] < target && target <= arr[e])
    {
      return search(arr, mid + 1, e, target);
    }
    else
      return search(arr, s, mid - 1, target);
  }
}
int main()
{
  int arr[] = {4, 5, 6, 7, 0, 1, 2};
  cout << BS(arr, 0, 6) << endl;
  cout << search(arr, 0, 6, 0);
  return 0;
}