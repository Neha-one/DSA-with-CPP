// Composite Number:-
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++) // here i<=(n-1) or i <=n/2.
    {
        if (n % i == 0)
        {
            cout << "Composite Number";
            break;
        }
    }
}
