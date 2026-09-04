#include <iostream>
#include <string>
using namespace std;

char getMaxOccuringChar(string s)
{
  int arr[26] = {0};
  for (int i = 0; i < s.length(); i++)
  {
    int number = 0;
    number = s[i] - 'a';
    arr[number]++;
  }
  {
  }

  char maxChar;
  int maxi = 0;
  for (int i = 0; i < 26; i++)
  {
    if (arr[i] > maxi)
    {
      maxi = arr[i];
      maxChar = 'a' + i;
    }
  }
  return maxChar;
}

int main()
{
  cout << "Enter a string: ";
  string s;
  getline(cin, s);
  cout << getMaxOccuringChar(s) << endl;
  return 0;
}