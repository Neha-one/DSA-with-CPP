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
  string bloodType;
  Mammal()
  {
    bloodType = "warm";
  }
};
class Dog : public Mammal
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
  cout << d1.bloodType << endl;
  return 0;
}