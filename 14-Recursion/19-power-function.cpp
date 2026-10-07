#include <iostream>
using namespace std;

double powerFun(double x, int p, double ans)
{
  if (p < 0)
  {
    p = -p;
    x = 1 / x;
  }
  if (p == 0)
  {
    return ans;
  }
  if (p & 1)
  {
    return powerFun(x * x, p >> 1, ans * x);
  }
  else
    return powerFun(x * x, p >> 1, ans);
}
double mypow(double x, int p)
{
  if (p < 0)
  {
    p = -p;
    x = 1 / x;
  }
  if (p == 0)
  {
    return 1;
  }
  double temp = mypow(x, p - 1);
  return temp * x;
}
int main()
{
  // int x;
  // cout << "enter x";
  // cin >> x;
  // int n;
  // cout << "enter power";
  // cin >> n;
  // if (x == 0 || x == 1)
  // {
  //   cout << x;
  //   return x;
  // }
  // cout << powerFun(x, n, 1) << endl;
  // cout << mypow(x, n);
  int a = -99;
  int val = -a;
  cout << val;
  return 0;
}
