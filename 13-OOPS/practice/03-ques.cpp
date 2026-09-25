#include <iostream>
#include <string>
using namespace std;
class Person
{
  string name;
  int age;

public:
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  void display()
  {
    cout << "name " << name << endl;
    cout << "age " << age << endl;
  }
};
class Employess : public Person
{
  string empId;
  int salary;

public:
  Employess(string name, int age, string empId, int salary) : Person(name, age)
  {
    this->empId = empId;
    this->salary = salary;
  }
  void displayEmp()
  {
    display();
    cout << "empId " << empId << endl;
    cout << "salary " << salary << endl;
  }
};
int main()
{
  Employess e1("Neha", 20, "neha01", 3000000);
  e1.displayEmp();
  return 0;
}