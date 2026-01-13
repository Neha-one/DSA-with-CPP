// Ques:-Print the given pattern:-
//       *
//       *
//   * * * * *
//       *
//       *

#include <iostream>
using namespace std;
int main()
{
 
    int n;
    cout << "enter number of rows:";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == (n + 1) / 2 || row == (n + 1) / 2)
            {

                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}