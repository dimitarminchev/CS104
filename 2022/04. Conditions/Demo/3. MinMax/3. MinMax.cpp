#include <iostream>
using namespace std;
int main()
{
    // Три промеливи
    int a, b, c;

    // Вход от потребителя
    cout << "a,b,c=?" << endl;
    cin >> a >> b >> c;

    // Намиране на минимум
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // Намиране на максимум
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Отпечатване на резултата
    cout << "min=" << min << endl;
    cout << "max=" << max << endl; 
 
    return 0;
}
