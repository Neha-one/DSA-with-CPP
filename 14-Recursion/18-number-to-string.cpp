#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<string> convertIntoString(int n, vector<string> ans, vector<string> str)
{
  if (n == 0)
  {
    return ans;
  }
  int digit = n % 10;
  ans = convertIntoString(n / 10, ans, str);

  ans.push_back(str[digit]);
  return ans;
}
//----------------2nd method-----------
string convertIntoString2(int n, string answer, vector<string> str)
{
  if (n == 0)
  {
    return answer;
  }
  int digit = n % 10;
  answer = str[digit] + " " + answer;
  return convertIntoString2(n / 10, answer, str);
}
int main()
{
  vector<string> str = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  vector<string> ans;
  vector<string> result = convertIntoString(2019, ans, str);
  for (string s : result)

  {
    cout << s << " ";
  }
  cout << endl;
  string answer = "";
  cout << convertIntoString2(2019, answer, str);
  return 0;
}