#include <iostream>
using namespace std;

int main()
{
  int *ptr;
  int x;
  x = 7;
  cout << &x<<endl;
  ptr = &x;
  cout << ptr; // 7;
  return 0;
}
