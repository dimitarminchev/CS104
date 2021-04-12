// 07. Сума и произведение от цифрите на 4 цифрено число

#include <iostream>
using namespace std;
int main()
{
    // Създаване на променливите
    int a;

    // Въвеждане на четирицифреното число
    cout << "a = ?" << endl;
    cin >> a;

    // Разделяне на цифрите на числото
    int a1 = (a / 1000) % 10;
    int a2 = (a / 100) % 10;
    int a3 = (a / 10) % 10;
    int a4 = (a / 1) % 10;

    // Пресмятане на сума и произведение
    int s = a1 + a2 + a3 + a4;
    int p = a1 * a2 * a3 * a4;

    // Oтпечатване на резултата
    cout << "Sum = " << s << endl;
    cout << "Product = " << p << endl;

    return 0;
}