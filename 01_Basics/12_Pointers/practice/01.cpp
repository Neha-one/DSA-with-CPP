//Ques:- what will ptr2 point .
#include <iostream>
using namespace std;

int main()
{
  int x = 5, y = 10;
  int *ptr1 = &x, *ptr2 = &y;
  ptr2 = ptr1;
  cout << &x << " = " << ptr1 << " = " << ptr2 << endl;
  cout << x << " = " << *ptr1 << " = " << *ptr2;
  return 0;
}