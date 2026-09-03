#include <iostream>
using namespace std;
char tolwerCase(char ch)
{
  if (ch >= 'a' && ch <= 'z')
    return ch;

  else if (ch >= 'A' && ch <= 'Z')
    return ch - 'A' + 'a';
}
void Print(char s, int n)
{
  cout << "your max occuring character is " << s << " and " << n << " times";
}
void MaxCheck(string str, int len)
{
  int temp = 0;
  char key;
  for (int i = 0; i < len; i++)
  {
    str[i] = tolwerCase(str[i]);
  }
  for (int i = 0; i < str.length(); i++)
  {
    int count = 0;
    for (int j = 0; j < str.length(); j++)
    {
      if (str[i] == str[j])
      {
        count++;
      }
    }
    if (temp < count)
    {
      key = str[i];
      temp = count;
    }
  }
  Print(key, temp);
}
int main()
{
  string str = "soOn";
  int len = str.length();
  MaxCheck(str, len);
  return 0;
}