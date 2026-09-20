#include <iostream>
using namespace std;
void CountSetBits(int num)
{
  int count = 0;
  while (num > 0)
  {
    count += (num & 1);
    num = num >> 1;
  }
  cout << count << endl;
}
int main()
{
  int num = 16;
  CountSetBits(num);
  return 0;
}