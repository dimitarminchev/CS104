#include <iostream>
using namespace std;

int main()
{
    double r;
    double p, s, v;
    const double pi = 3.14;

    cout << "Vuvedi radius r: ";
    cin >> r;

    p = 2 * pi * r;
    s = pi * r * r;
    v = (4.0 / 3.0) * pi * r * r * r;

    cout << "Perimetur na krug = " << p << endl;
    cout << "Lice na krug = " << s << endl;
    cout << "Obem na sfera = " << v << endl;

    cin.get();
    cin.get();
    return 0;
}
