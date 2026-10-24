#include <iostream>
#include <stack>
#include <string>
using namespace std;
string reverseString(string str)
{
  stack<char> s;

  for (int i = 0; i < str.length(); i++)
  {
    s.push(str[i]);
  }
  string ans;
  while (!s.empty())
  {
    ans += s.top();
    s.pop();
  }
  return ans;
}
int main()
{
  string str = "neha";
  cout << "reverse = " << reverseString(str);
  return 0;
}