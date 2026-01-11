// Take positive integer input and tell if it is divisible by 5 and 3.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter your number:";
//     cin >> n;
//     if (n % 3 == 0 && n % 5 == 0)
//    //OR if (n % 3 == 0 and n % 5 == 0)
//     {
//         cout << "Yes given num is divisible by both 3 and 5.";
//     }
//     else
//     {
//         cout << "Yes given num is Not divisible by both 3 and 5.";
//     }
// }

// OR

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number:";
    cin >> n;
    if (n % 15 == 0)
    {
        cout << "Yes given num is divisible by both 3 and 5.";
    }
    else
    {
        cout << "Yes given num is Not divisible by both 3 and 5.";
    }
}
