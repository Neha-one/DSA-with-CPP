#include <iostream>
using namespace std;
void getmax(int arr[], int arrSize, int temp)
{
  int i = 0;

  while (i < arrSize)
  {
    if (arr[i] > temp)
    {
      temp = arr[i];
    }
    i++;
  };
  cout << "max is : " << temp << endl;
}
void getmin(int arr[], int arrSize, int temp)
{
  int i = 0;
  for (int i = 0; i < arrSize; i++)
  {
    temp = min(temp, arr[i]); // one line instead of if statement.
    // if (arr[i] < temp)
    // {
    //   temp = arr[i];
    // }
  }

  cout << "min is : " << temp << endl;
}
int main()
{

  int Narr[] = {23, 4, 2, -56, 3, 9};
  int NarrSize = sizeof(Narr) / sizeof(int);

  // ----------1st method--------------
  int temp = Narr[0];
  getmax(Narr, NarrSize, temp);
  getmin(Narr, NarrSize, temp);

  // ----------2nd method--------------
  int max = INT16_MIN;
  int min = INT16_MAX;
  getmax(Narr, NarrSize, max);
  getmin(Narr, NarrSize, min);
};