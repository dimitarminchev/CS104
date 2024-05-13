#include <iostream>
#include <cmath>
using namespace std;
    int main()
    
{
    int k;
    cout << "Въведи число: ";
    cin >> k;

    for (int i = 1; i <= k; ++i) 
        {
            float d = 1.0 / i; pow(i,2) ;
            cout << "1/" << i << " = " << d << endl;
        }

    return 0;
}
