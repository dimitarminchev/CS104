#include <iostream>
using namespace std;
int main()
{
    int next, max = 0, A[100], odd[100], even[100], odd_i = 0, even_i = 0;
    while (cin >> next)
    {
        A[max] = next;
        max++;
    }
    for (int i = 0; i < max; i++)
        for (int j = 0; j < max; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    for (int i = 0; i < max; i++)
    {
        if (A[i] % 2 == 0)
        {
            even[even_i] = A[i];
            even_i++;
        }
        else
        {
            odd[odd_i] = A[i];
            odd_i++;
        }
    }
    for (int i = 0; i < odd_i; i++) cout << odd[i] << " ";
    cout << endl;
    for (int i = 0; i < even_i; i++) cout << even[i] << " ";
    cout << endl;
    return 0;
}