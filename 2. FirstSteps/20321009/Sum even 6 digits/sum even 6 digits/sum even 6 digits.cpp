// Произведение от цифрите на четните позиции на 6 цифрено цисло

#include <iostream>
using namespace std;
int main()
{
    // Променлива а
    int a;

    // Въвеждане на 6 цифрено число
    cout << "a = ?" << endl;
    cin >> a;

    // Изчисления
    int a1 = (a / 100000) % 10;
    int a2 = (a / 10000) % 10;
    int a3 = (a / 1000) % 10;
    int a4 = (a / 100) % 10;
    int a5 = (a / 10) % 10;
    int a6 = (a / 1) % 10;

    // Резултат
    int b = a2 + a4 + a6;
    cout << "sum = " << b << endl;

    return 0; 
}