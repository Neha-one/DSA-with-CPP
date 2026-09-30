#include <iostream>
#include <string>
#include <numeric>
using namespace std;
string gcdOfStrings(string str1, string str2)
{
  if(str1+str2 !=str2+str1){
    return "";
  }
  int len = gcd(str1.length(), str2.length());
  return str1.substr(0,len);
}
int main()
{
  string str1 = "ABAB";
  string str2 = "AB";
  cout << gcdOfStrings(str1, str2);
  return 0;
}