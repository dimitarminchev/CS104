#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    const int N = 10;

    // Declaring an array with N elements
    int A[N];

    // Entering numbers at specified array indices
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Output numbers at specified array indices
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}