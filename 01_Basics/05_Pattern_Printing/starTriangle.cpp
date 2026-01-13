// Ques:- Print the given pattern:-
/*
 *
 **
 ***
 ****
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of row:";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    // Ques:- Print the given pattern:-
    /*
    ****
    ***
    **
    *
    */
    for (int row = n; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
