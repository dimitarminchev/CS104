// 04. Периметър и лице на кръг
#include<iostream> 
#include<cmath> 
using namespace std;
int main()
{
    // Променливи необходими за работа на програмата
    float r, p, s;
    float PI = acos(-1.0); // 3.14

    // Въвеждане на радиуса на окръжността
    cout << "r=";
    cin >> r;

    // Изчисляваме лице и периметър на окръжността
    p = 2 * PI * r;
    s = PI * pow(r, 2);

    // Отпечатване на получените резултати
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}