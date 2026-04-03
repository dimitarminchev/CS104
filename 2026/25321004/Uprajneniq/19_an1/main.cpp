#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << 1.0 / i << " ";
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
