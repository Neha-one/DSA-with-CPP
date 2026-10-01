#include <iostream>
using namespace std;
int fibonacci(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  int n3 = fibonacci(n - 1) + fibonacci(n - 2);
  return n3;
}

int main()
{
  cout << fibonacci(5);
  return 0;
}