
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows:";
    cin >> m;

    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= (m - row); col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}