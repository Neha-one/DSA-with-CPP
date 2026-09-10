#include <iostream>
using namespace std;
void changeA(int &a)
{
  a = 29;
  cout << a << endl;
}
int main()
{
  int b = 10;
  changeA(b);
  cout << b << endl;
  return 0;
}