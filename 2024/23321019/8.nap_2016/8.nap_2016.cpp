// Дължим данък към НАП за 2016
#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your income for 2016: ";
    cin >> income;

    double tax = 0;

    if (income <= 8400) {
        tax = income * 0.1;
    }
    else if (income <= 25000) {
        tax = 8400 * 0.1 + (income - 8400) * 0.15;
    }
    else if (income <= 60000) {
        tax = 8400 * 0.1 + (25000 - 8400) * 0.15 + (income - 25000) * 0.25;
    }
    else {
        tax = 8400 * 0.1 + (25000 - 8400) * 0.15 + (60000 - 25000) * 0.25 + (income - 60000) * 0.3;
    }

    cout << "Your tax for 2016 is: " << tax << " BGN" << endl;

    return 0;
}