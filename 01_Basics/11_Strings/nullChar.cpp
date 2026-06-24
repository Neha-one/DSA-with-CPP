#include <iostream>
using namespace std;
int main()
{

    // print null char but in o/p we get nothing cause it's null.
    char ch = '\0';
    cout << ch;

    // ascii value of null char is 0.
    cout << int(ch);

    string name = "Neha";

    // proving that there is really a null char in last index of string and it's true.
    cout << int(name[4]) << endl; // 0
};