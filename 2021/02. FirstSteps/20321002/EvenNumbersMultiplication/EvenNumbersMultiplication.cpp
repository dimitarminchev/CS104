// Произведение от цифрите на четните позиции на 6 цифрено число
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "a=?" << endl;
    cin >> a;
    int a2 = (a / 10000) % 10;
    int a4 = (a / 100) % 10;
    int a6 = (a / 1) % 10;
    int p = a2 * a4 * a6;
    cout << p << endl;

    return 0;
}