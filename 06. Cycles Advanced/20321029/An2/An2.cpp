// 5. Изведете редицата: Аn = 1 / n^2
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
        float Ak = 1.0 / pow(k, 2);
        cout << Ak << endl;
    }

    return 0;
}