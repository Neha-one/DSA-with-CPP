#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of row:";
    cin >> n;
// Ques:- Print the given pattern:-
/*
1
AB
123
ABCD
12345
*/


    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (row % 2 != 0)
            {
                cout << col;
            }
            else
            {
                cout << char(col + 64);
            }
        }
        cout << endl;
    }
    return 0;
}
