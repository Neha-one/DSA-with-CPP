#include <iostream>
using namespace std;
void countSort(int arr[], int n)
{
  int maxVal = INT16_MIN;
  int minVal = INT16_MAX;
  for (int i = 0; i < n; i++)
  {
    maxVal = max(maxVal, arr[i]);
    minVal = min(minVal, arr[i]);
  }
  int freq[maxVal] = {0};
  for (int i = 0; i < n; i++)
  {
    int idx = arr[i];
    freq[idx]++;
  }
  for (int i = 0; i <= maxVal; i++)
  {
    while ()
  }
}
int main()
{
  int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
  int n = sizeof(arr) / sizeof(int);
  countSort(arr, n);
  return 0;
}