#include <iostream>
using namespace std;
void reverseArr(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int temp;
  while (start <= end)
  {
    //------method 01 by simple using swap built-in function :--------
    // swap(arr[start], arr[end]);

    //-----by full method 02---------
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  reverseArr(arr, n);
  printArr(arr, n);

  return 0;
}