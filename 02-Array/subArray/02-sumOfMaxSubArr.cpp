#include <iostream>
#include <climits>
using namespace std;
int printSubArr(int arr[], int n)
{
  int maxSum = INT_MIN;
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      int sum = 0;

      for (int i = start; i <= end; i++)
      {
        sum += arr[i];
      }
      // if (sum > max)
      // {
      //   max = sum;
      // }
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}
int main()
{
  // int arr[] = {1, 2, 3, 4, 5};
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << printSubArr(arr, n);
  return 0;
}