#include <iostream>
using namespace std;
int main()
{

    string name = "Neha";
    cout << name << " " << name.length() << endl; // Neha 4

    // clear
    name.clear();
    cout << name << " " << name.length() << endl; // Neha 0
};
