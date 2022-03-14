//  3. Делители на числата

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

    // Изчисления за намиране на делителите на числата 
    for (int a = 2; a <= n; a++)
    {
        cout << a << ": ";
        for (int b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                cout << b << ", ";
            }
        }
        cout << endl;
    }

    return 0;


}