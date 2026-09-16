#include <iostream>
using namespace std;

int pivot(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  while (s <= e)
  {
    int mid = (s + (e - s) / 2);
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] >= arr[0])
    {
      if ((key >= arr[s]) && key <= arr[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else
    {
      if ((key >= arr[mid + 1]) && key <= arr[e])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
  }
  return s;
};

int main()
{
  int arr[] = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int key = 0;
  int getpivot = pivot(arr, n, key);
  cout << getpivot;
}