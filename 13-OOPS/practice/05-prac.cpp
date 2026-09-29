#include <iostream>
using namespace std;
class Parent {
  public:
  virtual void print(){
    cout << "Parent\n";
  };
};
class Derived : public Parent{
  public:
  void print(){
    cout << "Derived\n";
  };
};

int main()
{
  Derived b;
  Parent *p = ew Derived()n;
  p->print();
  delete p;
  return 0;
}