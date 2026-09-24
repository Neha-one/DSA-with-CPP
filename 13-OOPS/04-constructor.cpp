#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
  string name;

public:
  //----default constructor----
  Student()
  {
    cout << "Default constructor or non-parameterized constructor created." << endl;
  }
  //----parameterized constructor-----
  Student(string nameVal)
  {
    name = nameVal;
    cout << "parameterized constructor is called." << endl;
  }
  //-----Custom copy constructor----
  Student(Student &original)
  {
    name = original.name;
  }
  string getName()
  {
    return name;
  }
};
int main()
{
  Student s0;
  Student s1("Neha");
  // cout << s1.getName() << endl;

  //--- copy constructor----after making custom constructor it will work for custom constructor now.
  Student s2(s1);
  cout << s2.getName() << endl;
  return 0;
}