#include <iostream>
using namespace std;

int main()
{
    double S, Vk, Vt, V;

    cout << "Vuvedi S, Vk, Vt: ";
    cin >> S >> Vk >> Vt;

    V = Vk + Vt;

    if (V <= 0)
    {
        cout << "Koraabut ne moje da se dviji." << endl;
    }
    else
    {
        cout << "Vreme = " << S / V << endl;

        if (Vt < 0)
        {
            cout << "Koraabut e sreshtu techenieto" << endl;
        }
        else if (Vt > 0)
        {
            cout << "Koraabut e po techenieto" << endl;
        }
        else
        {
            cout << "Koraabut se dviji bez techenie" << endl;
        }
    }

    cin.get();
    cin.get();
    return 0;
}
