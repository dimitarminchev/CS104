#include <iostream>
using namespace std;

double stepkn(int k, int n)
{
    if (n == 1) return k;
    else return k * stepkn(k, n - 1);
}

int main()
{
    int k, n;
    cout << "k="; cin >> k;
    cout << "n="; cin >> n;
    cout << "k*n=" << stepkn(k, n) << endl;

    return 0;
}