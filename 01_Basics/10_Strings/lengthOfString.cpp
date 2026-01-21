#include <iostream>
using namespace std;
int main()
{

    string n = "Neha Kumari Baranwal ";
    
    cout << n.length() << endl; // 4

    // print name;
    for (int i = 0; i < n.length(); i++)
    {
        cout << n[i];
    }
};