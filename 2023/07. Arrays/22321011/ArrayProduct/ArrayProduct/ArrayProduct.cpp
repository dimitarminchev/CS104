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

    // Finding a product
    double pro = 1;
    for (int i = 0; i < N; i++)
    {
        pro *= A[i];
    }
    cout << "Product of " << N << " elements is equal to " << pro << endl;

    return 0;
}