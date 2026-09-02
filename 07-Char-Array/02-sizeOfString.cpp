#include <iostream>
using namespace std;
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

  cout << "Your name is ";
  cout << name << endl;
  cout << "your name lenght is :";
  cout << (StringSize(name));
  return 0;
}
