#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      end = mid - 1;
      ans = mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int LastOccurrence(int arr[], int n, int key)
{
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  int ans;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      start = mid + 1;
      ans = mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
int main()
{
  int arr[] = {0, 1, 1, 2, 2, 2, 2, 2, 4};
  int n = sizeof(arr) / sizeof(int);
  int key;
  cout << "enter your key : ";
  cin >> key;
  // cout << "first occurrence of " << key << " = " << firstOccurrence(arr, n, key) << endl;
  // cout << "Last occurrence of " << key << " = " << LastOccurrence(arr, n, key);

  //pair use to store two value together ;
  pair<int, int> p;
  p.first = firstOccurrence(arr, n, key);
  p.second = LastOccurrence(arr, n, key);
  cout << "first occurrence of " << key << " = " << p.first << endl;
  cout << "Last occurrence of " << key << " = " << p.second;
}