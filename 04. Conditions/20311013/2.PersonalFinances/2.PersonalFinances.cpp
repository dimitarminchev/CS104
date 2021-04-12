#include <iostream>
using namespace std;
int main()
{
    int menu;
    float rate, invst, sum;
    cout << "Personal Finances 1.0 Menu:" << endl;
    cout << " 1. Personal Finance" << endl;
    cout << " 2. Personal Homeover" << endl;
    cout << " 3. Personal Gold" << endl;
    cout << " 4. Small Business" << endl;
    cout << " 5. Big Business" << endl;
    cout << " 6. Gold Business" << endl << endl;
    cout << "Make your choice: ";
    cin >> menu;
    cout << "Please enter your investment sum: ";
    cin >> invst;

    switch (menu)
    {
    case 1: {rate = 2.3; break; }
    case 2: {rate = 2.6; break; }
    case 3: {rate = 2.9; break; }
    case 4: {rate = 3.3; break; }
    case 5: {rate = 3.5; break; }
    case 6: {rate = 3.8; break; }
    }
    sum = invst + (invst + rate) / 100;
    cout << "Deposit: " << sum;
    return 0;
}