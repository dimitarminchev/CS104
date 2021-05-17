#include <iostream>
using namespace std;
int main()
{

    int menu; 
    float investment;
    float rate; 


    cout << "Personale Finances 1.0 Main Menu:" << endl;
    cout << "1. Personal Finance" << endl;
    cout << "2. Perosnal Homeover" << endl;
    cout << "3. Personal Gold" << endl;
    cout << "4. Small Business" << endl;
    cout << "5. Big Business" << endl;
    cout << "6. Gold Business" << endl;
    cout << "Make your choise: ";
    cin >> menu;
    cout << "Please enter your investment sum: ";
    cin >> investment;

    // Определяне на лихвата по депозита ver.2
    switch(menu)
    {
        case 1: 
        {
            rate = 2.3;
            break;
        }
        case 2:
        {
            rate = 2.6;
            break;
        }
        case 3:
        {
            rate = 2.9;
            break;
        }
        case 4:
        {
            rate = 3.3;
            break;
        }
        case 5:
        {
            rate = 3.5;
            break;
        }
        case 8:
        {
            rate = 3.8;
            break;
        }
    }

    float sum = investment + (investment * rate) / 100;
    cout << "Deposit total: " << sum << endl;

    return 0;
}
