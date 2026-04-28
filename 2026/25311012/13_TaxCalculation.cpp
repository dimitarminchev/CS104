#include <iostream>
using namespace std;

int main()
{
    float income;
    float tax;

    cout << "Enter your income: ";
    cin >> income;

    if (income < 1720)
    {
        cout << "No tax required." << endl;
    }
    else if (income <= 3000)
    {
        tax = (income - 1720) * 0.20;
        cout << "Tax = " << tax << " lv " << endl;
    }
    else if (income <= 7200)
    {
        tax = 120 + (income - 3000) * 0.22;
        cout << "Tax = " << tax << " lv " << endl;
    }
    else
    {
        tax = 1072 + (income - 7200) * 0.24;
        cout << "Tax = " << tax << " lv " << endl;
    }

    return 0;
}
 