// Ques: Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x = 3452345;
    //convert int to string;
    string s = to_string(x);

    //checking is it string or not:
    s = s + "dd";
    cout << s;
};
