// Упражнение 4 - извеждане на редицата: Аn = 1 / n
#include <iostream>
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
        float Ak = 1.0 / k;
        cout << Ak << endl;
    }

    return 0;
}
