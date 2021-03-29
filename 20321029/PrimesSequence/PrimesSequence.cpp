// 2. Простите числа до зададено число
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int n;

   
    cout << "Upper Limit: ";
    cin >> n;

    
    for (int k = 2; k <= n; k++)
    {
        
        bool isPrime = true; // true = 1, false = 0

       
        for (int j = 2; j < sqrt(k); j++)
        {
            if (k % j == 0)
            {
               
                isPrime = false;
            }
        }

        
        if (isPrime)
        {
            cout << k << " ";
        }
    }

    return 0;
}