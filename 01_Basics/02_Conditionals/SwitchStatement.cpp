// Switch statement
// all work by switch can be perform by if-else.
// QUES:- Write a program to create a calculator that performs basic arithmetic operations (+,-,*./,%,**) using switch case. The calculator should input two numbers and an operator from user.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char ope;
    cout << "enter n1: ";
    cin >> n1;
    cout << "enter n2: ";
    cin >> n2;
    cout << "enter operator: ";
    cin >> ope;
    switch (ope)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '%':
        cout << n1 % n2;
        break;
    default:
        cout << "Invalid operator";
    }
}