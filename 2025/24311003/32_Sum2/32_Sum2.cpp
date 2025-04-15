//f = sum k=[1..n] (-1)'k * x'k
#include <iostream>

#include <cmath>
using namespace std;
int main()
{
    int n, x;

    cout << "n= ";
    cin >> n;
    cout << "x= ";
    cin >> x;

    float sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += pow(-1, k) * pow(x, k);
    }
    cout << sum << endl;
}

