// 20. an2
#include<iostream>
#include<cmath>
using namespace std;

    int main() 
{
    int k;
    cout << "Въведи число: ";
    cin >> k;

    for (int i = 1; i <= k; ++i) 
        {
            float d = 1.0 / pow(i,2);
            cout << "1/" << i*i << " = " << d << endl;
        }

    return 0;
}