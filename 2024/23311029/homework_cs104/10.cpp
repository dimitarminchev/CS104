#include <iostream>
using namespace std;
int main() {
    int kg, g, prodadeniKg, prodadeniG, krainiKg, krainiG;
    cin >> kg >> g >> prodadeniKg >> prodadeniG;

    if(g < prodadeniG)
    {
        kg--;
        g += 1000;
        krainiG = g - prodadeniG;
    }
    else {
        krainiG = g - prodadeniG;
    }
    krainiKg = kg - prodadeniKg;
    
    cout << krainiKg << "kg " << krainiG << "g";
    return 0;
}
