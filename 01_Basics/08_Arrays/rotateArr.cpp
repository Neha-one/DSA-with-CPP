#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
//-----approach 01 - with space complexity : O(n);
void rightRotate(int arr[], int n, int k)
{
  int temp[n];
  k = k % n;
  for (int i = 0; i < n; i++)
  {
    temp[(i + k) % n] = arr[i];
  }
  printArr(temp, n);
}
//-----approach 02 - with space complexity : O(1);
void rightRotate2(int arr[], int n, int k)
{
  k = k % n;
  reverse(arr, arr + n);
  reverse(arr, arr + k);
  reverse(arr + k, arr + n);
  printArr(arr, n);
}
//-----method 01----------
void leftRotate(int arr[], int n, int k)
{
  int temp[n];
  k = k % n;
  int d = n - k;
  for (int i = 0; i < n; i++)
  {
    temp[(i + d) % n] = arr[i];
  }
  printArr(temp, n);
}
//------we can solve it using sc : O(1);
void leftRotate2(int arr[], int n, int k)
{
  int temp[n];
  k = k % n;
  for (int i = 0; i < n; i++)
  {
    temp[(i - k + n) % n] = arr[i];
  }
  printArr(temp, n);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int k = 2;
  int n = sizeof(arr) / sizeof(int);
  cout << "right rotation of array: " << " ";
  rightRotate(arr, n, k);
  cout << endl;
  rightRotate2(arr, n, k);
  cout << endl;
  int arr2[] = {1, 2, 3, 4, 5};

  cout << "left rotation of array: " << " ";
  leftRotate(arr2, n, k);
  cout << endl;
  leftRotate2(arr2, n, k);

  return 0;
}