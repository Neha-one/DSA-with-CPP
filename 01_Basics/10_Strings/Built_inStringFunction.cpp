#include <iostream>
using namespace std;
int main()
{

    string name = "Neha Kumari Baranwal";
    cout << name;
    cout << endl;

    for (int i = 0; i < name.length(); i++)
    {
        if (i % 2 == 0)
        {
            name[i] = 'a';
        }
        cout << name[i];
    }
};