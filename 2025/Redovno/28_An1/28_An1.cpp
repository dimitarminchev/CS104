#include <iostream>
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
        cout << (1.0 / i) << endl;
    }

    return 0;
}
