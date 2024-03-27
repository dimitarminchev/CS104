//НАП
#include<iostream>

using namespace std;

int main() {
    double income = 0, tax;
    cout << "Enter income for 2015: ";
    cin >> income;

    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + (income - 3000) * 0.20;
    else tax = 1072 + (income - 7200) * 0.22;

    cout << "Tax is " << tax << endl;
    return 0;
}