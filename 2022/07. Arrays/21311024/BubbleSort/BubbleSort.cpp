#include <iostream>
using namespace std;

const int N = 5;

int A[N];

void input()
{
    for (int i = 0; i < N; i++) cin >> A[i];
}

void print()
{
    for (int i = 0; i < N; i++)  cout << A[i] << " ";
    cout << endl;
}

void bubblesort()
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}
void bubblesort2()
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}

int main()
{
    input();

    bubblesort();
 
    print();

    bubblesort2();
 
    print();

    return 0;
}