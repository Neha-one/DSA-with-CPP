#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  int key = 5;
  int s = 0;
  int e = n - 1;
  int mid = (s + (e - s) / 2);
  while (s <= e)
  {
    if (arr[mid] == key)
    {
      cout << mid;
      return 0;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = (s + (e - s) / 2);
  }
}