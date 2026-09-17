#include <iostream>
using namespace std;
bool CheckPowerOfTwo(int num)
{
  if (!(num & (num - 1)))
  {
    // cout << "yes it is power of 2 ";
    return true;
  }
  else
  {
    // cout << "No it is not power of 2 ";
    return false;
  }
}
int main()
{
  cout << CheckPowerOfTwo(16);
  return 0;
}