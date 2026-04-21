#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b, c;
    int p;

    cout << "Vuvedi tricifreno chislo: ";
    cin >> n;

    a = n / 100;          // stotici
    b = (n / 10) % 10;    // desetici
    c = n % 10;           // edinici

    p = a * b * c;

    cout << "Proizvedenie = " << p << endl;

    if (p != 0 && n % p == 0)
    {
        cout << "Chisloto e kratno na cifrite si." << endl;
    }
    else
    {
        cout << "Chisloto ne e kratno na cifrite si." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
