#include <iostream>
using namespace std;

int main()
{
    int a, a1,a3,a5, um;
    cout << "6 Digit Number: ";
    cin >> a;
    a5 = (a / 10000) % 10;
    a3 = (a / 100) % 10;
    a1 = (a / 1) % 10;
    um = a1 * a3 * a5;
    cout << "\"Proizvedenie\": " << um << endl;
    return 0;
}