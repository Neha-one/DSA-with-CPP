// Address are in the form of Hexadecimal format.
// when we print again again then the address changed itself that much times.
// cause hexadecimal use more byte so we use POINTER.
#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    // create a pointer of variable p
    int *p;
    p = &x;

    cout << &x << endl;// 0x61ff08
    cout << p<<endl; // 0x61ff08

    cout<<&p<<endl;  //  p is a container who contain address of x as a value. so it has also a address

    cout<<*p; // it means x; = 5  IT CALLED DEREFRENCE 
}
