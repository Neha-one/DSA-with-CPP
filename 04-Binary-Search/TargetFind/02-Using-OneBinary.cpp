#include <iostream>
using namespace std;

int targetElement(int arr[], int n, int key)
{

  int s = 0;
  int e = n - 1;

  int mid = (s + (e - s) / 2);

  while (s <= e)
  {

    if (arr[mid] == key)
    {
      return mid;
    }

    if (arr[mid] >= arr[0])
    {
      if (arr[0] <= key && key < arr[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else
    {
      if (arr[mid] < key && key <= arr[n - 1])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
    mid = (s + (e - s) / 2);
  }
  return -1;
};

int main()
{
  int arr[] = {6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int key = 8;

  int ans = targetElement(arr, n, key);
  if (ans == -1)
  {
    cout << "not exist inside the array" << endl;
  }
  else
  {
    cout << "found on index " << ans;
  }
}