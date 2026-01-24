// Ques: Print the pattern :
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter rows";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {
            // cout << value << " ";
            // value++;
            // OR without using 3rd variable:
            cout << (i - 1) + j << " ";
        }
        cout << endl;
    }

    // Ques: Print this pattern:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1
    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {
            // cout << value << " ";
            // value--;
            // OR without using 3rd variable:

            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}
