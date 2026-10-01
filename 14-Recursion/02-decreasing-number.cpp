#include <iostream>
using namespace std;
void decreaseNum(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << " ";
  decreaseNum(n - 1);
}
int main()
{
  decreaseNum(5);
   return 0;
}