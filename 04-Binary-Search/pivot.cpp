#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + (e - s) / 2);
  int ans;
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
  return arr[s];
  //--or--
  // return e;
}
int main()
{
  int arr[] = {6, 7, 8, 9,0, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int print = pivot(arr, n);
  cout << print;
}