#include<iostream>
#include<cmath>
using namespace std;

    int main() 
{
    int k;
    cout << "Въведи число: ";
    cin >> k;

    for (int n = 1; n <= k; ++n) 
    {
            float d = pow((1.0 + (1.0 / n)),n);
            cout << "(1 +" << " 1/" << n << ") ^ " << n << " = " << d << endl;
    }

    return 0;
}
