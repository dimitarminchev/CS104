#include <iostream>
using namespace std;

int main()
{
    int n, min, max;

    cout << "n = ";
    cin >> n;

    int* A = new int[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min = A[i];
            max = A[i];
        }
        else if (A[i] < min) min = A[i];
        else if (A[i] > max) max = A[i];
    }

    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}