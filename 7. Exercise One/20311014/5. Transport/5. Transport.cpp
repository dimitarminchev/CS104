#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 31, avg;

    cout << "Number of passagers (Bus 1): ";
    cin >> a;
    cout << "Number of passagers (Bus 2): ";
    cin >> b;

    avg = (a + b + c) / 3;
    int aChange = avg - a;
    int bChange = avg - b;
    int cChange = avg - c;

    cout << "Average: " << avg << "\n\nChanges\nBus 1: " << aChange << "\nBus 2: " << bChange << "\nBus 3: " << cChange << endl;

    return 0;
}
