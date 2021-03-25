<<<<<<< HEAD:4. Conditions/20321005/1.SeqEq/SeqEq.cpp
// 1. Подобрение решението на квадратното уравнение
#include <iostream> // cout, cin
#include <cmath> // pow, sqrt
using namespace std;
int main()
{
    // Променливи за коефициентите на квадратното уравнение
    int a, b, c;

    // Въвеждане на коефициентите 
    cout << "a=?, b=?, c=?" << endl;
    cin >> a >> b >> c;

    // Необходима смета
=======
п»ї// 1. РїРѕРґРѕР±СЂРµРЅРёРµ РЅР° СЂРµС€РµРЅРёРµС‚Рѕ РЅР° РєРІР°РґСЂР°С‚РЅРѕС‚Рѕ СѓСЂР°РІРЅРµРЅРёРµ
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a=?, b=?, c=?" << endl;
    cin >> a >> b >> c;

>>>>>>> 76248d13186d6758cbfe3b7df7c68369a6bd4db3:4. Conditions/20321001/1. SqEq/1. SqEq.cpp
    float d = pow(b, 2) - 4 * a * c;

    if (d < 0)
    {
        cout << "No Real Soluions" << endl;
    }
    if (d == 0)
    {
        float x = (-b) / (2 * a);
        cout << "d=0" << endl;
        cout << "x1=x2" << endl;
        cout << "x=" << x << endl;

    }
    if (d > 0)
    {
        float x1 = ((-b) + sqrt(d)) / (2 * a);
        float x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "d=" << d << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;

    }

    return 0;
}

