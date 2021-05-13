#include <iostream>
using namespace std;

int main()
{
    int num = 0, a, b, c;

    cout << "Enter first array size: ";
    cin >> a;

    int* d1 = new int[a];

    cout << "Enter first array elements: ";
    for (int i = 0; i < a; i++) cin >> d1[i];

    cout << "\nEnter second array size: ";
    cin >> b;

    int* d2 = new int[b];

    cout << "Enter second array elements: ";
    for (int i = 0; i < b; i++) cin >> d2[i];

    c = a + b;
    int* d3 = new int[c];

    // Merge arrays
    for (int i = 0; i < c; i++)
    {
        if (i < a) d3[i] = d1[i];
        else d3[i] = d2[i - a];
    }

    // Sort array
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (d3[i] < d3[j])
            {
                int temp = d3[i];
                d3[i] = d3[j];
                d3[j] = temp;
            }
        }
    }

    cout << "\nNew array:" << endl;
    for (int n = 0; n < c; n++) cout << d3[n] << " ";
    cout << endl;

    return 0;
}