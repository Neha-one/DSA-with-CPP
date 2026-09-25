#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
  int salary;
  string subject;
};
class Student
{
public:
  int rollno;
  float cgpa;
};
class TA : public Teacher, public Student
{
  public:
  string name;
};
int main()
{
  TA ta;
  ta.name = "Neha";
  ta.cgpa = 9.5;
  ta.subject = "C++";

  cout << ta.subject << endl;
  cout << ta.cgpa << endl;
  cout << ta.name << endl;
  return 0;
}