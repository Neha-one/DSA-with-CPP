#include <iostream>
using namespace std;
void reverseString(char name[], int n)
{
  int s = 0;
  int e = n - 1;
  while (s < e)
  {
    swap(name[s++], name[e--]);
  }
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
  reverseString(name, len);
  cout << "Your reverse name is : " << name;
  return 0;
}