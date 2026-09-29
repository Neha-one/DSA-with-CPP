#include <iostream>
using namespace std;
class Complex
{
public:
  int real;
  int img;
  Complex(int real, int img)
  {
    this->real = real;
    this->img = img;
  }
  void showNum()
  {
    cout << real << "-" << img << "i" << endl;
  }
  void operator-(Complex &c2)
  {
    int resReal = this->real - c2.real;
    int resImg = this->img - c2.img;
    Complex c3(resReal, resImg);
    c3.showNum();
  }
};
int main()
{
  Complex c1(2, 3);
  Complex c2(1, 3);
  c1 - c2;
  return 0;
}