#include <iostream>
using namespace std;
class Example
{
public:
  Example()
  {
    cout << "constructor..\n";
  }
  ~Example()
  {
    cout << "deconstructor..\n";
  }
};
int main()
{
  int a = 0;
  if (a == 0)
  {
  static Example e1;
  }
  cout << "code end" << endl;
  return 0;
}