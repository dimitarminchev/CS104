#include <iostream>
using namespace std;

int sum(int a = 1, int b = 2)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    cout << sum() << endl;
    cout << sum(2) << endl;
    cout << sum(2, 3) << endl;

    cout << sum(1.2, 2.1) << endl;

    return 0;
}