#include <iostream>
using namespace std;
void toh(int n, string src, string helper, string dest)
{
  if (n == 1)
  {
    cout << "disk " << n << " move " << src << " -> " << dest << endl;
    return;
  }
  toh(n - 1, src, dest, helper);
  cout << "disk " << n << " move " << src << " -> " << dest << endl;
  toh(n - 1, helper, src, dest);
}
int main()
{
  toh(3, "A", "B", "C");
  return 0;
}