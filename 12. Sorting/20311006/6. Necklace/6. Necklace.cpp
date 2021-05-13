#include <iostream>
using namespace std;
int main()
{
    int A[100], n;
    int max = 0;
    while (cin >> n)
    {
        A[max] = n;
        max++;
    }
    int odd[100], even[100];
    int odd_index = 0, even_index = 0;
    for (int i = 0; i < max; i++)
    {
        if (A[i] % 2 == 0)
        {
            even[even_index] = A[i];
            even_index++;
        }
        else
        {
            odd[odd_index] = A[i];
            odd_index++;
        }
    }
    for (int i = 0; i < odd_index; i++)
        for (int j = 0; j < odd_index; j++)
            if (odd[i] < odd[j])
            {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
    for (int i = 0; i < even_index; i++)
        for (int j = 0; j < even_index; j++)
            if (even[i] > even[j])
            {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
    for (int i = 0; i < odd_index; i++) cout << odd[i] << " ";
    for (int i = 0; i < even_index; i++) cout << even[i] << " ";
    cout << endl;
    return 0;
}