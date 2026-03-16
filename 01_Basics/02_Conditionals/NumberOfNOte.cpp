// count number of notes of 100rs , 50rs, 20rs and 1 in the given amount 1330.
#include <iostream>
using namespace std;

int main()
{

    int amount = 1330;
    int note;
    cout << "enter any 100 , 50, 20, 1rs note:";
    cin >> note;
    switch (note)
    {
    case 100:
        cout << "total number of 100rs note in the amount " << amount << " is = " << amount / 100;
        break;
    case 50:
        cout << "total number of 50rs note in the amount " << amount << " is = " << amount / 50;
        break;
    case 20:
        cout << "total number of 20rs note in the amount " << amount << " is = " << amount / 20;
        break;
    case 1:
        cout << "total number of 1rs note in the amount " << amount << " is = " << amount / 1;
        break;
    default:
        cout << "invalid note";
    }
}