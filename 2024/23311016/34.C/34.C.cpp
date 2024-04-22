#include<iostream>

using namespace std;

double factorial(double n)
{
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    cout << ((factorial(49.0))) / ((factorial(6.0)) * (factorial(49.0 - 6.0))) << endl;
    return 0;
}
