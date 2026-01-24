#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows:";
    cin >> n;
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        // for (int j = 1; j <= n - i + 1; j++) //if 3rd var value not applying:
        for (int j = i; j <= n; j++) // for 3rd var value;
        {
            // cout<<j<<" "; //try this with his loop if you do not take 3rd var value
            cout << value << " ";
            value++;
        }

        for (int space = 2; space < 2 * i; space++)
        {

            cout << "* ";
        }

        int value2 = n - i + 1;
        for (int j = i; j <= n; j++)
        {
            cout << value2 << " ";
            value2--;
        }
        cout << endl;
    }
}
