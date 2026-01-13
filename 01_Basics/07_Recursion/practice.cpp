// #include <iostream>
// using namespace std;
// void greet(int a, int sum)
// {
//     if (a == 0)
//     {
//         cout << sum << endl;
//         return;
//     }
//     greet(a - 1, sum + a);
//     return;
// }
// int main()
// {
//     int a;
//     cout << "a";
//     cin >> a;

//     greet(a, 0);
// }

#include <iostream>
using namespace std;
int greet(int n)
{
    if (n == 0)
        return 0;

    return n + greet(n - 1);
}
int main()
{
    int a;
    cout << "a";
    cin >> a;

    cout << greet(a);
}