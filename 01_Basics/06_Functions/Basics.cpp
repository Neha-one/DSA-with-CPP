// Note:- function Calling always should be below of function.
// Note:- when we use void for making function then it is not important to give that function a return but when we make function using int or other data types then it is neccessary to use return .

// EXAMPLE 01
//  #include <iostream>
//  using namespace std;

// //here a and b is formal parameter.
// void sum(int a , int b)
// {
//     cout << a + b;
// }
// int main()
// {
//     int a;
//     int b;
//     cout << "enter a";
//     cin >> a;
//     cout << "enter b";
//     cin >> b;

//     //here a and b is actual parameter.
//     sum(a, b);
// }

// EXAMPLE:02
#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout << a + b;
}
int main()
{
    sum(3, 5);
}
