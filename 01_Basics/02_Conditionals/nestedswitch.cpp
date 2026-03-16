#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    char ch = 'a';
    switch (num)
    {
    case 1:
        cout << "number 1";
        break;
    case 2:
        cout << "number 2";
        break;
    case 3:
        switch (ch)
        {
        case 'a':
            cout << "this is a character";
            break;
        }
        break;
    default:
        cout << "go ahead";
    }
}