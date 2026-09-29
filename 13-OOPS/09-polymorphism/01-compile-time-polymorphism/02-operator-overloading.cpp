#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void showNum()
    {
        cout << real << " + " << img << "i" << endl;
    }
    //-----Operator overloading.
    Complex operator+(Complex &c2)
    {
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }
    //------Operator overloading-----
    Complex operator-(Complex &c2)
    {
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }
    bool operator==(Complex &c2)
    {
        return this->real == c2.real && this->img == c2.img;
    }
};

int main()
{
    Complex c1(2, 3);

    Complex c2(2, 3);
    //------- + ------------
    Complex c3 = c1 + c2;
    c3.showNum();

    //------- - ------------
    c3 = c1 - c2;
    c3.showNum();

    if (c1 == c2)
    {
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}