#include <iostream>
using namespace std;

int main()
{
  int a = 150;

  int *ptr = &a;
  cout << &a << " = " << ptr << endl;

  // pointer to pointer
  int **pptr = &ptr;
  cout << &ptr << " = " << pptr << endl;

  // Dereference operator--
  cout << a << " = " << *ptr << endl;

  *ptr = 30;
  cout << "value change via ptr " << a << endl;

  // NULL pointer ---
  int *nullPtr;
  cout << nullPtr << endl; // => it show 0x61ff54 but there is no value assing in nullPtr => solution => NULL pointer.

  int *nullptr2 = NULL;
  cout << nullptr2 << endl; // now it print 0.

  // // cout << *nullptr2; // it is segmentaion error

  // referece--
  int num = 10;
  int &number = num;

  number = 34;
  cout << num; // 34

  return 0;
}
