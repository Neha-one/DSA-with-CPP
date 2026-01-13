#include <iostream>
using namespace std;
int main()
{
    // Ques:- Print the given pattern:-(alternate 0-1)
    /*
    1
    01
    010
    1010
    10101
    */
    int m;
    cout << "enter number of rows:";
    cin >> m;

    // int a = 1;
    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         if (a == 1)
    //         {
    //             cout << a;
    //             a--;
    //         }
    //         else
    //         {
    //             cout << a;
    //             a++;
    //         }
    //     }
    //     cout << endl;
    // }

    // Ques:- Print the given pattern:-
    /*
    1
    01
    101
    0101
    */
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}