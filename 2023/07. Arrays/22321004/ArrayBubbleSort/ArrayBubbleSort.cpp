/#include <iostream>
#include<cstdlib>
using namespace std;

const int N = 10;

int A[N];

void Print()
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void BubbleSort()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    for (int i = 0; i < N; i++)
    {
        A[i] = rand();
    }

    cout << "Random generated " << N << " numbers:\n";
    Print();

    BubbleSort();

    cout << "\nSorted numbers:\n";
    Print();

    return 0;
}