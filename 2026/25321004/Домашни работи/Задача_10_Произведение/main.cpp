#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    long long p = 1;

    cout << "Vuvedi 3 chisla (n m k): ";
    cin >> n >> m >> k;

    for (int i = 1; i <= k; i++)
    {
        p = p * (n + i * m);
    }

    cout << "Rezultat = " << p << endl;

    system("pause");
    return 0;
}
