// nap_2016.cpp = Дължим данък към НАП за 2016

#include <iostream>
using namespace std;

int main() {
    double annualIncome;
    cout << "Enter your annual income for 2016: ";
    cin >> annualIncome;

    // Flat tax rate of 10%
    double tax = 0.10 * annualIncome;

    cout << "Tax due for 2016 is: " << tax << " BGN" << endl;
    return 0;
}
