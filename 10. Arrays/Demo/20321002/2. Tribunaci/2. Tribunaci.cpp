#include <iostream>
using namespace std;
int main()
{
    const int N = 20;
    int Tri[N] = { 1,1,1 };
    for (int k = 3; k < N; k++)
    {
        Tri[k] = Tri[k - 3] + Tri[k - 2] + Tri[k - 1];
    }
    for (int k = 0; k < N; k++)
    {
        cout << Tri[k] << " ";
    }

    return 0;
}