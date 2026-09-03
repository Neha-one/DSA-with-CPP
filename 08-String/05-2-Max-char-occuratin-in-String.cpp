#include <iostream>
#include <string>
using namespace std;

char getMaxOccuringChar(string s)
{
  int freq[26] = {0};
  for (char ch : s)
  {
    freq[ch - 'a']++;
  }

  char maxChar = 'a';
  int maxFreq = 0;
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] > maxFreq)
    {
      maxFreq = freq[i];
      maxChar = 'a' + i;
    }
  }
  return maxChar;
}

int main()
{
  string s = "testsample";
  cout << getMaxOccuringChar(s) << endl;
  return 0;
}