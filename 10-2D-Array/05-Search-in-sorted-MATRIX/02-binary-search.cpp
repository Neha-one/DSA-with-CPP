#include <iostream>
using namespace std;
void searchKey(int Mat[][4], int n, int m, int key)
{
  for (int i = 0; i < n; i++)
  {
    int s = 0;
    int e = m - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
      if (Mat[i][mid] == key)
      {
        cout << i << " " << mid;
        return;
      }
    else if (Mat[i][mid] < key)
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
      mid = s + (e - s) / 2;
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