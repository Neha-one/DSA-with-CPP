#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
  int i = s - 1;
  int pivot = arr[e];
  for (int j = s; j < e; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  i++;
  swap(arr[i], arr[e]);
  return i;
}
void quickSort(vector<int> &arr, int s, int e)
{
  if (s >= e)
    return;

  int pivotIdx = partition(arr, s, e);
  quickSort(arr, s, pivotIdx - 1);
  quickSort(arr, pivotIdx + 1, e);
}
void print(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  vector<int> arr = {6, 3, 7, 5, 2, 4};
  int n = arr.size() - 1;
  quickSort(arr, 0, n);
  print(arr);
  return 0;
}