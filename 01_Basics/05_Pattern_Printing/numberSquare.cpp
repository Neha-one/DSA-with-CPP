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

    // Ques:- Print the given pattern
    /*
    1234
    1234
    1234
    */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    // Ques:- Print the given pattern
    /*
    1111
    2222
    3333
    4444
    */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            cout << row;
        }
        cout << endl;
    }
    return 0;
}