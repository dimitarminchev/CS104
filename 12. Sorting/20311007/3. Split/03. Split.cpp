#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100];
    int evenArr[100];
    int oddArr[100];
    int j = 0, k = 0,n, temp;


    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[j] = arr[i];
            j++;
        }
        else
        {
            oddArr[k] = arr[i];
            k++;
        }
    }

    for (int i = k-1; i >= 0; i--)
    {
        cout << oddArr[i] << " ";
    }
    cout << endl;
    for (int i = j-1; i >= 0; i--)
    {
        cout << evenArr[i] << " ";
    }
    cout << endl;
    return 0;
}