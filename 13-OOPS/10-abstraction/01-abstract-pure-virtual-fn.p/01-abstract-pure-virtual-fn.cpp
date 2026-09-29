#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void draw() = 0; // pure virtual function
};
class Circle : public Shape
{
public:
  void draw()
  {
    cout << "draw circle\n";
  }
};
class Square : public Shape
{
public:
  void draw()
  {
    cout << "draw square\n";
  }
};
int main()
{
  Circle c;
  c.draw();

  Square sq;
  sq.draw();

  return 0;
}