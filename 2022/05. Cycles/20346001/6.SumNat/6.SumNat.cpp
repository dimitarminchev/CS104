// 6.SumNat
#include <iostream>
using namespace std;
int main()
{
    // vars
    int n, sum = 0;

    // горна граница
    cout << "n=";
    cin >> n;

    // cycle with reppeats
    for (int i = 1; i <= n; i++)
    {
        // +i
        sum = sum + i;
    }

    // sum to n
    cout << "sum = " << sum << " ";
    return 0;
}