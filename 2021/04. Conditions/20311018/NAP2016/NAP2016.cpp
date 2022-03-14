#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float income;
    float tax;

    cout << "Please enter your 2016 Income: ";
    cin >> income;

    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 1620) * 0.18;
    else if (income <= 7200) tax = 168 + ((income - 1620) * 0.20);
    else if (income > 7200) tax = 1072 + ((income - 3000) * 0.22);
    cout << "You must pay tax: " << tax;
}