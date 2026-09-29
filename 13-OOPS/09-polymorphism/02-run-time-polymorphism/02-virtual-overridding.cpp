#include <iostream>
using namespace std;
class Parent{
  public:
virtual void show(){
    cout<<"Parent class\n";
  }
};
class Child : public Parent{
  public:
  void show(){
    cout<<"Child class\n";
  }
};
int main()
{
  Child c;

  //------- using pointer ----------
  
    // Parent *ptr;
    // ptr = &c;
    // ptr->show();

//-----  oR  using ref-------
Parent &p=c;
p.show();
    return 0;
}