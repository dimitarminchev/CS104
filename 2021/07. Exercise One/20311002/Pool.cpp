#include <iostream>
using namespace std;
int main()
{
    // Променливи за размери на басейна
    int x, y, z;

    // Променливи за дебити на трабите
    int d1, d2, d3;

    // Въвеждаме входните данни
    cout << "x=?, y=?, z=?" << endl;
    cin >> x >> y >> z;
    cout << "d1=?, d2=?, d3=?" << endl;
    cin >> d1 >> d2 >> d3;

    // Изчисление
    double h = (x * y * z) / (d1 + d2 + d3);

    // Отпечатваме времето
    cout << "h=" << h << endl;

    return 0;
}
