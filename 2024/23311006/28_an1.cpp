#include <iostream>
using namespace std;
    int main()
    
{
    int k;
    cout << "Въведи число: ";
    cin >> k;

    for (int i = 1; i <= k; ++i) 
        {
            float d = 1.0 / i;
            cout << "1/" << i << " = " << d << endl;
        }

    return 0;
}
