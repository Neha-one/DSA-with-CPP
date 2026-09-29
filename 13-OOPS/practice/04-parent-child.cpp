#include <iostream>
using namespace std;
class Parent
{
public:
  Parent()
  {
    cout << "constructor of Parent..\n";
  };
  ~Parent()
  {
    cout << "destructor of Parent..\n";
  };
};
class Child : public Parent
{
public:
  Child()
  {
    cout << "constructo of Child..\n";
  };
  ~Child()
  {
    cout << "destructor of Child..\n";
  };
};
int main()
{
  Child c1;
  return 0;
}