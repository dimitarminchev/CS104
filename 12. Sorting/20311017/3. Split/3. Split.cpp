#include <iostream>
using namespace std;
int main()
{
    int A[100], next, max = 0;
    while (cin >> next)
    {
        A[max] = next;
        max++;
    }

    for (int i = 0; i < max; i++)
        for (int j = 0; j < max; j++)
            if (A[i] < A[j])
            {
                
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }

    int odd[100], even[100], odd_index = 0, even_index = 0;
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


    for (int i = 0; i < odd_index; i++) cout << odd[i] << " ";
    cout << endl;

   
    for (int i = 0; i < even_index; i++) cout << even[i] << " ";
    cout << endl;

    return 0;
}