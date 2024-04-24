//21. Изведете редицата: An = (1 + (1/n))^n
#include<iostream>
using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;

    for (int k = 1; k <= n; k++)
    {
        float An = pow((1.0 + (1.0 / k)), k);
        cout << An << endl;
    }

    return 0;
}