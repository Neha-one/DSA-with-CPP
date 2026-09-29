#include <iostream>
using namespace std;
class Parent
{
public:
  void show()
  {
    cout << "Parent class ";
  }
};
class Child : public Parent
{
public:
  void show()
  {
    cout << "Child class";
  }
};
int main()
{
  Child c1;
  c1.show();
  return 0;
}