#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of row:";
    cin >> n;

    int m;
    cout << "enter number of coloum:";
    cin >> m;

    // Ques:- Print the given pattern:
    /*
    ABCD
    ABCD
    ABCD
    ABCD
    */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << char(col + 64);
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:
    /*
    AAAA
    BBBB
    CCCC
    DDDD
    */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << char(row + 64);
        }
        cout << endl;
    }

    // Ques:- Print the given pattern:-
    /*
    a b c
    a b c
    a b c
    */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << char(col + 96) << " ";
        }
        cout << endl;
    }
    return 0;
}
