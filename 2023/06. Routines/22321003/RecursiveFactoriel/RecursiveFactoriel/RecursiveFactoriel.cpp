#include <iostream>
using namespace std;

double fak(int n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}

int main()
{
    int k;
    cin >> k;
    cout << "k! = " << fak(k) << endl;
    return 0;
}