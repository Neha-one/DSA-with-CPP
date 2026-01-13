// QUES:- Display this AP-1,3,5,7,9..upto 'n' terms.
// an=a+(n-1)d
// here n=by user, a=1, d=2,then an=2n-1 (an means last term ) , n=num of terms .

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "Your AP - ";
//     for (int i = 1; i <= (2 * n - 1); i += 2)
//     {
//         cout << i << " , ";
//     }
//     cout << "...";
// }

// QUES:- Display this AP - 4,7,10,13,16..upto 'n' terms.
//  a=4 , d=3 , an=3n+1 ,n=by user.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "Your AP - ";
//     for (int i = 4; i <= (3 * n + 1); i += 3)
//     {
//         cout << i << " , ";
//     }
// cout << "...";

// }

// 2ND METHOD:-
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "Your AP - ";
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 3;
    }
}