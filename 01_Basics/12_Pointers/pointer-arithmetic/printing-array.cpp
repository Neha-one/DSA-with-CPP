#include <iostream>
using namespace std;
void printArr(int *ptr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << *(ptr + i) << " ";
  }
}
int main()
{
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(int);
  printArr(arr, n);
  return 0;
}