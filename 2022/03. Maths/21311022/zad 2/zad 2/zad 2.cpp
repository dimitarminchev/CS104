#include <iostream>
using namespace std;
int main()
{
    int chislo;
    cin >> chislo;
    int a1 = (chislo / 10000) % 10;
    int a3 = (chislo / 100) % 10;
    int a5 = (chislo / 1) % 10;
    cout << "Sumata na chislata s nechetni pozicii e " << a1 + a3 + a5 << endl;
    return 0;
}