#include <iostream>
using namespace std;

int main()
{
  string str = "somya";
  int len = str.length();
  cout << "your name is: " << str << endl;
  cout << "name length: " << len << endl;

  string s;
  cout << "enter s : ";
  s.push_back('n');
  s.push_back('e');
  s.push_back('h');
  s.push_back('a');
  
  cout << s << endl;
  s.pop_back();
  cout<<"s after pop: " << s << endl;
  return 0;
}   