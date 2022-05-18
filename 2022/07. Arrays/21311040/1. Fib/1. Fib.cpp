#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int F[N] = { 1,1 };
    for (int k = 2; k < N; k++)
    {
        F[k] = F[k - 2] + F[k - 1];
    }
    for (int k = 0; k < N; k++)
    {
        cout << F[k] << " ";
    }
    return 0;
}