#include <iostream>
using namespace std;
//------method 01-----for small n-----------using loop
int countGoodNum(int n, int count)
{
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      count *= 5;
    }
    else
      count *= 4;
  }
  return count;
}

//------method 02-----for small n-----------using recursion
int countGoodNum1(int n, int i, int count)
{
  if (i == n)
  {
    return count;
  }
  if (i % 2 == 0)
  {
    return countGoodNum1(n, i + 1, count * 5);
  }
  else
    return countGoodNum1(n, i + 1, count * 4);
}
//---------method 03------for LC and for large n-----------
long long power(long long x, long long p, long long ans)
{
  if (p == 0)
    return ans;

  if (p & 1)
  {
    ans = (ans * x) % 1000000007;
  }

  x = (x * x) % 1000000007;

  return power(x, p >> 1, ans);
}

int countGoodNum2(long long n)
{
  long long even = (n + 1) / 2;
  long long odd = n / 2;

  return (power(5, even, 1) * power(4, odd, 1)) % 1000000007;
}
int main()
{
  cout << countGoodNum(1, 1) << endl;
  cout << countGoodNum1(2, 0, 1) << endl;
  cout << countGoodNum2(1);
  return 0;
}