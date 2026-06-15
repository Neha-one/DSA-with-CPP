#include <iostream>
using namespace std;
int sumOfArr(int arr[], int sizeofArr)
{
  int sum = 0;

  for (int i = 0; i < 6; i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}
int main()
{
  int arr[] = {3, 4, 7, 6, 9, 1};
  int sizeOfarr = sizeof(arr) / sizeof(int);
  cout << "sum of elements of array is: " << sumOfArr(arr, sizeOfarr);
}