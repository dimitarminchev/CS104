//21.
#include<iostream>
#include<cmath>
using namespace std;

int main()

{
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float An = pow(1.0+(1.0/k),k);
        cout << An << endl;
    }
    return 0;
}