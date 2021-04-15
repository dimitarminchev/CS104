#include <iostream>
using namespace std;

int main()
{
    int menu;
    float investment, rate;

    cout << "Main Menu: \n";
    cout << "1. Personal Finance \n";
    cout << "2. Perosnal Homeover \n";
    cout << "3. Personal Gold \n";
    cout << "4. Small Business \n";
    cout << "5. Big Business \n";
    cout << "6. Gold Business \n";
    cout << "Choose finance type: ";
    cin >> menu;
    cout << "Enter your investment sum: ";
    cin >> investment;

    if (menu == 1) rate = 2.3;
    else if (menu == 2) rate = 2.6;
    else if (menu == 3) rate = 2.9;
    else if (menu == 4) rate = 3.3;
    else if (menu == 5) rate = 3.5;
    else if (menu == 6) rate = 3.8;

    float sum = investment + (investment * rate) / 100;
    cout << "Investment return (1 year): " << sum << endl;

    return 0;
}
