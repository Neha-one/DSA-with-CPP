#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
  int i = s;
  int j = mid + 1;
  vector<int> temp;
  while (i <= mid && j <= e)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i++]);
    }
    else
      temp.push_back(arr[j++]);
  }
  while (i <= mid)
  {
    temp.push_back(arr[i++]);
  }
  while (j <= e)
  {
    temp.push_back(arr[j++]);
  }
  // copy temp vector to original vector;
  for (int i = s, x = 0; i <= e; i++)
  {
    arr[i] = temp[x++];
  }
}

void mergeSort(vector<int> &arr, int s, int e)
{
  if (s >= e)
  {
    return;
  }
  int mid = s + (e - s) / 2;
  mergeSort(arr, s, mid);
  mergeSort(arr, mid + 1, e);

  merge(arr, s, e, mid);
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
  int n = arr.size();
  mergeSort(arr, 0, n - 1);
  print(arr);
  return 0;
}