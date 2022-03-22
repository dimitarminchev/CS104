#include <iostream>
using namespace std;

double f(int n)
{
    if (n <= 1)
        return 1;
    else 
        return n * f(n - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;

    double result = f(a) / f(b) * f(a - b);

    cout << "Combinations = " << result << endl;

    return 0;
}