#include <iostream>
using namespace std;

int main()
{
  cout << "enter size: ";
  int size;
  cin >> size;

  //----dynamic array-----
  int *arr = new int[size];

  int x = 0;
  for (int i = 0; i < size;i++){
    arr[i] = x;
    cout << arr[i] << ",";
    x++;
  }
  cout << endl;
  return 0;
}