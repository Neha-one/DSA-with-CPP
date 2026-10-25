#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isDuplicateParantheses(string str)
{
  stack<char> s;
  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];
    if (ch != ')')
    { // non-closing
      s.push(ch);
    }
    else // closing
    {
      if (s.top() == '(')
      {
        return true;
      }
      else
      {
        while (s.top() != '(')
        {
          s.pop();
        }
        s.pop();
      }
    }
  }
  return false;
}
int main()
{
  //--------GIVEN : VALID PARANTHESES GIVEN .
  string str = "((a+b))";        // true : duplicate () exists;
  string str2 = "((a+b)+(a-b))"; // false : duplicate not exists;
  cout << isDuplicateParantheses(str);
  cout << endl;
  cout << isDuplicateParantheses(str2);
  return 0;
}