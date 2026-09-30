#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
  string name;
  int age;
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};
class Student : public Person
{
  int studentID;

public:
  Student(string name, int age, int studentID) : Person(name, age)
  {
    this->studentID = studentID;
  }
  void displayStudentInfo()
  {
    cout << "(" << name << "," << age << "," << studentID << ")" << endl;
  }
};
int main()
{
  Student s1("neha", 20, 133);
  s1.displayStudentInfo();
  return 0;
}