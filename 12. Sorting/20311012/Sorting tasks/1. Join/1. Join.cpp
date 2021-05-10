// 1. Join.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
    int n, m, sizeMerge, i, j, temp;
    cout << "Enter the Size for First Array: ";
    cin >> n;
    cout << "Enter the Size for Second Array: ";
    cin >> m;
    cout << "\nEnter " << n << " Elements for First Array: ";
    for (i = 0; i < n; i++)
        cin >> arrOne[i];
    cout << "\nEnter " << m << " Elements for Second Array: ";
    for (i = 0; i < m; i++)
        cin >> arrTwo[i];

    for (i = 0; i < n; i++)
    {
        arrMerge[i] = arrOne[i];
    }
    for (j = 0; j < m; j++)
    {
        arrMerge[i] = arrTwo[j];
        i++;
    }
    sizeMerge = i;


    for (j = 0; j < (sizeMerge - 1); j++)
    {
        for (i = 0; i < (sizeMerge - 1); i++)
        {
            if (arrMerge[i] > arrMerge[i + 1])
            {
                temp = arrMerge[i];
                arrMerge[i] = arrMerge[i + 1];
                arrMerge[i + 1] = temp;
            }
        }
    }
    cout << "\nSorted new array:\n";
    for (i = 0; i < sizeMerge; i++)
    {
        if (i == (sizeMerge - 1))
            cout << arrMerge[i];
        else
            cout << arrMerge[i] << " ";
    }
    cout << endl;
    return 0;
}