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
bool validPalindrome(string sen, int len)
{
  string result = "";
  char ch;
  for (int i = 0; i < len; i++)
  {
    if (sen[i] >= 'a' && sen[i] <= 'z')
    {
      ch = sen[i];
    }
    else if (sen[i] >= 'A' && sen[i] <= 'Z')
    {
      ch = sen[i] - 'A' + 'a';
    }
    else if (sen[i] >= '0' && sen[i] <= '9')
    {
      ch = sen[i];
    }
    else
    {
      continue;
    }
    result = result + ch;
  }
  return CheckPalindrome(result);
}
int main()
{

  string s = "A man, a plan, a canal: Panama";

  int len = s.length();
  cout << (validPalindrome(s, len));
  return 0;
}