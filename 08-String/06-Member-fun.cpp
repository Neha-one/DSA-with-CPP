#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str = "neha kumari";

  cout << str.length() << endl;

  cout << str[3] << " = " << str.at(3) << endl;

  cout << str.substr(5, 3) << endl;

  cout << str.find("sd")<<endl;
  return 0;
}