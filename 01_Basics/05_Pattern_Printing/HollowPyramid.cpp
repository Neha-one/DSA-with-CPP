// // Ques:- Print hollow pyramid pattern in star:-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "enter number of rows:";
//     cin >> m;
//     int n;
//     cout << "enter number of cols:";
//     cin >> n;

//     for (int row = 1; row <= m; row++)
//     {
//         for (int space = m; space > row; space--) // space
//         {
//             cout << "  ";
//         }
//         for (int col = 1; col <= 2 * row - 1; col++) // star
//         {
//             if (col == (m + 1) / 2 || row == m || (row + col) == (m + 1) || (row + col) == (2 * m - 1))
//                 cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter number of rows: ";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        // spaces
        for (int space = 1; space <= m - row; space++)
        {
            cout << "  ";
        }

        // stars
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1 || row == m)
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
