#include <iostream>
using namespace std;

void findUniqueEl(int arr[], int n)
{
  int temp = arr[0];
  int count = 1;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count == 1)
      cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {6, 6, 4, 11, 3, 9, 3};
  int n = sizeof(arr) / sizeof(int);

  findUniqueEl(arr, n);
}