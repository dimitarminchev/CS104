// 2. Простите числа до зададено число

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Променливи
    int n;

    // Въвеждане на горна граница
    cout << "Upper Limit: ";
    cin >> n;

    // Изчисления за намиране на редицата на простите числа 
    for (int a = 2; a <= n; a++)
    {
        // Първоначалната ни хипотеза че числото е просто
        bool isPrime = true;

        // Съществува ли делител на a?    
        for (int b = 2;b <= sqrt(a); b++)
        {
            if (a % b == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime);
        {
            cout << a << " ";
        }
    }
    
    return 0;


}

