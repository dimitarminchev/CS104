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
    for (j = 0; j < b; j++)
    {
        cin >> d2[j];
    }

    c = a + b;
    int* d3 = new int[c];

    for (k = 0; k < c; k++)
    {
        if (k < a) d3[k] = d1[k];
        else d3[k] = d2[k - a];
    }

    for (l = 0; l < (c - 1); l++)
    {
        for (m = 0; m < (c - 1); m++)
        {
            if (d3[m] > d3[m + 1])
            {
                temp = d3[m];
                d3[m] = d3[m + 1];
                d3[m + 1] = temp;
            }
        }
    }
    
    cout << "\nNew array:" << endl;
    for (n = 0; n < c; n++) cout << d3[n] << " ";
    cout << endl;

    return 0;
}