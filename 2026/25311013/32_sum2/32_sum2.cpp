#include <iostream>
using namespace std;


int main()
{
    int x, n;

    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    double sum = 0;
    for (int k = 1; k <= n; k++) {
        double Ak = pow((-1), k) * pow(x, k);
        sum = sum + Ak;

    }

    cout << "sum=" << sum << endl;
    return 0;
}
