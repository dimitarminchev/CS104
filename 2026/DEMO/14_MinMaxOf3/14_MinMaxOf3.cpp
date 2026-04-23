#include <iostream>
using namespace std;
int main()
{
    // Три цели числа
    int a, b, c;

    // Въвеждаме числата
    cout << "Enter a,b and c:" << endl;
    cin >> a >> b >> c;

    // Минимум 
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // Максимум
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Отпечаваме ги
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}
