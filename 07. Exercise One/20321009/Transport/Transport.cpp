// Транспорт

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Въвеждане на променливи 
    int a, b;


    // Въвеждане на брой места
    cout << "Bus 1: ";
    cin >> a;

    cout << "Bus 2: ";
    cin >> b;


    // Изчисления
    int bus3 = (a + b) / 3;
    int bus1 = bus3 - a;
    int bus2 = bus3 - b;


    // Отпечатване на резултата
    cout << "Bus 1 have: " << bus1 << " passengers";
    cout << endl;
    cout << "Bus 2 have: " << bus2 << " passengers";
    cout << endl;
    cout << "Bus 3 have: " << bus3 << " passengers";


    return 0;
}