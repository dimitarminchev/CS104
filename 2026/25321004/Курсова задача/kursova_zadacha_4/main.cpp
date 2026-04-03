#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    int n;
    double f = 0.0;

    cout << "Vuvedi x: ";
    cin >> x;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        f += pow(x, k) / k;
    }

    cout << fixed << setprecision(6);
    cout << "Stoinost na funkciqta f = " << f << endl;

    system("pause");
    return 0;
}
