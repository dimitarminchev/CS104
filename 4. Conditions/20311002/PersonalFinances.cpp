{#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int menu;
    float investment;
    float rate;

    cout << "Personale FInances 1.0 Main Menu: " << endl;
    cout << "1. Personal Finance" << endl;
    cout << "2. Personal Homeover" << endl;
    cout << "3. Personal Gold" << endl;
    cout << "4. Small Business" << endl;
    cout << "5. Big Business" << endl;
    cout << "6. Gold Business" << endl;
    cout << "Make your choise: ";
    cin >> menu;

    cout << "Please emter your investment sum: ";
    cin >> investment;

    if (menu == 1) rate = 2.3;
    else if (menu == 2) rate = 2.6;
    else if (menu == 3) rate = 2.9;
    else if (menu == 4) rate = 3.3;
    else if (menu == 5) rate = 3.5;
    else if (menu == 6) rate = 3.8;

    float sum = sum + (sum * rate) / 100;
    cout << "Deposit total: " << sum << endl;
    return 0;
}