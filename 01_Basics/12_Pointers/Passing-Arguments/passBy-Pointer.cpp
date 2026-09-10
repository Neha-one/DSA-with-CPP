#include <iostream>
using namespace std;
void changeA(int *ptr)
{
  *ptr = 29;
  cout << *ptr << endl;
}
int main()
{
  int a = 10;
  changeA(&a);
  cout << a << endl;
  return 0;
}