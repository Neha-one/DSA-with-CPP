#include <iostream>
#include <string>
using namespace std;

string replaceString(string s)
{
  string temp = "";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    }
    else
    {
      temp.push_back(s[i]);
    }
  }
  //s size will remain same as we are not changing the original string but creating a new string temp
  cout << "temp size after replace" << temp.length() << endl;
  return temp;
}
int main()
{
  string s = "somya is a good girl";
  cout << s.length() << endl;
  cout << replaceString(s) << endl;

  return 0;
}