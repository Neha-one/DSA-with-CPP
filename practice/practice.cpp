#include <iostream>
using namespace std;
void NumOfSeven(int arr[][3])
{
  int count = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] == 7)
      {
        count++;
      }
    }
  }
  cout << count<<endl;
  return;
}
void sumOfRowTwo(int arr[][3], int m)
{
  int sumOfRow = 0;
  for (int i = 0; i < 3; i++)
  {
    sumOfRow += arr[1][i];
  }
  cout << sumOfRow << endl;
  return;
}
int main()
{
  int arr[3][3] = {{1, 7, 6}, {7, 7, 2}, {6, 4, 7}};
  NumOfSeven(arr);
  sumOfRowTwo(arr, 3);
  return 0;
}