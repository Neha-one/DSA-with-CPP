#include <iostream>
using namespace std;

int minElement(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + (e - s) / 2);
  while (s < e)
  {
    if (arr[mid] > arr[e])
    {
      s = mid + 1;
    }
    else if (arr[mid] < arr[e])
    {
      e = mid;
    }
    else
    {
      e--;
    }
    mid = (s + (e - s) / 2);
  }
  return arr[s];
  //--or--
  // return e;
}
int main()
{
  int arr[] = {10, 1, 10, 10, 10};
  int n = sizeof(arr) / sizeof(int);
  int print = minElement(arr, n);
  cout << print;
}