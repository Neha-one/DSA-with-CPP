#include <iostream>
using namespace std;
int Decimal(string num)
{
  int decimal = 0, power = 1;
  for (int i = num.length() - 1; i >= 0; i--)
  {
    if (num[i] != '0')
    {
      decimal += power;
    }
    power *= 2;
  }
  return decimal;
}
int main()
{
  string num = "1010";
  cout << Decimal(num);
  return 0;
}