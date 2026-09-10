#include <iostream>
using namespace std;
void printArr(int arr[])
{
  int n = sizeof(arr) / sizeof(int);
  cout << n << endl;
  arr[0] = 1000;
}
int main()
{
  int arr[] = {1, 2, 3};
  printArr(arr);
  return 0;
}
