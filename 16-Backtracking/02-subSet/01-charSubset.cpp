#include <iostream>
#include <string>
using namespace std;
void findSubset(string str, string ans)
{
  if (str.length() == 0)
  {
    for (auto x : ans)
    {
      cout << x << " ";
    }
    cout << endl;
    return;
  }
  char ch = str[0];
  findSubset(str.substr(1, str.length() - 1), ans + ch);
  findSubset(str.substr(1, str.length() - 1), ans);
}

int main()
{
  string str = "abc";
  string ans = "";
  findSubset(str, ans);
  return 0;
}