#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int chosenVariant;

    float investment;
    float rate;

    cout << "Personale Finances Main Menu:\n";
    cout << "1 - Personal Finance\n";
    cout << "2 - Perosnal Homeover\n";
    cout << "3 - Personal Gold\n";
    cout << "4 - Small Business\n";
    cout << "5 - Big Business\n";
    cout << "6 - Gold Business\n";
    cout << "Make your choise: ";
    cin >> chosenVariant;

    cout << "Please enter your investment sum: ";
    cin >> investment;

    if (chosenVariant == 1) rate = 2.3;

    else if (chosenVariant == 2) rate = 2.6;

    else if (chosenVariant == 3) rate = 2.9;

    else if (chosenVariant == 4) rate = 3.3;

    else if (chosenVariant == 5) rate = 3.5;

    else if (chosenVariant == 6) rate = 3.8;

    else rate = 0;

    float sum = investment + (investment * rate) / 100;
    cout << "Deposit total: " << sum << endl;

    return 0;
}