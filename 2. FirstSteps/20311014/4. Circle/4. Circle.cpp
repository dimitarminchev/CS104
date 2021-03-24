// 04. Периметър и лице на кръг

#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    float r, P, S;

    // Въвеждане на радиуса на окръжността
    cout << "r = ";
    cin >> r;

    // Изчисляваме лице и периметър на окръжността
    P = 2 * M_PI * r;
    S = M_PI * pow(r, 2);

    // Отпечатване на получените резултати
    cout << "Perimeter = " << P << endl;
    cout << "Area = " << S << endl;

    return 0;
}