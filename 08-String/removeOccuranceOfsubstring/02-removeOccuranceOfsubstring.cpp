#include <iostream>
#include <string>
using namespace std;
string removeOccuranceOfSubstring(string s, string sub)
{
  int n = s.length(), m = sub.length();
  // here s.find(sub) < s.length() means if sub doesn't find in s then it will return string::npos which is very large value so we have to check that s.find(sub) smaller that length of s.
  while (s.length() != 0 && s.find(sub) < s.length())
  {
    s.erase(s.find(sub), sub.length());
  }
  return s;
}
int main()
{
  string s = "xxhelloworld";
  cout << removeOccuranceOfSubstring(s, "hello");
  return 0;
}