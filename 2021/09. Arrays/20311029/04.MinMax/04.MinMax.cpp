#include <iostream>

using namespace std;

int main()
{
    int min = INT_MAX, max = INT_MIN, A[500], n;

    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> A[i];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
            min = A[i];

        if (A[i] > max)
            max = A[i];
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}