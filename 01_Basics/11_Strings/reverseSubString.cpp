// Ques: Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt funcions.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string name = "Neha Kumari Baranwal";
    cout << name << endl;

    // reverse

    reverse(name.begin() + 2, name.begin() + 5);
    cout << name << endl;
};
