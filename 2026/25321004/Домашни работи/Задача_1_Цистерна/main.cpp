#include <iostream>
using namespace std;

int main()
{
    int v;
    int bothTimes;
    int remainder;

    cout << "Vuvedi obem: ";
    cin >> v;

    bothTimes = v / 5;      // 2 + 3 = 5 litra
    remainder = v % 5;

    cout << bothTimes << " puti dvete kofi." << endl;

    if (remainder == 0)
    {
        cout << "Nqma ostatuk." << endl;
    }
    else if (remainder == 1)
    {
        cout << "Ostava 1 litar, mojhem da izpolzvame kofata ot 2 litra." << endl;
    }
    else if (remainder == 2)
    {
        cout << "Ostava 2 litra, mojhem da izpolzvame kofata ot 2 litra." << endl;
    }
    else if (remainder == 3)
    {
        cout << "Ostava 3 litra, mojhem da izpolzvame kofata ot 3 litra." << endl;
    }
    else if (remainder == 4)
    {
        cout << "Ostavat 4 litra, mojhem da izpolzvame i dvete kofi oshte vednuj pootdelno." << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
