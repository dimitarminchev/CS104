#include <iostream>
using namespace std;

int main()
{
    double a, b;
    double p, s;

    cout << "Vuvedi strana a: ";
    cin >> a;

    cout << "Vuvedi strana b: ";
    cin >> b;

    p = 2 * (a + b);
    s = a * b;

    cout << "Perimetur = " << p << endl;
    cout << "Lice = " << s << endl;

    cin.get();
    cin.get();
    return 0;
}
