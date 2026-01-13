// Wap to find the all factor of a number 'n' (other than n itself)

// INCREMENT:-
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "enter n: ";
//      cin >> n;
//      for (int i = 1; i < n; i++)
//      {
//          if (n % i == 0)
//              cout << i << " ";
//      }
//  }

// Wap to find the highest factor of a number 'n' (other than n itself)
//          easy:-
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "enter n: ";
//      cin >> n;
//      int f;
//      for (int i = 1; i < n; i++)
//      {
//          if (n % i == 0)f=i;
//         }
//         cout << f;
//  }

 //         2nd method:-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     int f = 1;  //store highest factor.

//     //LOOP RUNNING more times :- not good.
//     // for (int i = 1; i < n; i++)
//     //now loop will run not more times.
//     for (int i = 1; i <= n/2; i++)

//     {
//         if (n % i == 0)
//             f = i;
//         }
//         cout << f;
// }

// DECREMENT
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i;
            break;
        }
    }
}
