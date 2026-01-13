// finding combination of given number.
#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

    int r;
    cout << "enter r:";
    cin >> r;

    // in one line:-
    //  cout << factorial(n) / (factorial(r) * factorial(n - r));
    //  or
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);
    cout << "combination of " << n << "C" << r << " = " << a / (b * c);
}