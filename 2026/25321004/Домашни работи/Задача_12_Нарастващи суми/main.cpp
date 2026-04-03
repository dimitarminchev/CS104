#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    int sum = 0;
    int current;

    cout << "Vuvedi n, m i k: ";
    cin >> n >> m >> k;

    for (int i = 1; i <= k; i++)
    {
        current = n + i * m;
        cout << current << " ";
        sum += current;
    }

    cout << endl;
    cout << "S = " << sum << endl;

    system("pause");
    return 0;
}
