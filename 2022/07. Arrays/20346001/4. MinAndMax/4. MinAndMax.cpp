// 4. Min And Max
#include <iostream>
using namespace std;
int main()
{
    // elements
    const int N = 7;

    // Array
    int Array[N];

    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++)
    {
        cin >> Array[i];
    }

    // vars
    int min = Array[0], max = Array[0];

    // min and max
    for (int i = 1; i < N; i++)
    {
        if (Array[i] < min) min = Array[i];
        if (Array[i] > max) max = Array[i];
    }

    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}