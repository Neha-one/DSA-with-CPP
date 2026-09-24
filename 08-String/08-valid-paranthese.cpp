#include <iostream>
#include <string>
using namespace std;
bool isValid(string str)
{
  int n = str.length();
  int e = n / 2;
  int s = e - 1;
  if (n % 2 != 0)
  {
    return false;
  }
  while (s >= 0 && e < n)
  {
    char ch = str[s];
    if (ch == '(' || ch == '{' || ch == '[')
    {
      s--;
      e++;
    }
    else
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string str = "({})";
  cout << isValid(str);
  return 0;
}