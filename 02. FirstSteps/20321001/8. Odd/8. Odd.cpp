// 08. Сума от цифрите на нечетни позиции на 5 цифрено число
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "number=?" << endl;
    cin >> number;

    int a1 = (number / 10000) % 10;
    int a3 = (number / 100) % 10;
    int a5 = number % 10;

    int sum = a1 + a3+ a5;

    cout <<"sum="<< sum << endl;

    return 0;

}

