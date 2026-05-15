#include <iostream>
using namespace std;
int main()
{
    int A[10] = { 5,2,8,1,9,3,7,4,6,0 };

    cout << "Before sorting:" << endl;

    for (int k = 0; k < 10; k++)
    {
        cout << A[k] << " ";
    }

    cout << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "After sorting:" << endl;

    for (int k = 0; k < 10; k++)
    {
        cout << A[k] << " ";
    }

    return 0;
}