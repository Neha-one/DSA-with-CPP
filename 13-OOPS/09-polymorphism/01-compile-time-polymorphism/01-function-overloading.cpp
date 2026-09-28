#include <iostream>
using namespace std;

class Print
{
public:
  string show(string name)
  {
    return name;
  }
  int show(int number)
  {
    return number;
  }

  void show2(int number)
  {
    cout << "number is : " << number << endl;
  }
  void show2(string name)
  {
    cout << "name is : " << name << endl;
  }
};
int main()
{
  Print obj;
  cout << obj.show("mani") << endl;
  cout << obj.show(14) << endl;

  obj.show2("neha");
  obj.show2(22);
  return 0;
}