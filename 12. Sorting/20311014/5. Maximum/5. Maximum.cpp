#include <iostream>
using namespace std;

int d1[4][4], d3[16], d4[4][4], num, n = 0;

// Sort function
void f_sort()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (d3[j] < d3[j + 1])
            {
                int temp = d3[j];
                d3[j] = d3[j + 1];
                d3[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // First array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> d1[i][j];
        }
    }

    // Second array
    cout << "Enter array size: ";
    cin >> num;

    int* d2 = new int[num];

    cout << "Enter array elements: ";
    for (int k = 0; k < num; k++) cin >> d2[k];

    // Transform 3D array into 2D array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d3[n] = d1[i][j];
            n++;
        }
    }

    f_sort();

    // Merge maximum elements
    for (int i = 0; i < num; i++)
    {
        for (int j = 15; j > 0; j--)
        {
            if (d2[i] > d3[j])
            {
                d3[j] = d2[i];
                break;
            }
        }
    }

    f_sort();

    // Transform 2D array into 3D array
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d4[i][j] = d3[i * 4 + j];
            cout << d4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}