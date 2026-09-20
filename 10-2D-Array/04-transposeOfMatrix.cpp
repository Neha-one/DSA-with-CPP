#include <iostream>
using namespace std;
void TransposeOfMatrix(int arr[][2], int n, int m)
{
  int NewArr[m][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      NewArr[j][i] = arr[i][j];
    }
  }
  for (int i = 0; i < m; i++)  
  {
    for (int j = 0; j < n; j++)
    {
      cout << NewArr[i][j] << " ";
    }
    cout << endl;
  }
}
int main()
{
  int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  TransposeOfMatrix(arr, 3, 2);
  return 0;
}