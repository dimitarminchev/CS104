#include <iostream>
using namespace std;
int main()
{
    const int N = 100;
    double tri[N] = { 1,1,1 };

    for (int k = 3; k < N; k++)
    {
        tri[k] = tri[k - 1] + tri[k - 2] + tri[k - 3];
    }
    for (int k = 0; k < N; k++)
        cout << tri[k] << " ";
    return 0;
}
