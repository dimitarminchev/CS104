#include <iostream>
using namespace std;

int main()
{
    int n;
    double x, sum = 0, power = 1;

    cout << "Vuvedi x: ";
    cin >> x;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        power *= x;      // изчислява x^i
        sum += power;    // добавя към сумата
    }

    cout << "Sumata e: " << sum << endl;

    cin.get();
    cin.get();
    return 0;
}

