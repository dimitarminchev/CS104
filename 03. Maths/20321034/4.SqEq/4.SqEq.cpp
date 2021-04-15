// 4.Квадратно уравнение.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Коефициент
    int a, b, c;



    cout << "a=?, b=? , c=?"<<endl;
    cin >> a >> b >> c;
    //Сметки
    float d = pow(b, 2) - 4 * a * c;
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    //Отпечатаме
    cout << "d=" << d << endl;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0 ;
}

   