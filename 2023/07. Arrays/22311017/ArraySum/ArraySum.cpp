#include<iostream>
using namespace std;
int main()
{
    const int N = 100;

    
    double A[N];

    
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    cout << "Sum of " << N << " elements is equal to " << sum << endl;

    return 0;
}