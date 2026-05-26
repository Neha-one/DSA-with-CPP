#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int size)
{
  cout << "printing the array" << endl;
  // print the array
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "printing Done!" << endl;
};

int main()
{
  // int numArr[5];
  // cout << numArr[0] << endl;
  // cout << numArr[1] << endl;
  // cout << numArr[2] << endl;
  // cout << numArr[3] << endl;
  // cout << numArr[4] << endl;

  // initialising some indexes location with 1 ,3 means index 0 and 1 = 1 ,3.
  int Narr[10] = {1, 3};

  int ArrSize1 = sizeof(Narr) / sizeof(int);

  printArray(Narr, ArrSize1);

  // initialsing all locations with 1 and 3.
  int AllLocationArr[10];

  int ArrSize2 = sizeof(AllLocationArr) / sizeof(int);

  fill(AllLocationArr, AllLocationArr + 10, 3);

  printArray(AllLocationArr, ArrSize2);

  return 0;
};