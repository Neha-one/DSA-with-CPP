#include <iostream>
using namespace std;

int print()
{
}
int main()
{
  int s = 1;
  int e = 10;
  int ans;
  while (s <= e)
  {
    long long mid = s + (e - s) / 2;
    if (mid * mid == 18)
    {
      cout << mid;
    }
    else if (mid * mid < 18)
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  cout << ans;
}