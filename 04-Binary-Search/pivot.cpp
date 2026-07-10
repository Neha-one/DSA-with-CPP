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
  return arr[s];
  //--or--
  // return e;
}
int main()
{
  int arr[] = {2, 2, 2,0,1, 2};
  int n = sizeof(arr) / sizeof(int);
  int print = pivot(arr, n);
  cout << print;
}