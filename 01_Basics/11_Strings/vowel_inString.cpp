// count number of vowels in a given string.
#include <iostream>
using namespace std;
int main()
{

    string n = "Neha Kumari Baranwal";
    cout << n;
    cout << endl;

    int count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'o' || n[i] == 'i' || n[i] == 'u')
        {
            count++;
        }
    }
    cout << "Number of vowels in my name is : " << count;
};