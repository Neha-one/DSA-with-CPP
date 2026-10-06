#include <iostream>
#include <string>
using namespace std;
int find(string str, int i, int j, int count)
{
  if (i == str.length())
  {
    return count;
  }
  if (i + j > str.length())
  {
    return find(str, i + 1, 1, count);
  }
  string newStr = str.substr(i, j);

  if (newStr[0] == newStr[newStr.length() - 1])
  {
    return find(str, i, j + 1, count + 1);
  }
  return find(str, i, j + 1, count);
}
int main()
{
  string str = "abcab";
  cout << find(str, 0, 1, 0);
  return 0;
}