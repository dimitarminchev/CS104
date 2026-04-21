#include <iostream>
using namespace std;

int main()
{
    int V, D1, D2, D3;
    int D, time;

    cout << "Vuvedi V, D1, D2, D3: ";
    cin >> V >> D1 >> D2 >> D3;

    D = D1 + D2 + D3;

    if (D > 0)
    {
        time = V / D;
        cout << time << endl;
    }
    else
    {
        cout << "Baseinut ne moje da se napulni." << endl;
    }

    if (D1 < 0 || D2 < 0 || D3 < 0)
    {
        cout << "Edna ot trubite izprazva baseina." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
