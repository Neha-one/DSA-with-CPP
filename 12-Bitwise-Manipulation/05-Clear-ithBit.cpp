#include <iostream>
using namespace std;
int ClearIthBit(int num, int i)
{
  int bitMask = ~(1 << i);
  return (num & bitMask);
}
int main()
{
  cout << ClearIthBit(6, 2);
  return 0;
}