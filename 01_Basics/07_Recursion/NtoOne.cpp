#include <iostream>
using namespace std;

void greet(int n)
{
    // base case
    if (n == 0)
        return;
    cout << n << endl;
    greet(n - 1);
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    greet(n);
}