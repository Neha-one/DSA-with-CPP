// method 01
//  #include <iostream>
//  using namespace std;

// void greet(int n)
// {
//     // base case
//     if (n > 10)
//         return;
//     cout << n << endl;
//     greet(n + 1);
// }
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;

//     greet(1);
// }

// method 02
#include <iostream>
using namespace std;

void greet(int x, int n)
{
    // base case
    if (x > n)
        return;
    cout << x << endl;
    greet(x + 1, n);
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    greet(1, n);
}
