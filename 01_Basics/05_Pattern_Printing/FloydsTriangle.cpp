//DO NOT TOUCH TRIANGLE LOOP AFTER PRINTING DRY TRIANGLE APPLY LOGIC AND GET YOUR RECUIRED VALUES.
// Ques:- Print the given pattern:-
/*
1
23
456
78910
*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;

    int a = 1;
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}