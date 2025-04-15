#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Декларираме променлива и въвеждаме нейната стоност от клавиатурата
    int n;
    cout << "n=";
    cin >> n;

    // Изчисляваме редицата An
    for (float i = 1; i <= n; i++)
    {
        cout << (1.0 / pow(i,2)) << endl;
    }

    return 0;
}