#include <iostream>
using namespace std;
int pivot(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + (e - s) / 2);
  int ans;
  while (s < e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      return 0;
    }
    else if (arr[0] > key)
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = (s + (e - s) / 2);
  }
  return ans;
  //--or--
  // return e;
}
int main()
{
  int arr[] = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int print = pivot(arr, n, 7);
  cout << print;
}