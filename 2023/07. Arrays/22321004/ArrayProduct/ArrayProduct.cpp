#include <iostream>
using namespace std;
int main()
{
    const int N = 100;
    double A[N];

    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    double pro = 1;
    for (int i = 0; i < N; i++)
    {
        pro *= A[i];
    }
    cout << "Product of " << N << " elements is equal to " << pro << endl;

    return 0;
}