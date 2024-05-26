#include <iostream>
using namespace std;

int main()
{
    double income = 0, tax;
    cout << "Your income for 2015: ";
    cin >> income;

    if (income <= 2160)
    {
        tax = 0;
    }
    else if (income <= 3000)
    {
        tax = (income - 2160) * 0.18;
    }
    else if (income <= 7200)
    {
        tax = 168 + (income - 3000) * 0.2;
    }
    else tax = 1072 + (income - 7200) * 0.22;

    cout << "Your tax for the year: " << tax << endl;
    return 0;
}