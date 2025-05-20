#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    for (float i = 1; i <= n; i++)
    {
        cout << (1.0 / pow(i, 2)) << endl;
    }

    return 0;
}