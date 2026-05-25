#include <iostream>
using namespace std;
int main()
{

  char ch = 123456;
  cout << ch; //@ this will print the character corresponding to the ASCII value of 123456, which may not be a valid character and could result in undefined behavior. and it is coming from 123456 % 256 = 64, so it will print the character '@' which is the ASCII character for the value 64.
  cout << endl;
  cout<<int(ch); //@ this will print the integer value of the character stored in ch, which is 64, as explained above.
}