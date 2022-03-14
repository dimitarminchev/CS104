#include <iostream>
using namespace std;

int main()
{
    int a, a1, a2, a3,a4,sum,um;
    cout << "4 Digit Number: ";
    cin >> a;
    a4 = (a / 1000) % 10;
    a3 = (a / 100) % 10;
    a2 = (a / 10) % 10;
    a1 = (a / 1) % 10;
    sum = a1 + a2 + a3 + a4;
    um = a1 * a2 * a3 * a4;
    cout << "Sum: " << sum << ", \"Proizvedenie\": " << um << endl;
    return 0;
}