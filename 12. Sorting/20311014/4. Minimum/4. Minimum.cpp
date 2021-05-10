#include <iostream>
using namespace std;

int main()
{
    int d1[3][3], d3[9], d4[3][3], num, n = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> d1[i][j];
        }
    }

    cout << "Enter array size: ";
    cin >> num;

    int* d2 = new int[num];

    cout << "Enter array elements: ";
    for (int k = 0; k < num; k++) cin >> d2[k];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            d3[n] = d1[i][j];
            n++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (d3[j] > d3[j + 1])
            {
                int temp = d3[j];
                d3[j] = d3[j + 1];
                d3[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 9; j > 0; j--)
        {
            if (d2[i] < d3[j])
            {
                d3[j] = d2[i];
                break;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (d3[j] > d3[j + 1])
            {
                int temp = d3[j];
                d3[j] = d3[j + 1];
                d3[j + 1] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            d4[i][j] = d3[i*3 + j];
            cout << d4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}