#include <iostream>
using namespace std;

int main()
{
    int n;
    bool found = false;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 50 == 0)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "Nqma takiva chisla.";
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
