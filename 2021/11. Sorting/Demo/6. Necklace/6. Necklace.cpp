#include <iostream>
using namespace std;
int main()
{
    // Input
    int A[100], next, max = 0;
    while (cin >> next)
    {
        A[max] = next;
        max++;
    }

    // Odd & Even
    int odd[100], even[100], odd_index = 0, even_index = 0;
    for (int i = 0; i < max; i++)
    {
        if (A[i] % 2 == 0) // even
        {
            even[even_index] = A[i];
            even_index++;
        }
        else // odd
        {
            odd[odd_index] = A[i];
            odd_index++;
        }
    }

    // Bubble Sort Even Asc
    for (int i = 0; i < even_index; i++)
        for (int j = 0; j < even_index; j++)
            if (even[i] > even[j])
            {
                // Swap
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }

    // Bubble Sort Odd Desc
    for (int i = 0; i < odd_index; i++)
        for (int j = 0; j < odd_index; j++)
            if (odd[i] < odd[j])
            {
                // Swap
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }

    // Print Odd & Even
    for (int i = 0; i < odd_index; i++) cout << odd[i] << " ";
    for (int i = 0; i < even_index; i++) cout << even[i] << " ";
    cout << endl;

    return 0;
}
