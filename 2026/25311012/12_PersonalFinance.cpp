#include <iostream>
using namespace std;

int main()
{
   float investment;
   cout << "Enter the amount of money you want to invest: ";
    cin >> investment;

    int menu;
    cout << "Bank Finance Menu:" << endl;
    cout << "1) 2%" << endl;
    cout << "2) 3%" << endl;
    cout << "3) 4%" << endl;
    cout << "4) 5%" << endl;
    cout << "Chose the interest rate: ";
    cin >> menu;

    float receive = 0;

    if (menu == 1)
    {
        receive = investment + investment * 0.02;
    }
    else if (menu == 2)
    {
        receive = investment + investment * 0.03;
    }
    else if (menu == 3)
    {
        receive = investment + investment * 0.04;
    }
    else if (menu == 4)
    {
        receive = investment + investment * 0.05;
    }
    else
    {
        cout << "Invalid choice." << endl;
        return 0;
    }

    cout << "The amount you will receive after one year is: " << receive << endl;
    
    return 0;
}