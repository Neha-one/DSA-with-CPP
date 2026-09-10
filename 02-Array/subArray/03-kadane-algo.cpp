#include <iostream>
#include <climits>
using namespace std;
int printSubArr(int arr[], int n)
{
  int maxSum = INT_MIN;
  int Currsum = 0;
  // Positive sum ko carry karo, negative sum ko throw karo, aur har step par maximum save karo.
  for (int i = 0; i < n; i++)
  {
    Currsum += arr[i];
    maxSum = max(maxSum, Currsum);
    if (Currsum < 0)
    {
      Currsum = 0;
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
