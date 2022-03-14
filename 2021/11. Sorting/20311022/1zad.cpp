#include<iostream>
using namespace std;
int main()
{
    int arrOne[420], arrTwo[420], arrMerge[420];
    int arrOneLenght, arrTwoLenght, arrMergeLength;

    cin >> arrLength;

    int i, k, temp;
    for (i = 0; i < arrLenght; i++)
        cin >> arrOne[i];

    cin >> arrTwoLenght;

    for (i = 0; i < arrTwoLenght; i++)
        cin >> arrTwo[i];

    for (i = 0; i < arrLenght; i++)
    {
        arrMerge[i] = arrOne[i];
    }
    for (k = 0; k < arrTwoLenght; k++)
    {
        arrMerge[i] = arrTwo[k];
        i++;
    }
    arrMergeLength = i;

    for (k = 0; k < (arrMergeLength - 1); k++)
    {
        for (i = 0; i < (arrMergeLength - 1); i++)
        {
            if (arrMerge[i] > arrMerge[i + 1])
            {
                temp = arrMerge[i];
                arrMerge[i] = arrMerge[i + 1];
                arrMerge[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < arrMergeLength; i++)
    {
        if (i == (arrMergeLength - 1))
            cout << arrMerge[i];
        else
            cout << arrMerge[i] << " ";
    }
    cout << endl;
    return 0;
}