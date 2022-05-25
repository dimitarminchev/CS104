#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Моля, въведете пет цифрено число:" << endl;
    cin >> x;

    int a1 = (x / 10000) % 10;
    int a2 = (x / 1000) % 10;
    int a3 = (x / 100) % 10;
    int a4 = (x / 10) % 10;
    int a5 = (x / 1) % 10;

    cout << "Сумата е: " << a1 + a3 + a5 << endl;

    return 0;