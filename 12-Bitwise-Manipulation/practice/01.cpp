#include <iostream>
using namespace std;
void updateIthBit(int num, int i, int val)
{
  //---clear ith bit 
  num = num & ~(1 << i);

  //---set given val to ith bit
  num = num | (val << i);
  cout << num << endl;
}
int main()
{
  int num = 7;
  int i = 3;
  int val = 1;
  updateIthBit(num, i, val);

  return 0;
}