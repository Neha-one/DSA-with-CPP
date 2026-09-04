#include <iostream>
using namespace std;

int main()
{
  string str1 = "somya";
  int len = str1.length();
  cout << "your name is: " << str1 << endl;
  cout << "name length: " << len << endl;

  cout << endl;

  string str2;
  cout << "enter str2 : ";
  str2.push_back('n');
  str2.push_back('e');
  str2.push_back('h');
  str2.push_back('a');

  cout << str2 << endl;
  str2.pop_back();
  cout << "str2 after one pop: " << str2 << endl;

  cout << endl;

  cout << "enter a str3: ";
  string str3;
  // '|' is delimiter, it will take input until '|' is encountered. and input after '|' will be strored in buffer. and it will be used in next input.
  getline(cin, str3, '|');
  cout << "your str3 is: " << str3 << endl;

  //after '|' it will take input until '\n' is encountered.
  cout << "enter a str4: ";
  string str4;
  cin >> str4;

  cout << "str4 is: " << str4;
  return 0;
}