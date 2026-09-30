#include <bits/stdc++.h>
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
    cout << real << " + " << img << "i" << endl;
  }
  Complex operator*(Complex &c2)
  {
    return Complex((real * c2.real) - (img * c2.img), (img * c2.real) + (c2.img * real));
  }
};

int main()
{
  Complex c1(2, 3);
  Complex c2(1, 3);
  Complex c3 = c1 * c2;
  c3.showNum();
  return 0;
}
