#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x;

    cout << x << endl;

    // x=23;
    // or
    *ptr = 23;
    cout << x;
}
