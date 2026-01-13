#include <iostream>
using namespace std;
int main()
{
    // Ques:- Print the given pattern:-
    /*
    A
    AB
    ABC
    ABCD
    */
    int m;
    cout << "enter number of rows:";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char(col + 64);
        }
        cout << endl;
    }
    cout << endl;
    // Ques:- Print the given pattern:-
    /*
    ABCD
    ABC
    AB
    A
    */
    for (int row = m; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char(col + 64);
        }
        cout << endl;
    }
    return 0;
}
