#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
  string name;
  float cgpa;

public:
  void getPercentage()
  {
    cout << (cgpa * 10) << "%" << endl;
  }
  void setName(string nameVal)
  {
    name = nameVal;
  }
  void setCgpa(float cgpaVal)
  {
    cgpa = cgpaVal;
  }
  //-----Getter---------
  string getName()
  {
    return name;
  }
  float getCgpa()
  {
    return cgpa;
  }
};
int main()
{
  Student s1;
  s1.setName("Neha");
  s1.setCgpa(9.1);
  cout << s1.getName() << endl;
  cout << s1.getCgpa() << endl;
  return 0;
}