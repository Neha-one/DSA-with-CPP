// Address are in the form of Hexadecimal format.
// when we print again again then the address changed itself that much times.
#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 5;
    cout << &x << endl; // ex: 0x61ff0c
    cout << &y;         // ex :0x61ff08
}
