#include <iostream>
using namespace std;

void findUniqueEl(int arr[], int n)
{

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
  cout << endl;
}

int main()
{
  int arr[] = {6, 6, 4, 11, 3, 9, 3};
  int n = sizeof(arr) / sizeof(int);

  findUniqueEl(arr, n);

  //----------method 02 ------------------
  // it works only when only one number is once time and onother is twice times.
  int arr1[] = {6, 6, 4, 11, 11, 3, 3, 5, 5};

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ arr1[i];
  }
  cout << ans;
}