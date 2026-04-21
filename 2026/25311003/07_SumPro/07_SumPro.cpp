#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a four-digit integer: ";
    if (!(cin >> n)) {
        cerr << "Input error\n";
        return 1;
    }

    int absn = (n < 0) ? -n : n;
    if (absn < 1000 || absn > 9999) {
        cerr << "Please enter a four-digit number (1000-9999 or -1000 to -9999).\n";
        return 1;
    }

    int d1 = absn / 1000;
    int d2 = (absn / 100) % 10;
    int d3 = (absn / 10) % 10;
    int d4 = absn % 10;

    int sum = d1 + d2 + d3 + d4;
    int product = d1 * d2 * d3 * d4;

    cout << "Digits: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << d4 << '\n';
    cout << "Sum: " << sum << '\n';
    cout << "Product: " << product << '\n';

    return 0;
}