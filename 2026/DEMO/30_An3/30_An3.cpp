#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << setprecision(42) << pow((1.0 + (1.0/i)),i) << endl;
    }

    return 0;
}
