#include <iostream>
#include <string>
using namespace std;
string removeOccuranceOfSubstring(string s, string sub)
{
  int n = s.length(), m = sub.length();

  string newStr = "";
  if (sub.empty())
    return s;
  for (int i = 0; i < n; i++)
  {
    string temp = "";
    if (i + m > n)
    {
      break;
    }
    for (int j = 0; j < m; j++)
    {
      temp.push_back(s[i + j]);
    }

    if (temp == sub)
    {
      i += m;

      for (int j = i; j < n; j++)
      {
        newStr.push_back(s[j]);
      }
      i = -1;
      s = newStr;
      newStr = "";
    }
    else
    {
      newStr.push_back(s[i]);
    }
  }
  return s;
}
int main()
{
  string s = "xxhelloworld";
  cout << removeOccuranceOfSubstring(s, "hello");
  return 0;
}