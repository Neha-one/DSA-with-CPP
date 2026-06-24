#include <iostream>
using namespace std;
int main()
{

    string name = "Neha";
    cout << name << " " << name.length() << endl; // Neha 4

    // plus opertor work as append or push.
    name = name + " Kumari";
    cout << name << " " << name.length() << endl; // Neha 0

    name = "Algo" + name;
    cout << name << " " << name.length() << endl; // Neha 0
};
