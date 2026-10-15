#include <iostream>
using namespace std;
int factorial(int x)
{
  if (x == 1 || x == 0)
  {
    return 1;
  }
  return x * factorial(x - 1);
}
int gridWays(int n, int m)
{
  int x = n - 1;
  int y = m - 1;
  int z = n - 1 + m - 1;

  return factorial(z) / (factorial(x) * factorial(y));
}
int main()
{
  int n = 3;
  int m = 4;
  cout << gridWays(n, m);
  return 0;
}