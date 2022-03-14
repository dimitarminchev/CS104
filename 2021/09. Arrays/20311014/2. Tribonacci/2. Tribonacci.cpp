#include <iostream>
using namespace std;

int main()
{
    const int n = 20;
    int Tri[n] = { 1,1,1 };

    for (int i = 3; i < n; i++)
        Tri[i] = Tri[i - 3] + Tri[i - 2] + Tri[i - 1];

    for (int j = 0; j < n; j++)
        cout << Tri[j] << " ";

    return 0;
}
