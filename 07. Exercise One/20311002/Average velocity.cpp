#include <iostream>
using namespace std;
int main()
{
    // Променливи за скорости и времена
    float t1, t2, v1, v2;

    // Въвеждаме необходимите промеливи от клавиатурата
    cout << "v1=?, t1=?, v2=?, t2=?" << endl;
    cin >> v1 >> t1 >> v2 >> t2;

    // Средна скорост
    double S = ((v1 * t1) + (v2 * t2)) / (t1 + t2);

    // Отпечатваме информацията
    cout << "S=" << S << endl;

    return 0;
}
