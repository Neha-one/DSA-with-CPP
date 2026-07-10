#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + (e - s) / 2);
  while (s < e)
  {

    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = (s + (e - s) / 2);
  }
  return s;
  //--or--
  // return e;
};
int targetEle(int arr[], int s, int e, int key)
{
  int mid = (s + (e - s) / 2);
  while (s <= e)
  {

    if (arr[mid] == key)
    {
      return 1;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = (s + (e - s) / 2);
  }
  return -1;
};

int main()
{
  int arr[] = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int key = 5;
  int getpivot = pivot(arr, n);
  if ((arr[getpivot] <= key) && (key <= arr[n - 1]))
  {
    cout << targetEle(arr, getpivot, n - 1, key);
  }
  else
  {
    cout << targetEle(arr, 0, getpivot - 1, key);
  }
}