#include <iostream>
using namespace std;

void greet(int n)
{

    if (n == 0) // base case
        return;
    greet(n - 1);      // call
    cout << n << endl; // work
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    greet(n);
}