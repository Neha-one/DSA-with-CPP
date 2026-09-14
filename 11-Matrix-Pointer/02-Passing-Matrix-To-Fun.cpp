#include <iostream>
using namespace std;
void func2(int (*Mat)[3])
{

  cout << "0th row ptr: " << Mat << endl;
  cout << "1st row ptr: " << Mat + 1 << endl;
  cout << "2nd row ptr: " << Mat + 2 << endl;
}
void func(int Mat[][3])
{
  cout << "0th row ptr: " << Mat << endl;
  cout << "1st row ptr: " << Mat + 1 << endl;
  cout << "2nd row ptr: " << Mat + 2 << endl;

  //----values:------
  cout << "values as address : " << endl;

  cout << "0th row value: " << *Mat << endl;
  cout << "1st row value: " << *(Mat + 1) << endl;
  cout << "2nd row value: " << *(Mat + 2) << endl;

  //----values:------
  cout << "values as address : " << endl;

  cout << "0th row value: " << *(*(Mat + 0) + 0) << endl;
  cout << "(0,1) value: " << *(*(Mat + 0) + 1) << endl;
  cout << "(1,0) value: " << *(*(Mat + 1) + 0) << endl;
}
int main()
{
  int Mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // using ptr method:-------
  func2(Mat);

  // Normal passing:----
  func(Mat);

  return 0;
}