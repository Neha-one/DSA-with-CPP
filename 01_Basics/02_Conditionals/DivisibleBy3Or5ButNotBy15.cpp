// QUES:-Take positive integers input and tell if it is divisible by 5 or 3 but not divisible by 15.


#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter your number: ";
    cin >> x;
    if (x < 0)
        x = -x;
    if (x % 15 != 0)
    {
        if (x % 5 == 0 || x % 3 == 0)
        {
            cout << "x is divisible by 5 or 3 but not 15.";
        }
        else
        {
            cout << "x is not divisible by both of 3 and 5";
        }
    }
    else
    {
        cout << "x is divisle of 15";
    }
    return 0;
}

//              2nd method:-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "enter your number: ";
//     cin >> x;
//     if (x < 0)
//         x = -x;
//     if (x % 15 != 0 && (x % 3 == 0 || x % 5 == 0))
//     {
//         cout << "x is divisible by 3 or 5 but not 15.";
//     }
//     else
//     {
//         cout << "condition not satisfied";
//     }
//     return 0;
// }