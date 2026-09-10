#include <iostream>
using namespace std;
void changeA(int x)
{
  x = 10;
  cout << x << endl;
}
int main()
{
  int a = 20;
  changeA(a);
  cout << a << endl;
  return 0;
}