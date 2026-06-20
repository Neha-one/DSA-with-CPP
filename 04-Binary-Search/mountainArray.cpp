#include <iostream>
using namespace std;

int fn(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return mid;
}
int main()
{
  int arr[] = {0, 1, 2, 0};
  cout << fn(arr, 3);
}