#include <iostream>
#include<cstdlib>
using namespace std;

const int n = 10;

int a[n];

void Print()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void BubbleSort()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }

    cout << "Randomly generated these " << n << " numbers:\n";
    Print();

    BubbleSort();

    cout << "\nSorting the random numbers:\n";
    Print();

    return 0;
}