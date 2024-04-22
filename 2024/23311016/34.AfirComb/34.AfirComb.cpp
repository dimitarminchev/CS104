#include<iostream>

using namespace std;

double factorial(double n)
{
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    cout << ((factorial(35.0))) / ((factorial(5.0)) * (factorial(35.0 - 5.0))) << endl;
    return 0;
}
