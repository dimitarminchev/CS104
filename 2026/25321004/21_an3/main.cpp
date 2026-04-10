#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double value = pow(1 + 1.0 / i, i);
        cout << value << " ";
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
