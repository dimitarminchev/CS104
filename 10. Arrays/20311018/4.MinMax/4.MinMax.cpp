#include <iostream>
using namespace std;
int main()
{
    int min = 1000, max = -1000, A[1000], n;

    cout << "n=";
    cin >> n;

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }

    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}