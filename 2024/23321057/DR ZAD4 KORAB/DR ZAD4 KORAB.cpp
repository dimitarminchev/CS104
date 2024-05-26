// DR ZAD4 KORAB
#include <iostream>
using namespace std;

int main() 
{
    int S, Vk, Vt;
    cin >> S >> Vk >> Vt;
    int t = S / (Vk + Vt);
    cout << "Vreme = " << t << endl;
    if (Vt > 0) 
    {
        cout << "Korabat e po techenieto." << endl;
    }
    else 
    {
        cout << "Korabat e sreshtu techenieto." << endl;
    }
    return 0;
}

