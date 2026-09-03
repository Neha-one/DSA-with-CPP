#include <iostream>
using namespace std;
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
    int count = 0;
    for (int j = 0; j < len; j++)
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
  string str = "soon";
  int len = str.length();
  MaxCheck(str, len);
  return 0;
}