#include <iostream>
using namespace std;
int countGoodNum(int n, int i, int count)
{
  if (to_string(i).length() > n)
  {
    return count;
  }
  if (i & 1)
  {
    return countGoodNum(n, i + 1, count);
  }
  return countGoodNum(n, i + 1, count + 1);
}
int main()
{
  cout << countGoodNum(2, 0, 0);
  return 0;
}