#include <iostream>
using namespace std;
void spiralMatrix(int Mat[][4], int n, int m)
{
  int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;

  while (srow <= erow && scol <= ecol)
  {
    //------TOP--------
    for (int j = scol; j <= ecol; j++)
    {
      cout << Mat[srow][j] << " ";
    }

    //------RIGHT--------
    for (int i = srow + 1; i <= erow; i++)
    {
      cout << Mat[i][ecol] << " ";
    }
    //------BUTTOM--------
    for (int j = ecol - 1; j >= scol; j--)
    {
      if (srow == erow)
      {
        break;
      }
      cout << Mat[erow][j] << " ";
    }
    //------LEFT--------
    for (int i = erow - 1; i >= srow + 1; i--)
    {
      if (scol == ecol)
      {
        break;
      }
      cout << Mat[i][scol] << " ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
  }
}
int main()
{
  int Mat[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};
  int n = 3, m = 4;
  // cout << "enter your matrix: ";
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     cin >> Mat[i][j];
  //   }
  // }
  spiralMatrix(Mat, n, m);
  return 0;
}