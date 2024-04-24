//13. —умата на естествените числа до зададено число
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int k = 1; k <= n; k++)
    {
        sum = sum + k;
    }

    cout << sum << endl;

    return 0;
}