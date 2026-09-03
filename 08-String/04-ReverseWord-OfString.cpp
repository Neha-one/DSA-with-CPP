#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseWords(vector<char> &s)
{
  // Step 1: Reverse complete string
  reverse(s.begin(), s.end());
  int start = 0;

  // Step 2: Reverse each word
  for (int i = 0; i <= s.size(); i++)
  {
    if (i == s.size() || s[i] == ' ')
    {
      reverse(s.begin() + start, s.begin() + i);
      start = i + 1;
    }
  }
}

int main()
{
  vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y'};

  reverseWords(s);

  for (char ch : s)
  {
    cout << ch;
  }

  return 0;
}