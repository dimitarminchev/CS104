#include <iostream>
using namespace std;
int main()
{
    int bus1, bus2, bus3;
    cout << "Passengers in bus1: ";
    cin >> bus1;
    cout << "Passengers in bus2: ";
    cin >> bus2;

    int passengers = bus1 + bus2;
    int perBus = passengers / 3;
    int diff1 = perBus - bus1;
    int diff2 = perBus - bus2;
    cout << "bus 1 = " << diff1 << ", bus 2 = " << diff2 << ", bus 3 = +" << perBus;

    return 0;
}