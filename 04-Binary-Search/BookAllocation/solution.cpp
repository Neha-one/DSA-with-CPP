#include <iostream>
using namespace std;

int bookAllocation(int arr[])
{
  int s = 0;
  int e = 100;
  int sum = 0;
  int ans;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    for (int i = 0; i < 4; i++)
    {
      sum = sum + arr[i];

      if (sum <= mid)
      {
        // i++;
        s = mid + 1;
      }
      else if (sum > mid)
      {
        ans = mid;
        e = mid - 1;
      }
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int arr[] = {10, 20, 30, 40};

  cout << bookAllocation(arr);
  return 0;
}