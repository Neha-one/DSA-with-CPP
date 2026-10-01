#include <iostream>
using namespace std;
int power(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }
  return n * power(n, p - 1);
}
int power2(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }
  int lastbit = p & 1;
  if (lastbit)
  {
    return n * power2(n * n, p >> 1);
  }
  return power2(n * n, p >> 1);
}
int power3(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }
  if (p % 2 == 0)
  {
    return power3(n, p / 2) * power3(n, p / 2);
  }
  else
  {
    return n * power3(n, p / 2) * power3(n, p / 2);
  }
}
int power4(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }
  int halfpower = power4(n, p / 2);
  int square = halfpower * halfpower;
  if (p % 2 != 0)
  {
    return n * square;
  }
  return square;
}
int main()
{
  int base, exponent;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent: ";
  cin >> exponent;

  // cout << power(base, exponent) << endl;
  // cout << power2(base, exponent);
  // cout << power3(base, exponent);
  cout << power4(base, exponent);
  return 0;
}