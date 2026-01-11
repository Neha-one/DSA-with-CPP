// // QUES:- Write a program to print all the ASCII values and their equivalent characters of 26 alphabet using a while loop.
#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "enter n: ";
    // cin >> n;
    int i = 65;
    while (i <= 90)
    {
        cout << "ASCII value of  " << "char " << char(i) << " is " << i << endl;
        i++;
    }
}