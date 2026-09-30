#include <iostream>
#include <string>
using namespace std;
string mergeAlternately(string word1, string word2)
{
  string newstr = "";
  int n = word1.length() - 1;
  int m = word2.length() - 1;
  int i = 0;
  while (i <= n && i <= m)
  {
    newstr += word1[i];
    newstr += word2[i];
    i++;
  }
  if (i <= n)
  {
    newstr += word1[i];
    i++;
  }
  if (i <= m)
  {
    newstr += word2[i];
    i++;
  }
  return newstr;
}
int main()
{
  string word1 = "ab";
  string word2 = "pqrs";
  cout << mergeAlternately(word1, word2);
  return 0;
}