#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of row:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char ch = i + j + 'A';
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2nd method:

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = i + j + 'A' - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
};