#include <iostream>
using namespace std;
bool isSorted(int arr[], int n, int i)
{
  if (i == n - 1)
  {
    return true;
  }
  if (arr[i] > arr[i + 1])
  {
    return false;
  }
  return isSorted(arr, n, i + 1);
}
int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 2, 5};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  cout << isSorted(arr1, n, 0) << endl;
  cout << isSorted(arr2, m, 0);
  return 0;
}