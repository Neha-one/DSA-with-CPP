#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char name1[100];

  cout << "Enter your name1: ";
  cin.getline(name1, 100);

  cout << "Your name1 is " << name1 << endl;

  int len = strlen(name1);
  cout << "Length of your name1 is: " << len << endl;

  char name2[100];

  cout << "Enter your name2: ";
  cin.getline(name2, 100);

  cout << "Your name2 is " << name2 << endl;

  cout << "compare of both name1 and name2 string: " << strcmp(name1, name2) << endl;

  char name3[100];
  cout << "copying name3 from name1: ";
  // strcpy(destination, source);
  strcpy(name3, name1);
  cout << "Your name3 is " << name3 << endl;

  return 0;
}