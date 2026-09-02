#include <iostream>
using namespace std;
char toLowerCase(char ch)
{
  if (ch >= 'a' && ch <= 'z')
    return ch;

  else if (ch >= 'A' && ch <= 'Z')
    return ch - 'A' + 'a';

  else
    return ch; // special character / number
}
bool Palindrome(char name[], int n)
{
  int s = 0;
  int e = n - 1;
  while (s <= e)
  {
    if (toLowerCase(name[s]) != toLowerCase(name[e]))
    {
      return 0;
    }
    else
    {
      s++;
      e--;
    }
  }
  return 1;
}

int StringSize(char name[])
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
int main()
{
  char name[10];
  cout << "Enter your name: ";
  cin >> name;
  int len = StringSize(name);
  cout << "Palindrome or Not: " << Palindrome(name, len);
}