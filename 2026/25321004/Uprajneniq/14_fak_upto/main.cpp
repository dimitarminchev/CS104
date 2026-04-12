#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "Faktorialut e: " << fact << endl;

    cin.get();
    cin.get();
    return 0;
}
