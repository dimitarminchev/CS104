#include<iostream>
using namespace std;
int main()
{
    const int N = 100;

    // Declaring an array with N elements
    double A[N];

    // We fill the array with numbers
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    // Finding a sum
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    cout << "Sum of " << N << " elements is equal to " << sum << endl;

    return 0;
}