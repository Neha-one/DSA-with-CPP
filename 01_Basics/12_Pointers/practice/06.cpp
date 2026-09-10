#include <iostream>
using namespace std;

int main()
{
  char ch = 'a';
  cout << &ch<<endl;
  cout << (void *)&ch << endl;
  return 0;
}