#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

  int startIndex = 0;
  int endIndex = size - 1;

  // (e + s ) may overflow before division.
  // int midIndex = (startIndex + endIndex) / 2;

  // so we 1st divide then add, it both are same.
  int midIndex = (startIndex + (endIndex - startIndex) / 2);

  while (startIndex <= endIndex)
  {

    if (arr[midIndex] == key)
    {
      return midIndex;
    }
    if (arr[midIndex] < key)
    {
      startIndex = midIndex + 1;
    }
    else
    {
      endIndex = midIndex - 1;
    }
    midIndex = (startIndex + (endIndex - startIndex) / 2);
  }
  return -1;
};

int main()
{

  int evenArr[] = {3, 4, 5, 6, 7, 8};
  int oddArr[] = {22, 33, 44, 45, 55};
  int key1 = 61;
  int key2 = 22;
  int n1 = sizeof(evenArr) / sizeof(int);
  int n2 = sizeof(oddArr) / sizeof(int);

  int printEvenINdex = binarySearch(evenArr, n1, key1);
  int printOddINdex = binarySearch(oddArr, n2, key2);

  cout << "index of " << key1 << " = " << printEvenINdex << endl;
  cout << "index of " << key2 << " = " << printOddINdex;
};