#include <iostream>
using namespace std;
int main()
{
    int const n = 20;
    int Tri[n] = { 1,1,1 };
    for (int k = 3; k < n; k++)
    {
        Tri[k] = Tri[k - 3] + Tri[k - 2] + Tri[k - 1];
    }
    for (int k = 0; k < n; k++)
    {
        cout << Tri[k] << " ";
    }
    return 0;
}