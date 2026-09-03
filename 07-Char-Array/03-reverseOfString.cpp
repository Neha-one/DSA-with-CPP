#include <iostream>
using namespace std;
void reverseString(char name[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    char temp = name[i];
    name[i] = name[n - 1 - i];
    name[n - 1 - i] = temp;
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
  cout << name;
  return 0;
}
