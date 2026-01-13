// CONTINUE : - IF YOU WANT TO SKIP A PARTICULAR ROUND.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         if (i == 3)
//             continue;
//         if (i == 8)
//             continue;
//         cout << i << " ";
//     }
// }       //0 1 2 4 5 6 7 9 10

// QUES:- Wap to print odd numbers from 1 to 100.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
            continue;

        cout << i << " ";
    }
}