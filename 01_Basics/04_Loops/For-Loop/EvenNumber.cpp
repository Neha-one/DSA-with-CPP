// //QUES:- Print all the even numbers from 1 to 100.
// #include <iostream>
// using namespace std;
// int main()
// {
//     //code run 100 times:
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << endl;
//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{

    // code run 50 times:
    for (int i = 2; i <= 100; i = i + 2)
    {
        cout << i << endl;
    }
}