#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string s = "abc";
  int n = s.length();
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  int i = 1;
  int j = 0;

  while (i <= fact)
  {
    reverse(s.begin() + (j % n), s.begin() + (i % n) + 1);
    if (i > j)
    {
      swap(i, j);
    }
    j++;
    i++;
    cout << s << endl;
  }
  return 0;
}