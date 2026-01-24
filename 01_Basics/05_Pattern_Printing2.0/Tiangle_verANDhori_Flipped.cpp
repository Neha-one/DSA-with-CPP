#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows:";
    cin >> n;

    // * * * *
    //   * * *
    //     * *
    //       *
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }

        for (int j = i; j <= n; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    // 1 2 3 4 5
    //   2 3 4 5
    //     3 4 5
    //       4 5
    //         5
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }

        for (int j = i; j <= n; j++)
        {

            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 1 1 1 1 1
    //   2 2 2 2
    //     3 3 3
    //       4 4
    //         5
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }

        for (int j = i; j <= n; j++)
        {

            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }

        for (int j = i; j <= n; j++)
        {

            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}