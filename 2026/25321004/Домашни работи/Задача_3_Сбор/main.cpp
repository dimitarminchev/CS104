#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Vuvedi a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        a = c - b;
        cout << a << endl;
    }
    else if (b == 0)
    {
        b = c - a;
        cout << b << endl;
    }
    else if (c == 0)
    {
        c = a + b;
        cout << c << endl;
    }
    else
    {
        cout << "Nqma lipsvashto chislo." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
