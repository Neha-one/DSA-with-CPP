#include <iostream>
using namespace std;
int *sum(int x, int y)
{
  int ans = x + y;
  int *res = &ans;
  return res;
  // return &ans;
}
int main()
{
  int *res = sum(2, 3);
  // logically it's wrong.
  cout << *res;
  return 0;
}