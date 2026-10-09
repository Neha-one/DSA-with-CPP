#include <iostream>
#include <vector>
#include <string>
using namespace std;

void merge(vector<string> &arr, int s, int e, int mid)
{
  int i = s;
  int j = mid + 1;
  vector<string> temp;
  while (i <= mid && j <= e)
  {
    if (arr[i] < arr[j])
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
  // copy
  for (int i = s, x = 0; i <= e; i++)
  {
    arr[i] = temp[x++];
  }
}

void mergeSort(vector<string> &arr, int s, int e)
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

void print(vector<string> &arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  vector<string> arr = {"sun", "earth", "mars", "mercury"};
  mergeSort(arr, 0, 3);
  print(arr, 4);
  return 0;
}
