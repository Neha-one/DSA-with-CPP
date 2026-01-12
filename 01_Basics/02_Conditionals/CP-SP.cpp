// QUES:- if cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main()
{
    int cost_price, selling_price;
    cout << "Please Enter your Cost Price is : ";
    cin >> cost_price;
    cout << "Please Enter your Selling Price: ";
    cin >> selling_price;
    if (cost_price < selling_price)
    {
        cout << "Congratulation! You get Profit of : " << selling_price - cost_price << " ruppes";
    }
    else if (cost_price == selling_price)
    {
        cout << "No Profit! , NO Loss!";
    }
    else
    {
        cout << "Sorry! You get Loss of : " << cost_price - selling_price << " ruppes";
    }
}