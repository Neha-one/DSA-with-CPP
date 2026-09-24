#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int Binary(int num)
{
  int temp = 1, binary = 0;
  while (num > 0)
  {
    int remainder = num % 2;
    binary += remainder * temp;
    num /= 2;
    temp *= 10;
  }
  return binary;
}
string BinaryUsingStr(int num)
{
  string binary = "";

  while (num > 0)
  {
    int rem = num % 2;
    if (rem == 0)
    {
      binary += '0';
    }
    else
    {
      binary += '1';
    }
    num /= 2;
  }
  reverse(binary.begin(), binary.end());
  // reverse(binary.begin(), binary.end());
  return binary;
}
int main()
{
  int num = 8;
  cout << Binary(num) << endl;
  cout << BinaryUsingStr(num);
  return 0;
}