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
class Fish : protected Animal
{
public:
  int fins;
  void swim()
  {
    breath();
    cout << "swim\n";
  }
};
int main()
{
  Fish f1;
  f1.fins = 4;
  // f1.breath();
  f1.swim();
  return 0;
}