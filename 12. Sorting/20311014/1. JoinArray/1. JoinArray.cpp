#include <iostream>
using namespace std;

int main()
{
    int num = 0, a, b, c, i, j, k, l, m, n, temp;

    cout << "Enter first array size: ";
    cin >> a;

    int* d1 = new int[a];

    cout << "Enter first array elements: ";
    for (i = 0; i < a; i++)
    {
        cin >> d1[i];
    }

    cout << "\nEnter second array size: ";
    cin >> b;

    int* d2 = new int[b];

    cout << "Enter second array elements: ";
    for (i = 0; i < b; i++)
    {
        cin >> d2[i];
    }

    c = a + b;
    int* d3 = new int[c];

    for (i = 0; i < c; i++)
    {
        if (i < a) d3[i] = d1[i];
        else d3[i] = d2[i - a];
    }

    for (i = 0; i < (c - 1); i++)
    {
        for (j = 0; j < (c - 1); j++)
        {
            if (d3[j] > d3[j + 1])
            {
                temp = d3[j];
                d3[j] = d3[j + 1];
                d3[j + 1] = temp;
            }
        }
    }
    
    cout << "\nNew array:" << endl;
    for (n = 0; n < c; n++) cout << d3[n] << " ";
    cout << endl;

    return 0;
}