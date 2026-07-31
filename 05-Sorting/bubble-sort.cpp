#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        // if nothing will swapp then swapped still be false rather than true;
        swapped = true;
      }
    }
    if(swapped == false){
      break;
    }
  }
}
int main()
{
  int arr[] = {10, 2, 43, 5, 3};
  int n = sizeof(arr) / sizeof(int);
  bubbleSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}