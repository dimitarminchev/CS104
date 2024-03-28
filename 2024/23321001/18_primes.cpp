// 18. Прости (тъпички) числа
#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {
        int k;
        cout << "Въведи число: ";
        cin >> k;
    for (int i = 2; i <= k; i++)
        {
            bool isPrime = true;
        for (int j = 2; j < i; j++)
            {
                if (i%j == 0)
                    {
                        isPrime = false;
                    }
            }
         if(isPrime == true) cout << i << " ";
        }
    
        return 0;
    }