#include <iostream>
using namespace std;
void FastExponential(int num, int power)
{
  int ans = 1;
  while (power > 0)
  {
    int lastBit = power & 1;
    if (lastBit)
    {
      ans = ans * num;
    }
    num = num * num;
    power = power >> 1;
  }
  cout << ans;
  return;
}
int main() 
{
  int num = 3;
  int power = 5;
  FastExponential(num, power);
  return 0;
}