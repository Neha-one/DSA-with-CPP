#include <iostream>
using namespace std;

// PASS BY VALUE:-
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // but in main function values of x and y are same;
    cout << "main still same " << a << " " << b << endl;
}

// PASS BY REFERENCE
void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5;
    int y = 6;
    cout << x << " " << y << endl;
    swap(x, y);

    swap1(x, y);
    cout << "main " << x << " " << y << endl;
}