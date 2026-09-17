#include <iostream>
using namespace std;
int SetIthBit(int num, int i)
{
  int bitMask = 1 << i;
  return (num | bitMask);
}
int main()
{
  cout << SetIthBit(6, 4);
  return 0;
}