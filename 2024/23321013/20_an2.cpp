//20.
#include<iostream>
#include<cmath>
using namespace std;

int main()

{
    int n;
    cin >> n;

    for (int k = 1; k<= n; k++)
    {
        float An = 1.0 / pow(k,2);
        cout << An << endl;
    }
    return 0;
}