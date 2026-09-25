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
  ~Car()
  {
    cout << "destructor called." << endl;
    cout << "mileage before deleted." << " " << mileage << endl;
    if (mileage != NULL)
    {
      delete mileage;
      mileage = NULL;
    }

    cout << "mileage after deleted." << " " << mileage << endl;
  }
};
int main()
{
  Car c1("mahendra", "black");
  Car c2(c1);
  cout << c1.name << endl;
  cout << c1.color << endl;
  cout << *c1.mileage << endl;
  return 0;
}