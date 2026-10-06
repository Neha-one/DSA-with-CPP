#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int mid, int key)
{
  if (s > e)
  {
    return -1;
  }
  if (arr[mid] == key)
  {
    return mid;
  }
  else if (arr[mid] > key)
  {
    return binarySearch(arr, s, mid - 1, s + (e - s) / 2, key);
  }
  else
  {
    return binarySearch(arr, mid + 1, e, s + (e - s) / 2, key);
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int s = 0;
  int e = sizeof(arr) / sizeof(arr[0]);
  int mid = s + (e - s) / 2;
  cout << binarySearch(arr, 0, 7, mid, 7);
  return 0;
}