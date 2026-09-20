#include <iostream>
using namespace std;
void RichestCus(int arr[][2], int n, int m)
{
  int MaxWealth = 0;

  for (int i = 0; i < n; i++)
  {
    int CurrWealth = 0;
    for (int j = 0; j < m; j++)
    {
      CurrWealth += arr[i][j];
    }
    if (CurrWealth > MaxWealth)
    {
      MaxWealth = CurrWealth;
    }
  }
  cout << MaxWealth << endl;
  return;
}
int main()
{
  int arr[3][2] = {{1, 5}, {5, 3}, {3, 3}};
  RichestCus(arr, 3, 2);
  return 0;
}