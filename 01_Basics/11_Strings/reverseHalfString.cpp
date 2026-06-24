// Ques: Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string name = "Neha";
    cout << name << endl; // Neha 4
    int n = name.length();
    cout << n;

    // reverse

    reverse(name.begin(), name.begin() + n / 2);
    cout << name << endl;
};
