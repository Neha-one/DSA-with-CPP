// Ques: Write a program to store roll number and marks obtained by 4 students side by side in a matrix.

#include <iostream>
using namespace std;
int main()
{

    int arr[4][2] = {{1, 98},
                     {2, 97},
                     {3, 96},
                     {4, 95}};
    cout << "\nRoll No  Marks\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "         ";
        }
        cout << endl;
    }

    // 2nd method:
    // take value by user:

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         if (j == 0)
    //         {
    //             cout << "enter roll number of student " << i + 1 << " ";
    //         }
    //         else

    //         {
    //             cout << "enter marks number of student" << i + 1 << " ";
    //         }
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << "\nRoll No  Marks\n";

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << "         ";
    //     }
    //     cout << endl;
    // }


    
    // 3rd method:- using one loop:-
    //  for (int i = 0; i < 4; i++)
    //  {
    //      cout << "Enter roll number of student " << i + 1 << ": ";
    //      cin >> arr[i][0];

    //     cout << "Enter marks of student " << i + 1 << ": ";
    //     cin >> arr[i][1];
    // }

    // cout << "\nRoll Number  Marks\n";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i][0] << "          " << arr[i][1] << endl;
    // }

    return 0;
};