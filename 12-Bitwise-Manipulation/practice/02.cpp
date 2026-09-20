#include <iostream>
using namespace std;
void clearIBits (int num,int i){
  int mask = ~(0) << i;
  num = num & mask;
  cout << num << endl;
}int main()
{
  int num = 15;
  int i = 2;
  clearIBits(num, i);
  return 0;
}