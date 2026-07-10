#include <iostream>
using namespace std;

int squareRoot()
{

  int key = 118;
  int i = 1;
  while (i < key)
  {
    long long ans = 1LL * i * i;
    if (ans > key)
    {
      return i - 1;
    }
    i++;
  }
}
int main()
{
  cout << squareRoot();
}