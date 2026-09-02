#include <iostream>
using namespace std;

bool CheckPalindrome(string result)
{
  int s = 0;
  int e = result.length() - 1;
  while (s < e)
  {
    if (result[s] == result[e])
    {
      s++;
      e--;
    }
    else
    {
      return false;
    }
  }
  return true;
}
bool valid(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
  {
    return true;
  }
  return false;
}

char toLowerCase(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
  {
    return ch;
  }
  return ch - 'A' + 'a';
}
bool isPalindrome(string s)
{
  int len = s.length();
  string temp;
  //  Remove special characters
  for (int j = 0; j < len; j++)
  {
    if (valid(s[j]))
    {
      temp.push_back(s[j]);
    }
  }
  // Convert uppercase to lowercase
  for (int j = 0; j < temp.length(); j++)
  {
    temp[j] = toLowerCase(temp[j]);
  }
  return CheckPalindrome(temp);
}
int main()
{

  string s = "A man, a plan, a canal: Panama";

  cout << isPalindrome(s);
  return 0;
}