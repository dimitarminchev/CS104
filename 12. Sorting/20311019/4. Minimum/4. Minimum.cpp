#include <iostream>
using namespace std;

const int N = 3;
int d1[N][N], d3[N * N], d4[N][N], num, n = 0, rem = 1;

// Sort function
void f_sort()
{
    for (int i = 0; i < N * N; i++)
    {
        for (int j = 0; j < N * N; j++)
        {
            if (d3[i] < d3[j])
            {
                int temp = d3[i];
                d3[i] = d3[j];
                d3[j] = temp;
            }
        }
    }
}

int main()
{
    // First array
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> d1[i][j];

    // Second array
    cout << "Enter array size: ";
    cin >> num;

    int* d2 = new int[num];

    cout << "Enter array elements: ";
    for (int k = 0; k < num; k++) cin >> d2[k];

    // Transform 3D array into 2D array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            d3[n] = d1[i][j];
            n++;
        }
    }

    f_sort();

    // Merge minimal elements
    for (int i = 0; i < num; i++)
    {
        for (int j = N * N - rem; j > 0; j--)
        {
            if (d2[i] < d3[j])
            {
                d3[j] = d2[i];
                rem++;
                break;
            }
        }
    }

    f_sort();

    // Transform 2D array into 3D array
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            d4[i][j] = d3[i * N + j];
            cout << d4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}