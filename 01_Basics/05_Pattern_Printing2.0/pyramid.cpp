#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows:";
    cin >> n;
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    for (int i = 1; i <= n; i++)
    {
        for (int space = i; space < n; space++)
        {
            cout << "  ";
        }

        for (int j = 1; j < i; j++)
        {

            cout << j << " ";
        }
        for (int c = 1; c <= i; c++)
        {
            cout << i - c + 1 << " ";
        }
        cout << endl;
    }
}
