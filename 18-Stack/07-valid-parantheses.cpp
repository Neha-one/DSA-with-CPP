#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string str)
{
  stack<char> s;
  if (str.length() % 2 != 0)
  {
    return false;
  }
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[')
    {
      s.push(str[i]);
    }
    else
    {
      if (s.empty())
      {
        return false;
      }
      else
      {
        char top = s.top();
        char ch = str[i];
        if ((top == '(' && ch == ')') ||
            (top == '{' && ch == '}') ||
            (top == '[' && ch == ']'))
        {
          s.pop();
        }
        else
        {
          return false;
        }
      }
    }
  }
  return s.empty();
}
int main()
{
  string str1 = "[{()()}]"; // valid parantheses
  string str2 = "([{)}";    // invalid parantheses
  cout << isValid(str1);
  cout << endl;
  cout << isValid(str2);
  return 0;
}