#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl;
}
int main()
{
  int arr[] = {1, 4, 42, 7, 3};

  int n = sizeof(arr) / sizeof(int);

  // ascending order(default)---
  sort(arr, arr + n);
  cout << "ascending order:-" << " ";
  printArr(arr, n);

  // descending order(default)---
  sort(arr, arr + n, greater<int>());
  cout << "descending order:-" << " ";
  printArr(arr, n);
  return 0;
}