#include <iostream>
using namespace std;
int main()
{
    // not operator : if i enter +Ve then it gave us -ve value with 1 increase number
    int x = 4;
    cout << ~x << endl; //-5

    // not operator : if i enter -Ve then it gave us +ve value with 1 decrese number
    int y = -2;
    cout << ~y << endl; // 1

    int a = 4;
    int b = 5;

    cout << "a&b = " << (a & b) << endl;   // 4
    cout << "a|b = " << (a | b) << endl;   // 5
    cout << "~a = " << (~a) << endl;       //-5
    cout << "a^b = " << (a ^ b) << endl;   // 1
    cout << "a<<2 = " << (a << 2) << endl; // 16
    cout << "a>>2 = " << (a >> 2) << endl; // 1
}