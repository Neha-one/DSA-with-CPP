#include <iostream>
using namespace std;
void searchKey1(int Mat[][4], int n, int m, int key)
{

  int i = 0;
  int j = m - 1;
  while (i < n && j >= 0)
  {
    if (Mat[i][j] == key)
    {
      cout << i << " " << j << endl;
      return;
    }
    if (Mat[i][j] < key)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
}
void searchKey2(int Mat[][4], int n, int m, int key)
{

  int i = n - 1;
  int j = 0;
  while (i >= 0 && j < m)
  {
    if (Mat[i][j] == key)
    {
      cout << i << " " << j << endl;
      return;
    }
    else if (Mat[i][j] < key)
    {
      j++;
    }
    else
    {
      i--;
    }
  }
}

int main()
{
  int Mat[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};
  int n = 3, m = 4;
  int key = 9;
  cout << "starting from last column of first row means i=0,j=m-1" << endl;
  searchKey1(Mat, n, m, key);
  cout << "starting from last row of first column means i=n-1,j=0" << endl;
  searchKey2(Mat, n, m, key);

  return 0;
}