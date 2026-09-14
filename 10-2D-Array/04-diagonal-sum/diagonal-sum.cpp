#include <iostream>
using namespace std;
int diagonalSum2(int arr[][4], int n, int m)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int j = m - i - 1;
    sum += arr[i][i];
    if (i != j)
    {
      sum += arr[i][j];
    }
  }
  return sum;
}

int diagonalSum(int arr[][4], int n, int m)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i][i];
  }
  for (int i = 0; i < n; i++)
  {
    int j = m - i - 1;
    if (i != j)
    {
      sum += arr[i][j];
    }
  }
  return sum;
}
int main()
{
  int arr[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
  int n = 4, m = 4;
  cout << diagonalSum(arr, n, m) << endl;
  cout << diagonalSum2(arr, n, m);

  return 0;
}