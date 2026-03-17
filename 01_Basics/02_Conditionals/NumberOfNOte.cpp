// count number of notes of 100rs , 50rs, 20rs,10rs and 1 in the given amount 1330.
#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "enter amount";
    cin >> amount;

    switch (1)
    {
    case 1:
        cout << "100rs note is = " << amount / 100 << endl;
        amount = amount % 100;

    case 2:
        cout << "50rs note is = " << amount / 50 << endl;
        amount = amount % 50;

    case 3:
        cout << "20rs note is = " << amount / 20 << endl;
        amount = amount % 20;

    case 4:
        cout << "1rs note is = " << amount / 10 << endl;
        amount = amount % 10;
    case 5:
        cout << "1rs note is = " << amount;
    }
    return 0;
}
