#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows:";
    cin >> n;

    // Ques: Print this pattern:
    // D E F G
    // C D E F
    // B C D E
    // A B C D
    int starting = 1;
    for (int i = 1; i <= n; i++)
    {
        int starting = n - i + 'A';

        for (int j = 1; j <= n; j++)
        {
            // char ch = 'A' + n - i + j - 1;
            // cout << ch << " ";

            // 2nd method:- using by creating a starting value:-
            char ch2 = starting;
            cout << ch2 << " ";
            starting++;
        }
        cout << endl;
    }
    cout << endl;

    // A B C D
    // B C D E
    // C D E F
    // D E F G
    for (int i = 1; i <= n; i++)
    {
        //making a starting value:
        int starting1 = 'A' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            char ch = starting1;
            cout << ch << " ";
            starting1++;
        }
        cout << endl;
    }
};
