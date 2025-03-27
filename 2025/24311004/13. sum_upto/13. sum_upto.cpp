#include <iostream>
using namespace std;
int main()
{
    cout << "n=";
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum;

}