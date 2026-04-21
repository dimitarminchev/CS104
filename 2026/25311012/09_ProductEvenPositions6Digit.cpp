#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter Number: ";
    cin >> a;

    int a6 = (a / 100000) % 10;
    int a5 = (a / 10000) % 10;
    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    cout << a5 * a3 * a1 << endl;

    return 0;
}