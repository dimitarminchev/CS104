#include <iostream>
#include<cstdlib>
using namespace std;

// Number of items
const int N = 10;

// We create an array with 10 elements
int A[N];

// Procedure to print an array
void Print()
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Sort by the bubble method
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

// Main method of the program
int main()
{
    srand((unsigned)time(NULL));

    // Generates random numbers
    for (int i = 0; i < N; i++)
    {
        A[i] = rand();
    }

    // Print the numbers
    cout << "Random generated " << N << " numbers:\n";
    Print();

    // Sort by the bubble method
    BubbleSort();

    // Print the numbers
    cout << "\nSorted numbers:\n";
    Print();

    return 0;
}