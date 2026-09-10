#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int *ptr = &n;

  cout << ptr << endl;
  ptr += 3;
  cout << (ptr - 3) << endl;
  return 0;
}
