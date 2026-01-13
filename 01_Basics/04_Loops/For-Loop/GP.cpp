// QUES:-  Display this GP - 1,2,4,8,16,32..upto 'n' terms.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "Your GP - ";
//     for (int i = 1; i <= (2 * n - 1); i *= 2)
//     {
//         cout << i << " , ";
//     }
// }

// 2ND METHOD:-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "Your GP - ";
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " , ";
//         a = a * 2;
//     }
// }

// Print 5,15,45..   common ratio=3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter your n: ";
//     cin >> n;
//     int a = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a<<" ";
//         a *= 3;
//     }
// }

// Display this GP - 3,12,48,..upto 'n' terms.
// common ratio is 4.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a *= 4;
    }
}
