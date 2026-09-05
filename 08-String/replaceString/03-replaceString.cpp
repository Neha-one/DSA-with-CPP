#include <iostream>
#include <string>
using namespace std;

string replaceString(string &s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      s.replace(i, 1, "@20");
      i += 2;  
    }
  }
  return s;
}

int main()
{
  string s = "somya is a good girl";

  cout << "original string length before replace ' ' to @40 : " << s.length() << endl;
  cout << replaceString(s) << endl;
  cout << "original string length after replace ' ' to @40: " << s.length() << endl;
  return 0;
}