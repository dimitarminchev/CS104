// Упражнение 6 - сумиране на естествени числса до дадена граница
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << "n=";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "sum=" << sum << " ";

    return 0;
}