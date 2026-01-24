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
    // Ques : Print the pattern:
    //  A B C
    //  D E F
    //  G H I
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = (i - 1) * 4 + 'A' + j - i;
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2nd method:
    int start = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            char ch = start;
            cout << ch << " ";
            int((start)++);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int value = 0;
        for (int j = 1; j <= n; j++)
        {
            // char ch = 'A' + (i - 1) + value;
            // cout << ch << " ";

            //2nd method:-
            char ch2 = i + j + 'A' - 2;
            cout << ch2 << " ";
            value++;
        }
        cout << endl;
    }
};