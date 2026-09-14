#include <iostream>
using namespace std;
void searchKey(int Mat[][4], int n, int m, int key)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (Mat[i][j] == key)
      {
        cout << i << " " << j;
      }
    }
  }
}

int main()
{
  int Mat[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};
  int n = 3, m = 4;
  int key = 11;
  searchKey(Mat, n, m, key);
  return 0;
}