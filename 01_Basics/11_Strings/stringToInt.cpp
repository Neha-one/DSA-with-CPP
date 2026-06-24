#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string name = "99999";
    int x = stoi(name);

    cout << x << endl;

    // checking is it convert into a int or not:
    cout << x + 1; // 100000
};
