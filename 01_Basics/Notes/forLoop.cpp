#include <iostream>
using namespace std;
int main()
{
    // for (int a = 1, b = 1; a <= 10, b <= 10; a++, b++)
    // {
    //     cout << a << " " << 2 * b << endl;
    // }
    // cout << endl;

    // int i = 1;
    // for (;;)
    // {
    //     if (i <= 5)
    //     {

    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }
    // cout << endl;

    // // ques:
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }
    // cout << endl;

    // for (int i = 0; i <= 5; i += 2)
    // {
    //     cout << i << " "; // 0
    //     if (1 & i)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    //  //Ques :
    //     // for (int i = 0; i <= 5; i--)
    //     // {
    //     //     // IFINITE LOOP:-

    //     //     cout << i << " ";
    //     //     i++;
    //     // }

    // Ques :-
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";

    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    // Ques :
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    // Ques: k
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}
// 0 3 6 9 12 15