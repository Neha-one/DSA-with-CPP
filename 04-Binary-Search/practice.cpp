#include <iostream>
using namespace std;
int first(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  // int ans = -1;
  while (s < e)
  {
    if (arr[mid] < arr[0])
    {
      // ans = mid;
      e = mid;
    }
    else if (arr[mid] > arr[0])
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return arr[s];
}
int main()
{
  int arr[] = {7, 9, 1, 2, 3};
  int n = sizeof(arr) / sizeof(int);

  // int key = 2;

  cout << first(arr, n) << endl;
}