#include <iostream>
using namespace std;

int main()
{
  char name1[100];

  cout << "Enter your name1: ";
  cin.getline(name1, 100);

  cout << "Your name1 is " << name1 << endl;

  int len = strlen(name1);
  cout << "Length of your name1 is: " << len << endl;

  // it will print value of ch but in int array it will print address.
  char ch[5] = {'a', 'b', 'c', 'd'};
  cout << ch;

  char name4[] = "neha";
  char name5[5] = "neha";
  char name6[] = {'m', 'a', 'n', 'i', '\0'};
  char name7[5] = {'m', 'a', 'n', 'i', '\0'};
  cout << name4 << endl;
  cout << name5 << endl;
  cout << name6 << endl;
  cout << name7 << endl;
  return 0;
}