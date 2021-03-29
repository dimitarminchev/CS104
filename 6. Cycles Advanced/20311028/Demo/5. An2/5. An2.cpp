// 5. Изведете редицата: Аn = 1 / n^2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Необходими целочислени променливи
    int n;

    // Въвеждане на горна граница
    cout << "Upper Limit: ";
    cin >> n;

    // Намиране на елементите на редицата
    for (int k = 1; k <= n; k++)
    {
        float Ak = 1.0 / pow(k,2);
        cout << Ak << endl;
    }

    return 0;
}
