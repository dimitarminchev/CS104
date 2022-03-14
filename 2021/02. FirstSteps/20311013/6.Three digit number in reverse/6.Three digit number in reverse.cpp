#include <iostream>
using namespace std;

int main()
{
    int a, a1, a2, a3;
    cout << "3 Digit Number: ";
    cin >> a;
    a3 = (a / 100) % 10;
    a2 = (a / 10) % 10;
    a1 = (a / 1) % 10;
    cout << a << " Reversed: " << a1 << a2 << a3;
    return 0;
}