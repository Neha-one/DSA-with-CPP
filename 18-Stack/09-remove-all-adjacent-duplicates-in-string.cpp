#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
string removeAdjacentElement(string str)
{

  stack<char> s;
  for (int i = 0; i < str.length(); i++)
  {
    if (s.empty())
    {
      s.push(str[i]);
    }
    else
    {
      if (s.top() == str[i])
      {
        s.pop();
      }
      else
      {
        s.push(str[i]);
      }
    }
  }
  string ans;
  while (!s.empty())
  {
    char top = s.top();
    ans = ans + top;
    s.pop();
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main()
{
  string str = "abbaca";
  cout << removeAdjacentElement(str);
  return 0;
}