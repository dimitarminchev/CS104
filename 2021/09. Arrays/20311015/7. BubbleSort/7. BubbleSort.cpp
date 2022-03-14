#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    int* A = new int[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << A[i] << " ";

    return 0;
}