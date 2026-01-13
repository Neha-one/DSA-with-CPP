// Ques:- Swap two number:-
#include <iostream>
using namespace std;
int main()
{

    // 1st method using conditional statement with 3rd variable:-
    bool c = true;
    int a = 3;
    int b = 4;
    cout << a << " " << b << endl;

    if (c)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b << endl;

    // 2nd method using 3rd variable:-
    int a1 = 10;
    int b1 = 20;

    cout << a1 << " " << b1 << endl;
    int temp1 = a1;
    a1 = b1;
    b1 = temp1;
    cout << a1 << " " << b1 << endl;

    // 3rd method WITHOUT USING 3RD VARIALBE:-
    int x = 5;
    int y = 3;
    cout << x << " " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}