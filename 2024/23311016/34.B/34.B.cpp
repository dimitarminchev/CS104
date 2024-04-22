#include<iostream>

using namespace std;

double factorial(double n)
{
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main()
{

    cout << ((factorial(42.0))) / ((factorial(6.0)) * (factorial(42.0 - 6.0))) << endl;

    return 0;
}
