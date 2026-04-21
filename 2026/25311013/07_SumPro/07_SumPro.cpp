#include <iostream>

using namespace std;


int main()
{
    int a;

    cin >> a;

    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    int sum = a1 + a2 + a3+a4;
    int multiplication= a1 * a2 * a3*a4;

    cout << "sum=" << sum << endl;
    cout << "multiplication=" << multiplication << endl;

    return 0;
}