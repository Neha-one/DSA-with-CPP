#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int *ptr = &a;
  int *ptr2 = ptr + 6;
  cout << ptr << endl;
  cout << ptr2 << endl;

  cout << ptr2 - ptr << endl;

  cout << endl;
  cout << "array operation:--" << endl;
  int arr[] = {1, 2, 3, 4, 5, 6};
  int *arrptr = arr;
  int *arrptr2 = arrptr + 3;
  cout << *arrptr << endl;
  cout << *arrptr2 << endl;

  cout << arrptr2 - arrptr << endl;
  return 0;
}
