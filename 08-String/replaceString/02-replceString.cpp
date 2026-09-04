#include <iostream>
#include <string>
using namespace std;

string replaceString(string &s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      s[i] = '@'; // only one character can be replaced
    }
  }

  return s;
}

int main()
{
  string s = "somya is a good girl";
  cout << s.length() << endl;
  cout << replaceString(s) << endl;
  cout << s.length() << endl;

  return 0;
}