#include<iostream>
using namespace std;
int main()
{
    int arrOne[100], arrTwo[100], arrMerge[100];
    int sizeOne, sizeTwo, sizeMerge, i, j, temp;

    cin >> sizeOne;
  
    for (i = 0; i < sizeOne; i++)
        cin >> arrOne[i];
    
    cin >> sizeTwo;

    for (i = 0; i < sizeTwo; i++)
        cin >> arrTwo[i];

    for (i = 0; i < sizeOne; i++)
    {
        arrMerge[i] = arrOne[i];
    }
    for (j = 0; j < sizeTwo; j++)
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