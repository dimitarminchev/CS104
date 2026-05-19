#include <iostream>
using namespace std;
int main()
{
    int A[10] = {2, 2, -1, -1, -1, 3, 5, -2, -2, 4};

    int min = 1000;
    int max = -1000;

    for (int k = 0; k < 10; k++)
    {
        if (A[k] < min)
            min = A[k];

        if (A[k] > max)
            max = A[k];

        cout << A[k] << " ";
    }

    cout << endl;

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}