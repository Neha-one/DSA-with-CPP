#include <iostream>
using namespace std;

class Animal
{
public:
  void breath()
  {
    cout << "breathe\n";
  }
};
class Mammal : public Animal
{
public:
  void walk(){
    cout << "walk" << endl;
  }
};
class Dog : public Animal
{
public:
  void eat()
  {
    cout << "eats\n";
  }
};
int main()
{
  Dog d1;
  d1.eat();
  d1.breath();

  Mammal m1;
  m1.walk();
  m1.breath();
  return 0;
}