#include <iostream>
using namespace std;

int main()
{
  int ch = 5;
  int *ptr = &ch;
  cout << "before ptr arith " << ptr << endl;
  ptr++;
  cout << "after ptr++ " << ptr << endl;
  ptr--;
  cout << "after ptr-- " << ptr << endl;

  return 0;
}
