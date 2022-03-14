#include <iostream>
using namespace std;
int main()
{
    int arr[20], even[20], odd[20], i, j = 0, k = 0, no;

    cout << "Size of Array: ";
    cin >> no;
    cout << "Enter " << no << " elements in the Array: ";
    for (i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < no; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        cout << odd[i] << " " << even[i] << "  ";
    }
	
    return 0;
}