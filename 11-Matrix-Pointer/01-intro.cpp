#include <iostream>
using namespace std;

int main()
{
  int Mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
  cout << Mat << " = " << &Mat[0][0] << endl;
  cout << Mat << " != " << &Mat[0][1] << endl; // it will add 4 in address of Mat
  cout << Mat + 1 << " = " << &Mat[1][0] << endl;

  return 0;
}