#include <iostream>
using namespace std;
int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
int Catalan(int n)
{
  int combination = factorial(2 * n) / (factorial(n) * factorial(2 * n - n));
  int result = combination / (n + 1);
  return result;
}
int main()
{
  cout << Catalan(2);
  return 0;
}