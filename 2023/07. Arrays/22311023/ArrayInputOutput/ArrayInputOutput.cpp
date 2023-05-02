#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    const int N = 10;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}