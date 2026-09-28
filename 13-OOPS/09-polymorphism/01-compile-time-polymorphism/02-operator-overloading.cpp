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
};
int main()
{
    Complex c1(2, 3);
    c1.showNum();
    return 0;
}