#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void countSort(int arr[], int n)
{
  int maxVal = INT16_MIN;
  for (int i = 0; i < n; i++)
  {
    maxVal = max(maxVal, arr[i]);
  }
  int freq[maxVal + 1] = {0};
  for (int i = 0; i < n; i++)
  {
    int idx = arr[i];
    freq[idx]++;
  }
  int j = 0;
  for (int i = 0; i <= maxVal; i++)
  {
    while (freq[i] != 0)
    {
      arr[j] = i;
      freq[i]--;
      j++;
    }
  }
  cout << "counting sort: ";
  printArr(arr, n);
}
int main()
{
  int arr[] = {1, 4, 1, 3, 2, 4, 3, 0, 0, 0, 7};
  int n = sizeof(arr) / sizeof(int);
  countSort(arr, n);
  return 0;
}