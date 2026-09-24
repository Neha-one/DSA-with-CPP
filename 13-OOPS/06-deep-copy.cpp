#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
  string name;
  string color;
  int *mileage;

  Car(string name, string color)
  {
    this->name = name;
    this->color = color;
    mileage = new int; // dynamic allocation
    *mileage = 12;
  }
  Car(Car &original)
  {
    name = original.name;
    color = original.color; 
    mileage=new int;
    *mileage = *original.mileage;
  }
};
int main()
{
  Car c1("mahendra", "black");
  Car c2(c1);
  cout << c1.mileage << " != " << c2.mileage << endl;
  cout << *c1.mileage << endl;
  cout << *c2.mileage << endl;
  *c2.mileage = 23;
  cout<<"after change into c2."<<endl;
  cout << *c2.mileage << endl;
  cout << *c1.mileage << endl;
  return 0;
}