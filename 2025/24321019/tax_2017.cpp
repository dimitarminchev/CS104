#include <iostream>
using namespace std;

int main() {
    double income; // variable to store user income
    cout << "Enter income: "; // ask user for their income
    cin >> income; // read the income from console

    double tax = 0; // start tax at 0 by default

    if (income <= 2500)
        tax = 0; // no tax if income is 2500 or less
    else if (income <= 6000)
        tax = (income - 2500) * 0.15; // 15% tax on amount above 2500 up to 6000
    else
        tax = (6000 - 2500) * 0.15 + (income - 6000) * 0.2;
    // 15% on income between 2500 and 6000, plus 20% on income above 6000

    cout << "Tax: " << tax << endl; // print out the total tax calculated
}

/*
#include <iostream>
#include <iomanip> // for controlling decimal precision

int main() {
    double income = 0.0; // store user income, start at zero
    const double taxRate = 0.10;  // flat tax rate of 10% (Bulgaria, 2016)

    std::cout << "Enter your taxable income for 2016 (BGN): "; // ask user for income
    std::cin >> income; // read income from input

    if (income < 0) { // check if income is negative
        std::cerr << "Income cannot be negative!" << std::endl; // error message for invalid input
        return 1; // exit program with error code
    }

    double tax = income * taxRate; // calculate tax as 10% of income

    std::cout << std::fixed << std::setprecision(2); // fix output decimals to 2 places
    std::cout << "Tax to pay to NAP (2016): " << tax << " BGN" << std::endl; // print tax with currency
}
*/
