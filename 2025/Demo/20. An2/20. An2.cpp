#include <iostream>
using namespace std;
int main()
{
    // Цяло число коетo въвеждаме от клавиатурата
    int n;
    cout << "n=";
    cin >> n;

    // Сматаме и отпечатваме редицата
    for (int k = 1; k <= n; k++)
    {
        double Ak = 1.0 / (k*k);
        cout << Ak << endl;
    }

    return 0;
}
