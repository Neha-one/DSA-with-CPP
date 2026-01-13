// Ques 01: the same varialbe names can be used in different functions without any conflict.
// TRUE

// Ques 02 : Every called function must contain a return statement.
// FALSE

// Ques 03: A function may contain more than one return statements.
// TRUE
// Ex:
#include <iostream>
using namespace std;
int maxOfTwo(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout << maxOfTwo(4, 6);
}

// Ques 04: A function may be called more than once from any other function.
// TRUE
