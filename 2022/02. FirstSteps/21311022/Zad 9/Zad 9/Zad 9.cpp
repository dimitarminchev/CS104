#include <iostream>
using namespace std;
int main()
{
    int chislo;
    cin >> chislo;
    int a2 = (chislo / 10000) % 10;
    int a4 = (chislo / 100) % 10;
    int a6 = (chislo / 1) % 10;
    cout << "Sumata na chislata s nechetni pozicii e " << a2 * a4 * a6 << endl;
    return 0;
}