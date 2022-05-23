#include <iostream>
using namespace std;

int main()
{
    const int N = 7;
    int Array[N];

    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++)
    {
        cin >> Array[i];
    }

    int min = Array[0], max = Array[0];

    for (int i = 1; i < N; i++)
    {
        if (Array[i] < min) min = Array[i];
        if (Array[i] > max) max = Array[i];
    }

    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}