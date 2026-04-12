#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double d, x1, x2;

    cout << "Vuvedi a: ";
    cin >> a;

    cout << "Vuvedi b: ";
    cin >> b;

    cout << "Vuvedi c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Tova ne e kvadratno uravnenie!" << endl;
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "Dva realni korena:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "Edin dvoen koren: x = " << x1 << endl;
    }
    else
    {
        cout << "Nqma realni koreni." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
