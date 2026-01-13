// Ques:- Print star diamond pattern :-
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows (half): ";
    cin >> n;

    // Upper pyramid
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
            cout << "  ";

        for (int star = 1; star <= 2 * row - 1; star++)
            cout << "* ";

        cout << endl;
    }

    // Lower inverted pyramid
    for (int row = n - 1; row >= 1; row--)
    {
        for (int space = 1; space <= n - row; space++)
            cout << "  ";

        for (int star = 1; star <= 2 * row - 1; star++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
