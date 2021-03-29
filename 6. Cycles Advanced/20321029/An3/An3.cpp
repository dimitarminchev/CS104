// 6. Изведете редицата: An = (1 + (1/n))^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n;

    
    cout << "Upper Limit: ";
    cin >> n;

    
    for (int k = 1; k <= n; k++)
    {
        float Ak = pow((1.0 + (1.0 / k)), k);
        cout << Ak << endl;
    }

    return 0;
}