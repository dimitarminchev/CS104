#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi broi elementi: ";
    cin >> n;

    int arr[100];

    cout << "Vuvedi elementite:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sortiran masiv:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
