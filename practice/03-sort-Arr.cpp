#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && temp > arr[j])
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
  printArr(arr, n);
}
void countingSort(int arr[], int n)
{
  int maxVal = INT16_MIN;
  for (int i = 0; i < n; i++)
  {
    maxVal = max(maxVal, arr[i]);
  }
  int freq[maxVal + 1] = {0};
  for (int i = 0; i < n; i++)
  {
    int idx = arr[i];
    freq[idx]++;
  }
  int j = n-1;
  for (int i = 0; i <= maxVal; i++)
  {
    while (freq[i] != 0)
    {
      arr[j] = i;
      freq[i]--;
      j--;
    }
  }
  printArr(arr, n);
}
void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int tempIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[tempIdx] < arr[j])
      {
        tempIdx = j;
      }
    }
    swap(arr[i], arr[tempIdx]);
  }
  printArr(arr, n);
}
void bubbleSort(int arr[], int n)
{
  bool isSwapped = false;
  for (int i = 0; i < n - 1; i++)
  {
    isSwapped = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        isSwapped = true;
      }
    }
    if (!isSwapped)
    {
      break;
    }
  }
  printArr(arr, n);
}
int main()
{
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);
  cout << "Bubble sort: ";
  bubbleSort(arr, n);
  cout << endl;
  cout << "Selection sort: ";
  selectionSort(arr, n);
  cout << endl;
  cout << "Counting sort: ";
  countingSort(arr, n);
  cout << endl;
  cout << "Insertion sort: ";
  insertionSort(arr, n);
  return 0;
}